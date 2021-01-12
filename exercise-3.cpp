//https://repl.it/join/mnolrlrm-orangenotebook
//First i deconstructed the problem and throught about how to check if a word is a palindrome, i concluded that i would
//need at least 3 functions, one that makes the string lowercase, one that reverses the word and one that checks if the
//reversed word matches the original lower case word. I used the same functions as in ex. 1 and ex. 2 to speed up development
//and then wrote a check if palindrome function. At this point my code was working, however i also wanted to be able to check
//if a word with spaces is a palindrome, such as 'Race car' instead of 'Racecar'. To do this i worked on a function that
//removes spaces, once completed i was satisfied with the program.

//importing
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

//fn that removes spaces
string fnRemoveSpace(string str){
  //removes all spaces
  string::iterator end_pos = remove(str.begin(), str.end(), ' ');
  str.erase(end_pos, str.end());
  return str;
}

//fn that makes string lower case
string fnMakeLower(string str){
  //Defining variables
  int strLength = str.length(); 
  char c; 
  char lowerCharacter[strLength]; 

  //Loop that repeats the amount of times as the string length
  for (int i = 0; i <= strLength - 1; i++){ 
    c = str[i]; 
    //Sets the character to it's lower case equivalent if it has one
    lowerCharacter[i] = (tolower(c)); 
    //Replaces the letters in str to their lower case equivalent
    str[i] = lowerCharacter[i]; 
  }
  //Returns the string in lower case
  return str; 
}

//fn that reverses the entered string
string fnReverseWord(string str1) {
  //Declaring variables
  int strLength = str1.length(); 
  int l = strLength - 1; 
  string str2 = str1; 
  
  //Loop that loops through each letter of str1 and replaces it with the corresponding letter in reverse. 
  for (int i=0; i <= strLength; i++){
    str1[i] = str2[l - i]; //Sets str1[loop number]s character to str2[last character - loop number]s character
  }
  return str1; //returns the reversed string
}

//fn that checks if a string is a palindrome
bool fnCheckIfPal(string str1){
  string str2 = str1;

  //removes str1 spaces and makes it lower
  str1 = fnMakeLower(fnRemoveSpace(str1));

  //flips str2
  str2 = fnMakeLower(fnReverseWord(fnRemoveSpace(str2)));
  
  //determines if string is palindrome
  if (str1 == str2){
    return true;
  }else {
    return false;
  }
}

//main function
int main() {
  //initialising varialbes
  string str1; 

  //unlimited loop for continuous palindrome checking
  while(true){ 
    //get input
    cout << "Please enter a word: ";
    getline (cin, str1);

    //check if input is plaindrome
    if(fnCheckIfPal(str1)){
      cout << "Yes, '" << str1 << "' is a palindrome\n\n";
    }else{
      cout << "Sorry, '" << str1 << "' is not a palindrome\n\n";
    }
  }
  return 0;
}
