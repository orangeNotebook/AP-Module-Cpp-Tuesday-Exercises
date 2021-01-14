//https://repl.it/join/fldustaw-orangenotebook
//First i created a string array containing a list of 5 names, after this i calculated its length and created a for loop
//that displayed all of the names. Next i took user input and wrote a for loop to compare it to every index of the array.
//If the user input matched one of the names in the array i replaced that index with a blank string, and then wrote an if
//statement to prevent outputting blank strings. However, this method ment that after removing names the array had blanks
//in-between non-blank indexes, to prevent this i changed the program to shift all of the indexes after the matching index
//back one, this resulted in all of the empty indexes being at the end of the array. Finally i put it all in a while loop
//so multiple names could be removed and added a counter to track the amount of employees.

//importing
#include <iostream>
#include<string>
using namespace std;

//main function
int main() {
  //initialising variables
  string arr[] = {"John Smith", "Jaelynn Stuart", "Kaley Barajas", "Walter Collier", "Cale Myers"};
  int len = sizeof(arr)/sizeof(arr[0]), counter = 0;
  string userInput;
  
  //while loop to allow for multiple employees being removed
  while(true){
    //displaying the amount of employees
    cout << "There are " << len - counter << " employees: \n";
    //displaying all of the employees
    for(int i = 0; i < len; i++){
      //if statement to check if an array is blank, if it is it doesn't output it
      if(arr[i] == ""){
      }else{
      cout << arr[i] << "\n";
      }
    }
    
    //getting user input 
    cout << "\nEnter an employee name to remove: ";
    getline(cin, userInput);

    //for loop with if statement to check if user input matches any of the names in the array
    for(int i = 0; i < len; i++){
      if(arr[i] == userInput){
        //for loop to shift all of the names after the matched name back an index
        for(int j = i; j < len; j++){
          arr[j] = arr[j + 1];
        }
        //incrementing counter to track how many names have been removed
        counter++;
      }
    }
    //outputting an empty line for formatting
    cout << "\n";
  }
}
