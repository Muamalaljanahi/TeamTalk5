# Install script for directory: C:/teamtalk5/Client/qtTeamTalk

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files/TeamTalk5SDK")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk" TYPE FILE FILES
    "C:/teamtalk5/teamtalk-win64/Client/Tolk/Tolk/lib/nvdaControllerClient64.dll"
    "C:/teamtalk5/teamtalk-win64/Client/Tolk/Tolk/lib/SAAPI64.dll"
    "C:/teamtalk5/teamtalk-win64/Client/Tolk/Tolk/lib/Tolk.dll"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk/" TYPE DIRECTORY FILES "C:/teamtalk5/Client/qtTeamTalk/windeployqt")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk/languages" TYPE FILE FILES
    "C:/teamtalk5/Client/qtTeamTalk/languages/bg.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/cs.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/da.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/de.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/en.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/es.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/fa.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/fr.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/he.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/hr.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/hu.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/id.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/it.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/ko.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/nl.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/pl.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/pt_BR.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/pt_PT.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/ru.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/sk.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/sl.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/th.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/tr.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/uk.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/vi.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/zh_CN.qm"
    "C:/teamtalk5/Client/qtTeamTalk/languages/zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk" TYPE EXECUTABLE FILES "C:/teamtalk5/Client/qtTeamTalk/TeamTalk5.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk" TYPE EXECUTABLE FILES "C:/teamtalk5/Client/qtTeamTalk/TeamTalk5.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk" TYPE EXECUTABLE FILES "C:/teamtalk5/Client/qtTeamTalk/MinSizeRel/TeamTalk5.exe")
  elseif(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Client/qtTeamTalk" TYPE EXECUTABLE FILES "C:/teamtalk5/Client/qtTeamTalk/RelWithDebInfo/TeamTalk5.exe")
  endif()
endif()

