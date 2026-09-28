#include<iostream>
using namespace std;
class counter{
int val1,val2;
public:
  counter(int v1,int v2){
  val1=v1;
  val2=v2;
  }
 void operator ++(int){
  val1++;
  val2++;
 
 
  }
  void operator --(int){
  
  val1--;
  val2--;
 
  }
  void display(){
  cout<<"Count1: "<<val1<<endl;
  cout<<"Count2: "<<val2<<endl;
  }
};
int main(){
counter c1(5,10);

c1++;
c1.display();
counter c2(5,10);
c2--;
c2.display();

return 0;
}
