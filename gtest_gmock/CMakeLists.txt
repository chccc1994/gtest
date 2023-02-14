cmake_minimum_required(VERSION 3.2)

project(gTest)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS_RELEASE "/MT")
set(CMAKE_CXX_FLAGS_DEBUG "/MTd")

include_directories("include")
# 检索模块所有文件
file(GLOB head_code "include/*")

link_directories("lib")
IF (CMAKE_BUILD_TYPE MATCHES "Release")
  file(GLOB dll_files "lib/Release/*.lib")
  file(COPY ${dll_files} DESTINATION ${CMAKE_BINARY_DIR}/Release)
  message("CMAKE_BUILD_TYPE: Release")
ELSEIF(CMAKE_BUILD_TYPE MATCHES "Debug")
  file(GLOB dll_files "lib/Debug/*.lib")
  file(COPY ${dll_files} DESTINATION ${CMAKE_BINARY_DIR}/Debug)
  message("CMAKE_BUILD_TYPE: debug")
ELSE()
    SET(CMAKE_BUILD_POSTFIX "")
ENDIF()

add_executable(gTest
              src/func.cpp
              src/main.cpp)

target_link_libraries(gTest ${dll_files})          