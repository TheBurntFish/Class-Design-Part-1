#include <iostream>
#include <string>

#include "Section A.h"
#include "Section B.h"
#include "Section C.h"


using namespace std;


//Testing URL = "https://example.com/some/path/to/file.txt";

int main() {
	cout << "Section A" << endl;
	//Create URL object
	URL myURL;
	

	//input URL as string into it
	myURL.newURL("https://example.com/some/path/to/file.txt");

	//outputs parts of the URL
	cout << myURL.getURL() << endl;
	cout << myURL.getScheme() << endl;
	cout << myURL.getAuthority() << endl;
	cout << myURL.getPath() << endl;


	cout << "\n \nSection B" << endl;

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


	cout << "\n \nSection C" << endl;

	store hallmart;
	order cart;

	item Bread;
	Bread.setAll("Bread", 1, 10.0, 50);
	item Corn;
	Corn.setAll("Corn", 2, 4.0, 100);

	
	hallmart.addStorage(Bread, 0);
	hallmart.addStorage(Corn, 1);

	hallmart.displayStorage();

	
	//2 bread for $10.0
	cart.addList(Bread, 2, 0);

	//10 Corn for $4.0 
	cart.addList(Corn, 10, 1);

	//should be 60
	cout << cart.getPrice() << endl;

}