//
// Created by Lukas_PC on 10/02/2019.
//

#ifndef PHOTOS_REST_API_MEMBERSCONTROLLER_H
#define PHOTOS_REST_API_MEMBERSCONTROLLER_H


#include <xstring>

class MembersController {

    std::string myString;

public:
    explicit MembersController(const std::string myString);

    std::string getMyString() const;
};


#endif //PHOTOS_REST_API_MEMBERSCONTROLLER_H
