
// ************************  WAP to check whether a character is alphabet or not ********************
/* 
#include<iostream>
using namespace std;

int main()
{
   char ch;

   cout<< "Enter a character: ";
   cin>> ch;

   if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'z')
   {
      cout<< "character is Alphabet";
   }
   else
   {
     cout<< "Character is not Alphabet";
   }
  
   return 0;
}

 */



// ************************  WAP to input any Alphabet and check whether it is vowel or consonent ********************

/* 

#include<iostream>
using namespace std;

int main()
{
    char character_input;

    cout<< "Enter a Charactor: ";
    cin>> character_input;

    if((character_input == 'a' || character_input == 'e' || character_input == 'i' || character_input == 'o' || character_input == 'u') 
       && (character_input == 'A' || character_input == 'E' || character_input == 'I' || character_input == 'O' || character_input == 'U')
      )
    {
        cout<< "Character is vowel";
    }
    else
    {
       cout<< "Character is consonent";
    }

    return 0; 
}


 */

 
// ++++++++++++ MORE OPTIMIZE LOGIC +++++++++++++

/* 
#include<iostream>
using namespace std;

int main()
{
    char character;
    cout<< "Enter a Character: ";
    cin>> character;

    if(
        (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
        || (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
      )
      {
        cout<< character << " is vowel";
      }
      else if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
      {
        cout<< character << " is Consonent";
      }
      else
      {
        cout<< character <<" is not a Character";
      }
      
    return 0;
}

 */


// ************************  WAP to  ********************




