

#include <iostream>
#include <string>
using namespace std;

class StudentDB
{
  private:
    string name;
    int age;

  public:
    void enterData()
    {
        cout<<"Enter name of student: ";
        cin>> name;
        cout<<"Enter age of student";
        cin>> age;
    }  

    void showData()
    {
        cout<<"name: " <<name <<endl;
        cout<<"age: " <<age <<endl;
    }
};

int main()
{
    StudentDB s1;

    // s1.enterData();
    s1.showData();



    return 0;
}

