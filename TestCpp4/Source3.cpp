#include <iostream>
#include <vector>
using namespace std;

class LibraryCollection
{
public:
	// attribute / data (related to whatever represented by the class nam)
	vector<string> booktitles;

	// operations (on the data)
	bool search(string title) {

		return false;
	}

	void add(string title) {

	}

	bool remove(string title) {

		return false;
	}
};

// Application Code
int main()
{
	LibraryCollection utpirc;
	//LibraryCollection uitmirc;

	//LibraryCollection librariesMalaysia[10];


	utpirc.add("Gutaran");
	utpirc.add("Kingdom");

	if (utpirc.search("XU") == false)
	{

	}


}