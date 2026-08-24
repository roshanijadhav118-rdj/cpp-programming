#include<iostream>
#include<string>

using namespace std;
 class product{
      private :
              int id;
              string name;
              float price;
              
      public :
            product(){
            id=0;
            name="unknown";
            price=0;
            }
            
            product (int prID, string prNAME,float prPRICE){
            id=prID;
            name=prNAME;
            price=prPRICE;
            }
            
            product (const product &get){
            id=get.id;
            name=get.name;
            price=get.price;
            }
            
            void display() const {
            cout<<"product-ID="<<id<<endl;
            cout<<"product-NAME="<<name<<endl;
            cout<<"product-PRICE="<<price<<endl;
            }
 };
 
 int main(){
 product P1;
 P1.display();
 product P2(35476,"Laptop",95000);
  cout<<endl;
 P2.display();
  cout<<endl;
 product P3(P2);
 P3.display();
 return 0;
 
 }
