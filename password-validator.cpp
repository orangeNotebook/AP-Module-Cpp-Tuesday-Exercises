//https://repl.it/join/sfzahgtg-orangenotebook
//I first created an account structure and created a users array with 2 user accounts (Mike and Kacper)
//After this i got input from the user and wrote an if statement to check if the account is correct / exists
//At this point my code was getting messy so i refactored it by moving all authentication code into a separate function
//Finally i used the output of my authentication function to determine if the user succesfully logs in or not

//importing
#include <iostream>
using namespace std;

//account structure
struct Account {
   string name;
   string username;
   string password;
};

//fn that authenticates username and password
int authentication(string username, string password, Account users[]){
  //for loop that checks if the provided username and password match any of the accounts in users[]
  for(int i = 0; i <= sizeof(users); i++ ){
    if(users[i].username == username){
      if(users[i].password == password){
        return i; //if account found returns account array index
      }
    }
  }
  return -1; //if account not found returns -1
}

//main function
int main() {
  //initialising variables and creating users
  Account users[] = {{"Mike", "mike@ada.ac", "AdaRocks"}, {"Kacper", "kacper@ada.ac", "Password"}};
  string inputUsername, inputPassword;
  int authenticatedUserId;

  //getting user input
  cout << "Username: ";
  cin >> inputUsername;
  cout << "Password: ";
  cin >> inputPassword;
  
  //setting authenticated user id and checking if the user id matches an existing user
  authenticatedUserId = authentication(inputUsername, inputPassword, users); 
  if(authenticatedUserId != -1){
    //welcome message 
    cout << "\nWelcome " << users[authenticatedUserId].name;
  }else{
    //failed to authenticate message
    cout << "\nFailed to Authenticate";
  }
  return 0;
}
