#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=10;i++)
    {
        if(i==3||i==5)
        {
            continue;
           
        }
        cout<<i<<endl;
    }
}

/*Output
0
1
2
4
6
7
8
9
10*/
