#include <iostream>
#include <string>
using namespace std;

class student{
      protected:
                int RollNo;
                string name;
      public:
               void getdata()
               {
               cout<<"Enter Name: ";
               cin>>name;
               cout<<"Enter ROLL NO: ";
               cin>>RollNo;
               }
               
               void displaydata()
               {
               cout<<"Student Name: "<<name<<endl;
               cout<<"Roll NO: "<<RollNo<<endl;
               }

};

class studentExam: public student
  {   protected :
                float marks[6];
                
      public:
            void getMarks()
            {
            for (int i=0;i<6;i++)
            {
            cout<<"student"<<i+1<<":";
            cin>>marks[i];
            }
            }
            void displayMarks()
            {
            cout << "Marks:" << endl;

           for (int i = 0; i < 6; i++)
           {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
           }
           }
  };
  
  
  class studentResult: public studentExam
  {
        private:
               float total1;
               float percentage;
               
        public:
        void total()
        {
        total1=0;
        for(int i=0;i<6;i++)
        {total1 +=marks[i];
        }
        cout<<"Total: "<<total1<<endl;
        }
        
        void percent()
        {percentage=total1/6;
        cout<<"Percentage: "<<percentage;
        }
  
  };
  
  int main()
  {
  studentResult s;
  s.getdata();
  s.displaydata();
  s.getMarks();
  s.displayMarks();
  s.total();
  s.percent();
  return 0;
  }
