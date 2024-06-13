#include<iostream>
using namespace std;
int main()
{
int a, b;
int c, d;

cout<<"input 4 integers a,b,c and d"<<endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;

// Statement : a and b .
cout<<(a>b && c>d)<<endl;

cout<<(a>b || c>d)<<endl;

// C++ interprets true as 1
// C++ interprets false as 0

return 0;
}
