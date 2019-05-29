#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    cout<<"Please enter some text. Press <CTRL><D> to signal EoF "<<endl;
    vector<string>word;
    string token;
    while(cin>>token)
    {
        word.push_back(token);
    }
sort (word.begin(),word.end());
cout<<"Here are word counts for each word in your text:"<<endl;
int vsize=word.size();
if(vsize==0)
{
    cout<<"NO WORDS"<<endl;
    return 1;
}

int count=1;
token=word[0];
for(int i=1; i<vsize; i++)
{
    if(token!=word[i])
    {
    cout<<token<<" : "<<count<<endl;
    count =0;
    token=word[i];
    }
    count++;
}
cout<<token<<" : "<<count<<endl;
return 0;
}
