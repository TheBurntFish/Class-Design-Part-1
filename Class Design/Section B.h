
#pragma once

#include <string>
#include <iostream>
using namespace std;

class imageMetadata {
	public:
		
		//setters
		void setFileName(string name) {
			fileName = name;
		}
		void setImageType(string type) {
			if (type.compare("PNG") == 0 || type.compare("JPEG") == 0 || type.compare("GIF") == 0) {
				imageType = type;
			}
			else {
				cout << "Invalid Image Type" << endl;
			}
		}

		//I decided not to include exluding 31 days in Feb
		void setDateCreated(int month, int day, int year) {
			if (1 <= month && month <= 12) {
				if (1 <= day && day <= 31) {
					dateMonth = month;
					dateDay = day;
					dateYear = year;
				}
				else {
					cout << "Invalid Day" << endl;
				}
			}
			else {
				cout << "Invalid Month" << endl;
			}
		}	 

		void setSize(double size) {
			imageSize = size;
		}	 
		void setAuthorName(string name) {
			authorName = name;
		}
		void setDimensions(int w, int h) {
			width = w;
			height = h;
		}
		void setApertureSize(int apertureSize) {
			aperture = apertureSize;
		}
		void setExposureTime(int shutterSpeed) {
			exposure = shutterSpeed;
		}
		void setISO(int value) {
			ISO = value;
		}
		void setFlashEnabled(bool flash) {
			flashEnabled = flash;
		}


		//getters
		string getFileName() {
			return fileName;
		}
		string getImageType() {
			return imageType;
		}
		string getDateCreated() {
			
			return to_string(dateMonth) + "/" + to_string(dateDay) + "/" + to_string(dateYear);
		}
		double getSize() {
			return imageSize;
		}
		string getAuthorName() {
			return authorName;
		}
		

		string getDimensions() {
			return (to_string(width) + "x" + to_string(height));
		}

		int getApertureSize() {
			return aperture;
		}
		int getExposureTime() {
			return exposure;
		}
		int getISO() {
			return ISO;
		}
		bool getFlashEnabled() {
			return flashEnabled;
		}

	private:
		string fileName = "";
		string imageType = "";
		int dateMonth, dateDay, dateYear = 0;
		double imageSize = 0.0;
		string authorName = "";
		int width, height = 0;
		int aperture = 0;
		int exposure = 0;
		int ISO = 0;
		bool flashEnabled = false;

};

//displays everything
void display(imageMetadata image) {
	cout << "File name: " << image.getFileName() << endl;
	cout << "Image type: " << image.getImageType() << endl;
	cout << "Date created: " << image.getDateCreated() << endl;
	cout << "Image size: " << image.getSize() << endl;
	cout << "Author's name: " << image.getAuthorName() << endl;
	cout << "Dimensions: " << image.getDimensions() << endl;
	cout << "Aperture size: f/" << image.getApertureSize() << endl;
	cout << "Exposure time: 1/" << image.getExposureTime() << endl;
	cout << "ISO: " << image.getISO() << endl;
	cout << "Flash: " << image.getFlashEnabled() << endl;
	
}
