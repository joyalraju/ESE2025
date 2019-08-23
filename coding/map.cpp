
#include <iostream>
#include<map>
#include<string>
#include<fstream>
using namespace std;
int main() {
	ifstream fileStream;
map<string,int> dict;
	fileStream.open("words.txt");
	cout<<"Enter word: "<<endl;
	string w,line;
	cin>>w;
int count=0;

if(fileStream.is_open())
	{
	while(!fileStream.eof())
	{
	fileStream>>line;
	if(line.find(w)!=string::npos)
	++count;	
}
		dict[w]=count;
for(map<string,int>::iterator itr = dict.begin();itr != dict.end();++itr)

        cout<<itr -> first<< "\t" << itr ->second<< endl;
		
fileStream.close();}
else
				cout<<"File missing. \n";
				exit(1);
	
	return 0;
}
