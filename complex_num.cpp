#include<iostream>
using namespace std;

class complex
{
 
 public:
         int realNum,imgNum;
 public:
         complex ( int r=0,int i=0 ):realNum(r),imgNum(i){}
         
         complex add ( const complex &c)
         { return complex ( realNum + c.realNum , imgNum + c.imgNum ); }
         
         complex subtract ( const complex &c)
         { return complex ( realNum - c.realNum , imgNum - c.imgNum ); }
         
         void display()const
         { cout<<realNum<<"+i"<<imgNum<<endl;}
};

int main()
{
complex c1(4,5) , c2(8,9);
complex sum=c1.add(c2);
complex diff=c1.subtract(c2);

cout<<"First complex no.=";
c1.display();
cout<<"Second complex no.=";
c2.display();
cout<<"Addition:";
sum.display();

cout<<"substraction:";
diff.display();
return 0;
}
