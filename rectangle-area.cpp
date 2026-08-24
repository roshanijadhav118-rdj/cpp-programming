#include<iostream>
using namespace std;

class RECTarea{
      private :
              float a;
              float b;
              
              
      public :
             RECTarea(){
             a=0;
             b=0;
             }       
              
             RECTarea(float length,float breadth) {
             a=length;
             b=breadth;
             }
             
             RECTarea(const RECTarea &values){
             a=values.a;
             b=values.b;
             }
             
             void area() const {
             cout<<"Area="<<a*b;
             }
};


    int main(){
    RECTarea R;
    R.area();
    cout<<endl;
    RECTarea R2(4,5);
    R2.area();
    cout<<endl;
    RECTarea R3(R2);
    R3.area();
    return 0;
    }
