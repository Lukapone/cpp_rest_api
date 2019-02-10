cmake_minimum_required(VERSION 3.13)
project(photos_rest_api)

set(CMAKE_CXX_STANDARD 14)

#add_subdirectory(thirdparty/catch)
add_subdirectory(src)
#add_subdirectory(test)
#add_executable(photos_rest_api src/main.cpp src/rest_server/PhotosController.cpp src/rest_server/PhotosController.h)