cmake_minimum_required(VERSION 3.1)
project(BlueSMiRF_Library)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(BlueSMiRF_Library ${SOURCE_FILES} blueSMiRF.cpp blueSMiRF.h)