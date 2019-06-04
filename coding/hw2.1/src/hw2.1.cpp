#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout; using std::cin; using std::vector;
using std::endl; using std::sort; using std:: string;


int main()
{
    vector<string> array ;
    string ab;
    cout<< "Enter words for sorting. press <CTRL><D> to signal EoF"<<endl;
    while(cin>>ab)
    array.push_back(ab);
    sort (array.begin(),array.end());
    cout<< "Sorted words are: "<<endl;
    int s= array.size();
    if(s==0)
    {
        cout<<"NO WORDS"<<endl;
        return 1;
    }
    for (int i = 0; i < s; ++i)
    	{cout<< array[i]<<endl;}
}
