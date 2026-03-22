# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src/tolk-src"
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src/tolk-src-build"
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/Tolk"
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/tmp"
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src/tolk-src-stamp"
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src"
  "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src/tolk-src-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src/tolk-src-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/teamtalk5/teamtalk-win64/Client/Tolk/tolk-src-prefix/src/tolk-src-stamp${cfgdir}") # cfgdir has leading slash
endif()
