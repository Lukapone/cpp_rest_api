//
// Created by Lukas_PC on 10/02/2019.
//

#ifndef PHOTOS_REST_API_PHOTOSCONTROLLER_H
#define PHOTOS_REST_API_PHOTOSCONTROLLER_H


class PhotosController {
    int num_photos;

public:
    explicit PhotosController(int num_photos);

    int getNum_photos() const;
};


#endif //PHOTOS_REST_API_PHOTOSCONTROLLER_H
