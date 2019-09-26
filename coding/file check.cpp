#include <iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream a;
	a.open("words.txt");
if(a.is_open())
	{cout<<"file found";
	a.close();
	}
else
				cout<<"File not found \n";

return 0;
};

