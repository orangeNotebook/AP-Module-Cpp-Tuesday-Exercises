//https://repl.it/join/zlnodhru-orangenotebook
//First i deconstructed the problem and decided to create a function that returns values from 1-4 depending on complexity
//I decided to use a complexity level variable and add to it every time it meets a new complexity criteria
//Once this function was created i created a complexity array that contains the different complexity levels
//Finally, i got user input, ran it through the complexity check and used the returned value as an index for the array

//importing
#include <iostream>
using namespace std;

//fn that performs a complexity check on a provided string
int complexityCheck(string str){
  //initialising variables
  int complexityLevel = 0, letters = 0, numbers = 0;
  string str2 = str;

    //checks if password contains letters or numbers
    if( str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890") != string::npos ){
      complexityLevel++;
      //checks if password is longer then 4 characters and contains both a letter and number
      if(str.length() >= 4 && str.find_first_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos && str.find_first_of("01234567890") != string::npos){
        complexityLevel++;
        //checks if password is longer then 8 characters
        if (str.length() >= 8){
          //checks how many numbers and letters the password has
          for(int i = 0; i < str.length(); i++){
            if(isalpha(str[i])){
              letters++;
            }if(isdigit(str[i])){
              numbers++;
            }
          }
          //checks if password has at least 4 letters and 2 numbers
          if(letters >= 4 && numbers >= 2){
            complexityLevel++;
            //checks if password has special characters
            if ( str.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890") != std::string::npos){
              complexityLevel++;
            }
          }
      }
    }
  }
  //returns the complexity level  
  return complexityLevel;
}

//main function
int main() {
  //initialising variables
  string complexity[] = {"Non-existant", "Weak", "Moderate", "Strong", "Very Strong"}; //complexity array
  string userInput;

  //getting user input
  cout << "Password: ";
  getline(cin, userInput);

  //outputing the password complexity
  cout << "The password '" << userInput << "' is " << complexity[complexityCheck(userInput)] << "\n\n";

  //re-running main in case the user wants to check another password
  main();
}
