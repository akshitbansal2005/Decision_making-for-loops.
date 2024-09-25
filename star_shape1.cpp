#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your choice: ";
    cin>>n;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

/*
Enter your choice: 5
* 
* * 
* * * 
* * * * 
* * * * * 
*/
