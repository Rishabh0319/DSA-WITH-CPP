// #include<iostream>
// using namespace std;

// class Complex
// {
//     private: 
//        int a,b;
//     public:
//        void set_data(int x,int y)
//        {
//           a = x;
//           b = y;
//        }   
//     void get_data()
//     {
//         cout<< "a: " <<a <<endl <<"b: " <<b;
//     }   
// };

// int main()
// {
//     Complex c1;
//     c1.set_data(12,45);
//     c1.get_data();
//     return 0;
// }



#include <iostream>
using namespace std;

class Employee
    {
        private:  
            int a,b,c;
        public:
            int d,e;
            void setData(int a1,int b1,int c1);   // function decliration

            void getData()
            {
               cout<<"value of a: " <<a <<endl;
               cout<<"value of b: " <<b <<endl;
               cout<<"value of c: " <<c <<endl;
               cout<<"value of d: " <<d <<endl;
               cout<<"value of e: " <<e <<endl;
            }
    };

    void Employee :: setData(int a1, int b1, int c1)        // define member class function using Employee
    {
        a = a1;
        b = b1;
        c = c1;
    }

int main()
{   
    Employee Rishabh;

    Rishabh.setData(12,23,34); 
    Rishabh.e = 200;
    Rishabh.d = 300;
    Rishabh.getData();
    return 0;
}




