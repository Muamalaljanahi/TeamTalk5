# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src/tinyxml2-classic-src"
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src/tinyxml2-classic-src-build"
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix"
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/tmp"
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src/tinyxml2-classic-src-stamp"
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src"
  "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src/tinyxml2-classic-src-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src/tinyxml2-classic-src-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/teamtalk5/teamtalk-win64/Client/TeamTalkClassic/tinyxml2-classic-src-prefix/src/tinyxml2-classic-src-stamp${cfgdir}") # cfgdir has leading slash
endif()
