

/* ******************* WAP to add two 3x3 matrix and store and print in another one ****************** */

        // EXAMPLE

        // 2 3 4     4 5 7     6 8 11 
        // 5 8 7  +  2 4 9  =  7 12 16
        // 4 7 8     1 3 4     5 10 12

// #include <iostream>
// using namespace std;

// int main()
// {

//     int arr1[3][3], arr2[3][3], arr3[3][3];

//     // input first matrix

//     cout<<"Enter 9 Elements in first matrix: " <<endl;
    
//     for(int row=0 ; row < 3 ; row++)
//     {
//        for(int column=0 ; column < 3 ; column++)
//        {
//           cout<<"enter element position " <<"("<<row+1<<"X"<<column+1<<")"<<": ";
//           cin>> arr1[row][column];
//        }
//     }
//     cout<<endl;

//     // input second matrix

//     cout<<"Enter 9 Elements in second matrix: " <<endl;
    
//     for(int row=0 ; row < 3 ; row++)
//     {
//        for(int column=0 ; column < 3 ; column++)
//        {
//           cout<<"enter element position " <<"("<<row+1<<"X"<<column+1<<")"<<": ";
//           cin>> arr2[row][column];
//        }
//     }


//     // addition of both matrix and print also

//         for(int row=0 ; row < 3 ; row++)
//     {
//        for(int column=0 ; column < 3 ; column++)
//        {
//           arr3[row][column] = arr1[row][column] + arr2[row][column];

//           cout<< arr3[row][column] <<" ";
//        }
//        cout<<endl;
//     }


//     return 0;
// }




// ********************* input and output operations in 2d Arrays ********************

// #include <iostream>
// using namespace std;

// int main()
// {
//    // creating array
//    int arr[3][4];

//    // taking input (row wise) in array
//    cout<<"enter 12 elements in array: ";

//    for(int r=0 ; r < 3 ; r++)
//    { 
//       for(int c=0 ; c < 4 ; c++)
//       {
//          cin>> arr[r][c];
//       }
//    }

//    // printing the array data

//    for(int r=0 ; r < 3 ; r++)
//    {
//       for(int c=0 ; c < 4 ; c++)
//       {
//          cout<< arr[r][c] <<" ";
//       }
//       cout<< endl;
//    } 

//    return 0;
// }


//   ************************ input and output operations column wise **************************


// #include <iostream>
// using namespace std;

// int main()
// {
   // creating array
   // int arr[3][3];

   // taking input column wise

   // cout<< "enter 9 elements in array" <<endl;

   // for(int r=0 ; r < 3 ; r++)
   // {
   //    for(int c=0 ; c < 3 ; c++)
   //    {
   //       cin>> arr[c][r];
   //    }
   // }

//    for(int c=0 ; c < 3 ; c++)
//    {
//       for(int r=0 ; r < 3 ; r++)
//       {
//          cin>> arr[r][c];
//       }
//    }
 
//    cout<<endl << "print 9 elements from array" <<endl;

//    for(int r=0 ; r < 3 ; r++)
//    {
//       for(int c=0 ; c < 3 ; c++)
//       {
//          cout<< arr[r][c] <<" ";
//       }
//         cout<< endl;
//    }

//    return 0;
// }



// *********************** LINEAR SEARCH *************************

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//    int target; bool find=false;
//    cout<<"Enter target to search: ";
//    cin>> target;
//    for(int r=0 ; r < 3 ; r++)
//    {
//       for(int c=0 ; c < 3 ; c++)
//       {
//          if(arr[r][c] == target) 
//          {
//             find = true;
//             break;
//          }
//       }
//    }

//    if(find) 
//    {
//       cout<<"element is find";
//    }
//    else
//    {
//       cout<<"element is not find";
//    }

//    return 0;
// }



// ********************** row wise sum problem ********************

// #include<iostream>
// using namespace std;

// int main()
// {
//    int arr[3][3];

//    cout<<"enter 9 elements in matrix: ";
//    for(int r=0 ; r < 3 ; r++)
//    {
//       for(int c=0 ; c < 3 ; c++)
//       {
//          cin>> arr[r][c]; 
//       }
//    }

//    for(int r=0 ; r < 3 ; r++)
//    {
//       int sum=0;
//       for(int c=0 ; c < 3 ; c++)
//       {
//          sum += arr[r][c]; 
//       }
//       cout<< "sum of element of row " <<r+1 <<": "<<sum <<endl;
//    }

//    return 0;
// }






// ***************** column wise sum problem ********************


// #include <iostream>
// using namespace std;
// int main()
// {
//    int arr[3][3];

//    cout<<"enter 9 elements in matrix: ";
//    for(int r=0 ; r < 3 ; r++)
//    {
//       for(int c=0 ; c < 3 ; c++)
//       {
//          cin>> arr[r][c]; 
//       }
//    }

//    for(int r=0 ; r < 3 ; r++)
//    { 
//       int sum=0;
//       for(int c=0; c < 3 ; c++)
//       {
//          sum += arr[c][r];
//       }

//       cout<<"sum of element of column "<< r+1<< ": " <<sum <<endl;
//    }

//    return 0;
// }





//  ******************** Largest row sum *******************

// #include <iostream>
// using namespace std;
// int main()
// {
//    int arr[3][3];
//    int max = 0;
//    int row = -1;

//    cout<<"enter 9 elements in matrix: ";
//    for(int r=0 ; r < 3 ; r++)
//    {
//       for(int c=0 ; c < 3 ; c++)
//       {
//          cin>> arr[r][c]; 
//       }
//    }

//    for(int r=0 ; r < 3 ; r++) 
//    {
//       int sum=0;
//       for(int c=0 ; c < 3 ; c++)
//       {
//          sum = sum + arr[r][c];
//       }
//       if(sum > max)
//       {
//          max = sum;
//          row = r+1;
//       }
//    }

//    cout<<"maximum row sum is: " << max <<" in row no " << row;

//    return 0;
// }



// ************************ WAP to perform scaler matrix multiplication *********************


#include <iostream>
using namespace std;

main()
{
   int row,col;
   cout<<"enter row and column for 2D matrix:  ";
   cin >>row >>col;
   int arr[row][col];

   cout<<"enter " <<row*col << " elements in array" <<endl;

   for(int r=0 ; r < row; r++)
   {
      for(int c=0 ; c < col ; c++)
      {
         cout<< "enter " <<r<<" x "<<c <<" position element: "<<endl;
         cin>> arr[r][c];
      } 
   }

   int multiplyer;
   cout<<"enter any number to multiply matrix: ";
   cin>> multiplyer;

   for(int r=0 ; r < row ; r++)
   {
      for(int c=0 ; c < col ; c++)
      {
         arr[r][c] = arr[r][c] * multiplyer;
      }
   }

   for(int r=0 ; r < row ; r++)
   {
      for(int c=0 ; c < col ; c++)
      {
         cout<< arr[r][c] <<" ";
      }
      cout<<endl;
   }

   return 0;
}



















