cmake_minimum_required(VERSION 3.5.0)

project(QtCurl_ssl
  VERSION
    1.0
  DESCRIPTION
    "Qt based cURL ssl certificate verification"
  LANGUAGES
    CXX
)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

find_package(Qt5Core REQUIRED)

find_package(OpenSSL REQUIRED)

set(SRC_FILES
		main.cpp
		mThread.cpp
		)

set(HEADER_FILES
		mThread.h
		)


add_executable(${PROJECT_NAME} ${SRC_FILES} ${HEADER_FILES})

add_definitions(-DQT_NO_VERSION_TAGGING)

target_link_libraries(${PROJECT_NAME} Qt5::Widgets curl)

qt5_use_modules(${PROJECT_NAME} Core Network)

include_directories(.)


