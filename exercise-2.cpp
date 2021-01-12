//https://repl.it/join/plfeuviz-orangenotebook
//For this challenge i first decided to make a function that takes in a word and converts it to lower case, this
//function has a for loop that loops through a provided string and replaces each character with a lower case version
//of it using the 'tolower()' function. I then just had to call this in my main().

#include <iostream>
using namespace std;

//Function that converts entered string to lower case
string makeLower(string str1){
  //Defining variables
  int strLength = str1.length(); 
  char c; 
  char lowerCharacter[strLength]; 

  //Loop that repeats the amount of times as the string length
  for (int i = 0; i <= strLength - 1; i++){ 
    c = str1[i]; 
    //Sets the character to it's lower case equivalent if it has one
    lowerCharacter[i] = (tolower(c)); 
    //Replaces the letters in str1 to their lower case equivalent
    str1[i] = lowerCharacter[i]; 
  }
  //Returns the string in lower case
  return str1; 
}

//Main function
int main() {
  //Defining variable
  string word;

  //Gets user input
  cout << "Please enter a word: ";
  cin >> word;

  //Outputs user input in lowercase
  cout << word << " converted to lower case is: " << makeLower(word);
}
