#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using std::cout; using std::cin; using std::list;
using std::endl; using std::sort; using std:: string;


int main()
{
    list<string> array ;
    list<string>::iterator it;
    string ab;
    cout<< "Enter words for sorting. press <CTRL><D> to signal EoF"<<endl;
    while(cin>>ab)
    array.push_back(ab);
    array.sort();
    cout<< "Sorted words are: "<<endl;
    int s= array.size();
    if(s==0)
    {
        cout<<"NO WORDS"<<endl;
        return 1;
    }
    else
    	{
    	for (it=array.begin(); it!=array.end(); ++it)
    	cout<< *it<<endl;}
    return 0;
}
