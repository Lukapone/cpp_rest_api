//
// Created by Lukas_PC on 10/02/2019.
//

#include "PhotosController.h"

PhotosController::PhotosController(int num_photos)
    : num_photos(num_photos) {
}

int PhotosController::getNum_photos() const {
    return num_photos;
}
