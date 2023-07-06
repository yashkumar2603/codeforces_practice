#include<iostream>
#include<cstring>
using namespace std;

void abb(char str[])
{
    if(strlen(str)>10)
    {
        cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1]<<endl;
    }
    else cout<<str<<endl;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char str[100];
        cin>>str;
        abb(str);
    }
    return 0;
}