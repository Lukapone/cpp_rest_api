project(rest_server)

# All sources that also need to be tested in unit tests go into a static library
add_library(rest_server_lib STATIC rest_server/PhotosController.cpp rest_server/PhotosController.h
        rest_server/MembersController.cpp rest_server/MembersController.h)
target_include_directories(rest_server_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# The main program
add_executable(rest_server_main main.cpp)
target_link_libraries(rest_server_main PRIVATE rest_server_lib)