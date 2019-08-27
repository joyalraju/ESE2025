#include <iostream>
#include <list>
#include <algorithm>
using std::cout; using std::cin; using std::list;
using std::endl; using std::sort;

int main()
{
    list<int> array;
	list<int>::iterator it;
    int a;
    cout<< "Enter numbers for sorting. press <CTRL><D> to signal EoF"<<endl;
    while(cin>>a)
    {
    array.push_back(a);
    }
    array.sort();
    cout<< "Sorted numbers are: "<<endl;
        int s= array.size();
           if(s==0)
        {
            cout<<"NO numbers"<<endl;
            return 1;
        }
        else
        	{
        	for (it=array.begin(); it!=array.end(); ++it)
        	cout<< *it<<endl;}
        return 0;
    }

