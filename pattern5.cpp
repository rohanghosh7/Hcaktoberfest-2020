#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=i || j>=2*n + 1 - i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n*2;j++)
        {
            if(j<=n + 1 - i || j>=n + i)
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}