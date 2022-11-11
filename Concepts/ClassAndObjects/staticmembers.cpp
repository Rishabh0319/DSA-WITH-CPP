

//    static members

// 1-->  static member variable 
// 2-->  static member function


// #include<iostream>
// using namespace std;


// class Account
// {
//     private:
//     int balance;           // instance member variables
//     static float roi;      // static member variable or (class variable)

//     public:
//         void setBalance(int b)     // instance member function;
//         {
//             balance = b;
//         }
//         void showBalance()
//         {
//             cout<< balance;
//         }
// };

// float Account:: roi = 3.5;    // assigning static variable value  bydefault zero(0)

// int main()
// {
//    Account a1; 
//    a1.setBalance(78.5);
//    a1.showBalance();

//    return 0;
// }






//     Static member function


#include<iostream>

class Account
{
    private:
        int balance;          // instance mamber variables
        static float roi;     // static member variable   or   class memeber variable

    public:
        void setBalance(int b)          // instiance member function
        {
           balance = b;
        }
        static void setRoi(int r)       // static member function
        {
            roi = r;
        }
        static float getRoi()
        {
            return roi;
        }
};

int main()
{
    Account:: setRoi(3.4);
    static float r = Account:: getRoi();
    
    return 0;
}






