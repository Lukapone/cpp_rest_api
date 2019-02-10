cmake_minimum_required(VERSION 3.5)
#project(photos_rest_api)

set(CMAKE_CXX_STANDARD 14)

#message(${CMAKE_MODULE_PATH})

#find_package(Catch2 REQUIRED)
#set()

message("Hi")

add_subdirectory(external_libraries/Catch2)
add_subdirectory(src)
add_subdirectory(test)
#add_executable(photos_rest_api src/main.cpp src/rest_server/PhotosController.cpp src/rest_server/PhotosController.h)