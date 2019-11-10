/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

void printArray(int[], int);//pass array as parameter, and it's size
void sortArrAsc(int [], int);//pass array and size as parameter (Ascending numbers)
void inputArrData(int[], int);//pass array and size as parameter
void sortArrDesc(int[], int);//pass array and size as parameter (Descending numbers)
void inputArrDataDesc(int[], int);

int main()
{
 /*Working with arrays and vectors
 Teacher: Dr. Tyson McMillan */
 //array called "numbers"
 int numbers[8] = {23, 46, 12, 24, 1}; //5 values of 8 in Array, 3 empty but available.
 numbers[5] = 500; //assign value 500 to the 6th element (6th because 0 = 1st element)
 numbers[6] = 1000; //assign value 1000 to the 7th element
 numbers[7] = 89; //assing value 89 to the 8th element

 //get the size of numbers
 int numbers_array_size = sizeof(numbers)/ sizeof(int);
 
 cout << "\nNumbers[ ] array has " << numbers_array_size << " values. ";
 
 //print the current values in the numbers array
 printArray(numbers, numbers_array_size);
 sortArrAsc(numbers, numbers_array_size);
 inputArrData(numbers, numbers_array_size);
 inputArrDataDesc(numbers, numbers_array_size);
 
   return 0;
}
//Function definitions
void printArray(int array[], int size)
{
  //print Array Values, 1 per line
  cout << "\nPrinted Values: " << endl;
  for(int i = 0; i < size; i++)
  {
    cout << array[i] << endl; 
  }
}

void sortArrAsc(int array[], int size)
{
  int temp = 0; //needed for swap process (temporary use)
  for(int left = 0; left < size; left++)//number on the left
  {
     //number on the right
     for(int right = left + 1; right < size; right++)
     {
       //the swap magic happens here :)
       //Bubble sort: compare the left num to the right num
       //swap, if necessary.
       if(array[left] > array[right])//hint > is ASCENDING, < is DESCENDING
       {
         temp = array[left];
         array[left] = array [right];
         array[right] = temp;
       }
      }
  }
 printArray(array, size);//print the list after sorting the list
}

void inputArrData(int array[], int size)
{
  //1.) accept validated input into the array "size" values
  //2.) sort that Array ASC
  //3.) print the latest values in sorted order
  int input = 0; // my input storage variable
  for(int i = 0; i < size; i++)// step 1
  {
    cout << "\nPlease Enter number " << (i + 1) << " of " << size << ": ";
    input = validateInt(input);
    array[i] = input; //storing the validated values into the Array
  }
  sortArrAsc(array, size); // step 2 and step 3 (sortArrAsc already prints to screen)
  /* espand this code
  sort the inputed list DESC
  and print that to the screen
  After you have sorted the array ASC

  */
  //call sortArrDesc(array, size); on this line
}
void sortArrDesc(int array[], int size)
{
  int temp = 0; //needed for swap process (temporary use)
  for(int left = 0; left < size; left++)//number on the left
  {
     //number on the right
     for(int right = left + 1; right < size; right++)
     {
       //the swap magic happens here :)
       //Bubble sort: compare the left num to the right num
       //swap, if necessary.
       if(array[left] < array[right])//hint > is ASCENDING, < is DESCENDING
       {
         temp = array[left];
         array[left] = array [right];
         array[right] = temp;
       }
      }
  }
 printArray(array, size);//print the list after sorting the list
}
void inputArrDataDesc(int array[], int size)
{
  //1.) accept validated input into the array "size" values
  //2.) sort that Array ASC
  //3.) print the latest values in sorted order
  int input = 0; // my input storage variable
  for(int i = 0; i < size; i++)// step 1 ************************
  {
    cout << "\nPlease Enter number " << (i + 1) << " of " << size << ": ";
    input = validateInt(input);
    array[i] = input; //storing the validated values into the Array
  }
  sortArrDesc(array, size); // step 2 and step 3 (sortArrAsc already prints to screen)******************
  /* espand this code
  sort the inputed list DESC
  and print that to the screen
  After you have sorted the array ASC

  */
  //call sortArrDesc(array, size); on this line
}






