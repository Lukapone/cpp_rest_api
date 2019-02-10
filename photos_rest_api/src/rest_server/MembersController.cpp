//
// Created by Lukas_PC on 10/02/2019.
//

#include "MembersController.h"

MembersController::MembersController(const std::string myString) : myString(myString) {}

std::string MembersController::getMyString() const {
    return myString;
}
