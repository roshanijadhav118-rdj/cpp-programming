#include<iostream>
using namespace std;
int main()
{
int a,b,c,ch;

cin>>a>>b;
cout<<"1.add"<<endl<<"2.sub"<<endl<<"3.multiply"<<endl<<"4.division"<<endl;
cout<<"enter your choice=";
cin>>ch;
switch(ch)
{
case 1:
     c=a+b;
     cout<<"add="<<c;
     break;
case 2:
      c=a-b;
     cout<<"sub="<<c;
     break;
case 3:
     c=a*b;
     cout<<"multiplication="<<c;
     break;
case 4:
     c=a/b;
     cout<<"division="<<c;
     break;
default:
    cout << "Invalid choice";
     }
}
