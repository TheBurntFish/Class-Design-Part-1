#pragma once

#include <string>

using namespace std;

class URL{
public:
	void newURL(string URL) {
		fullURL = URL;

		size_t schemeEnd = URL.find("//");
		scheme = URL.substr(0, schemeEnd);

		size_t authorityEnd = URL.find("/", schemeEnd + 2);
		authority = URL.substr(schemeEnd, authorityEnd - schemeEnd);

		path = URL.substr(authorityEnd);
	}
	//getters 
	string getURL() {
		return fullURL;
	}
	string getScheme() {
		return scheme;
	}
	string getAuthority() {
		return authority;
	}
	string getPath() {
		return path;
	}
	

private:
	string fullURL = "";
	string scheme = "";
	string authority = "";
	string path = "";

};


