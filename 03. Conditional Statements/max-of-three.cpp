// Maximum of three numbers using nested IF

#include<iostream>
using namespace std;
    
int main()
{
    int a, b, c;
    cout<<"Enter three numbers :";
    cin>>a>>b>>c;

    if ((a>b)&&(a>c))
    {
        cout<<"Max is "<<a;
    }
    else
    {
        if (b>a)
        {
           cout<<"Max is "<<b; 
        }
        else
        {
            cout<<"Max is "<<c;
        }
    }
        
    return 0;
}