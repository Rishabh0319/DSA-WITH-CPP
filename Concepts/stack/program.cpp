

// #include <iostream>
// using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int arrSize)           // constructor
//     {
//         size = arrSize;
//         arr = new int[size];
//         top = -1;
//     }

//     bool isEmpty()
//     {
//        if(top == -1)
//        {
//           return true;
//        }
//        else
//        {
//          return false;
//        }
//     }

//     void push(int element)
//     { 
//        if(size - top > 1)
//        {
//           top++;
//           arr[top] = element;
//        }
//        else
//        {
//          cout<< "stack overflow" <<endl;
//        }
       
//     }

//     int pop()
//     {
//        if(top >= 0)
//        {
//           int contain = arr[top];
//           top--;
//           return contain;
//        }
//        else
//        {
//          cout<< "Stack underflow" << endl;
//          return -1;
//        }
       
//     }

//     int peek()
//     {
//        if(top >= 0)
//        {
//         return arr[top];
//        }
//        else
//        {
//         cout<< "Stack is Empty" <<endl;
//         return -1;
//        }
       
//     }
    
// };


// int main()
// {
//    Stack st(5);

//    st.push(22);
//    st.push(45);
//    st.push(67);


//    cout<< st.peek() << endl;
//    cout<< st.pop() << endl;
//    cout<< st.peek() << endl;

// }



















#include<iostream>
using namespace std;


class Stack
{
    public: 

    int size;
    int *arr;
    int top;

    Stack(int arrSize)
    {
       size = arrSize;
       arr = new int[size];
       top = -1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"Stack overflow" <<endl;
        }
    }

    int pop()
    {
        if(top >= 0)
        {
            int temp = arr[top];
            top--;
            return temp;
        }
        else
        {
            cout<<"stack underflow" <<endl;
            return -1;
        }
    }

    int peek()
    {
        if(top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout<<"stack is empty" <<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

};


int main()
{
    Stack s1(5);

    s1.push(55);
    s1.push(45);
    s1.push(100);
    cout<< s1.peek() <<endl;
    cout<< s1.pop() <<endl;
    s1.push(90);
    cout<< s1.pop() <<endl;
    cout<< s1.pop() <<endl;
  
    cout<< s1.peek() <<endl; 
  
    return 0;
}











