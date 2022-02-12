#include <iostream>
#include <string>

#include "Section B.h"

using namespace std;

int mainb() {
	//Create ImageMetadata object
	imageMetadata pictureOfAHorse;

	//add inputs
	pictureOfAHorse.setFileName("Horse");
	pictureOfAHorse.setImageType("PNG");
	pictureOfAHorse.setDateCreated(5, 2, 1910);
	pictureOfAHorse.setSize(5000.0);
	pictureOfAHorse.setAuthorName("Frank");
	pictureOfAHorse.setDimensions(400, 200);
	pictureOfAHorse.setApertureSize(5);
	pictureOfAHorse.setExposureTime(8);
	pictureOfAHorse.setISO(400);
	pictureOfAHorse.setFlashEnabled(false);
	
	

	//outputs
	display(pictureOfAHorse);
	
}