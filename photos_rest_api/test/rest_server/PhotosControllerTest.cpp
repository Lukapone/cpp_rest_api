//
// Created by Lukas_PC on 10/02/2019.
//


#include <catch2/catch.hpp>
#include <iostream>

TEST_CASE("first test case"){

    std::cout << "hi" << std::endl;
    REQUIRE(true == true);
}


TEST_CASE("second test case"){

    std::cout << "hia a" << std::endl;
    REQUIRE(true == false);
}