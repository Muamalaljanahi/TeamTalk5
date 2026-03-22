# TeamTalk 5 Release Build Script (PowerShell)
# This script automates the build and deployment process for a Release version.

Write-Host ">>> Starting TeamTalk 5 Release Build..." -ForegroundColor Cyan

# 1. Build the project using CMake
Write-Host ">>> Building project in Release mode..." -ForegroundColor Yellow
cmake --build teamtalk-win64 --config Release --target TeamTalk5
if (-not $?) {
    Write-Host "!!! Error: Build failed. Please check the logs." -ForegroundColor Red
    exit
}

# 2. Prepare the Release_Build folder
Write-Host ">>> Preparing the Release_Build directory..." -ForegroundColor Yellow
if (Test-Path "Release_Build") {
    Remove-Item -Recurse -Force "Release_Build"
}
New-Item -ItemType Directory -Force -Path "Release_Build"

# 3. Copy core application files and DLLs
Write-Host ">>> Copying executable and libraries..." -ForegroundColor Yellow
Copy-Item "Client/qtTeamTalk/TeamTalk5.exe" "Release_Build/"
Copy-Item "Client/qtTeamTalk/*.dll" "Release_Build/"

# 4. Copy Resources (Sounds & Languages)
if (Test-Path "Client/qtTeamTalk/Sounds") {
    Write-Host ">>> Copying Sounds folder..." -ForegroundColor Yellow
    Copy-Item -Recurse "Client/qtTeamTalk/Sounds" "Release_Build/"
}

if (Test-Path "Client/qtTeamTalk/languages") {
    Write-Host ">>> Copying Languages folder..." -ForegroundColor Yellow
    # Note: We copy the .qm files needed for the release
    New-Item -ItemType Directory -Force -Path "Release_Build/languages"
    Copy-Item "Client/qtTeamTalk/languages/*.qm" "Release_Build/languages/"
}

# 5. Collect Qt dependencies (Excluding Qt translations)
Write-Host ">>> Running windeployqt (Skipping Qt translations)..." -ForegroundColor Yellow
$WindeployqtPath = "C:\Qt\6.9.2\msvc2022_64\bin\windeployqt.exe"

if (Test-Path $WindeployqtPath) {
    # We use --no-translations to keep the build clean as we moved our own languages manually
    & $WindeployqtPath --release --no-translations --compiler-runtime "Release_Build/TeamTalk5.exe"
} else {
    Write-Host "!!! Warning: windeployqt.exe not found. You might need to add Qt bin to PATH." -ForegroundColor Magenta
}

Write-Host ">>> Done! Your standalone release is ready in the 'Release_Build' folder." -ForegroundColor Green
Write-Host ">>> You can now zip this folder and distribute it." -ForegroundColor Cyan
