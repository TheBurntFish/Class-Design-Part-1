#pragma once

#include <string>

using namespace std;

class item {
	
public:
	void setAll(string name, long ID, double price, int quantity){
		itemName = name;
		itemID = ID;
		itemPrice = price;
		itemQuantity = quantity;
	}
	void setName(string name) {
		itemName = name;
	}
	void setID(long ID) {
		itemID = ID;
	}
	void setPrice(double price) {
		itemPrice = price;
	}
	void setQuantity(int quantity) {
		itemQuantity = quantity;
	}

	string getName() {
		return itemName;
	}
	long getID() {
		return itemID;
	}
	double getPrice() {
		return itemPrice;
	}
	int getQuantity() {
		return itemQuantity;
	}

private:
	string itemName = "";
	long itemID = 0.0;
	double itemPrice = 0.0;
	int itemQuantity = 0;
};

class store {
public:
	void addStorage(item item, int position) {
		storage[position] = item;
	}
	
	void displayStorage() {
		for (int i = 0; i < 100; i++) {
			if(storage[i].getName().compare("") != 0)
				cout << storage[i].getName() << " x " << storage[i].getQuantity() << endl;
		}
	}

private:
	item storage[100];
};


class order {
public:
	item orderItem[10];
	int orderQuantity[10];
	void addList(item item, int quantity, int position) {
		orderItem[position] = item;
		orderQuantity[position] = quantity;
	}

	string getPrice() {
		for (int i = 0; i < 10; i++) {
			total = total + (orderItem[i].getPrice() * orderQuantity[i]);
		}
		return "$" + to_string(total);
	}


private:
	double total = 0.0;
};