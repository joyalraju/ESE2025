#include <iostream>
#include <vector>
using std::cout; using std::cin; using std::vector;
using std::endl; using std::swap;

vector<int> sort(vector<int>array)
{
    for (int i = 1; i < array.size(); ++i)
    {
        for (int j = 0; j < array.size() - 1; ++j)
        {
            if (array[j] > array[i])
            swap(array[j], array[i]);
        }
    }

    return array;
}

int main()
{
    vector<int> array ;
    int a;
    cout<< "Enter numbers for sorting. press <CTRL><D> to signal EoF"<<endl;
    while(cin>>a)
    {
    array.push_back(a);
    }
    cout<< "Sorted numbers are: "<<endl;

    for (int i = 0; i < array.size(); ++i)
    {
    cout << sort(array)[i] <<endl;
    }
}
