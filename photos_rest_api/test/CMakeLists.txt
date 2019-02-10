project(rest_server_tests)

# The test program
add_executable(tests testmain.cpp rest_server/PhotosControllerTest.cpp)

#this is not required with find package

target_link_libraries(tests PRIVATE rest_server_lib Catch2)

#message(${CMAKE_MODULE_PATH})

#LIST(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}../external_libraries/contrib")

#include(CTest)
#include(ParseAndAddCatchTests)
#ParseAndAddCatchTests(tests)