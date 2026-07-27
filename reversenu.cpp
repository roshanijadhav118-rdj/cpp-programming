#include<iostream>
using namespace std;
int main()
{
int num=0,reverse=0;
cout<<"num=";
cin>>num;
int temp = num; 
while(temp>0)                                                                                                     
{
int digit = temp % 10;          
  reverse =(reverse*10)+digit; 
  temp=temp/10;    
}
cout<<"reverse="<<reverse;
    return 0;
}
