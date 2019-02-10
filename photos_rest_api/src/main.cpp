#include <iostream>
#include <rest_server/PhotosController.h>
#include <rest_server/MembersController.h>


int main() {

    PhotosController myController = PhotosController(5);
    MembersController mc = MembersController("hello");

    std::cout << "Num photos" << myController.getNum_photos() << std::endl;
    std::cout << "Member says " << mc.getMyString().c_str() << std::endl;
    return 0;
}