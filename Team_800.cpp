#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i = 0; i<n; i++)
    {
        int c;
        int count=0;
        
        for(int j=0; j<3; j++)
        {
            cin>>c;
            if(c==1)
            {
                count++;
            }
        }
        if(count>=2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}