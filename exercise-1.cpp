//https://repl.it/join/xynyamub-orangenotebook
//First i decided to work on a function that reverses any given word, i decided that this would be easiest done
//with a for loop that loops through each letter of the string and replaces it with the corrseponding letter in
//reverse. This works because a string is just an array. AFter this i just had to run this function with a provided
//user input.

#include <iostream>
using namespace std;

//Function that reverses the entered string
string reverseword(string str1) {
  //Declaring variables
  int strLength = str1.length(); //Settings strLength equal to the length of the string
  int l = strLength - 1; //Setting l equal to the length of the string - 1
  string str2 = str1; //Copying str1 int str2
  
  //Loop that loops through each letter of str1 and replaces it with the corresponding letter in reverse. 
  for (int i=0; i <= strLength; i++){
    str1[i] = str2[l - i]; //Sets str1[loop number]s character to str2[last character - loop number]s character
  }
  return str1; //returns the reversed string
}

//Main function
int main() {
  //Declaring variables
  string word;

  //Getting user input
  cout << "Please enter a word: ";
  cin >> word;

  //Returning reversed word
  cout << word << " spelt backwards is: " << reverseword(word);
}
