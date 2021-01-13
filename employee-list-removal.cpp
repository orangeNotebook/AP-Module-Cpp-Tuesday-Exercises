//https://repl.it/join/fldustaw-orangenotebook
//This is still work in progress, next steps is to make it actually remove the index instead of make it blank

#include <iostream>
#include<string>
using namespace std;

int main() {
  string arr[] = {"John Smith", "Jaelynn Stuart", "Kaley Barajas", "Walter Collier", "Cale Myers"};
  string temporaryArr;
  int len = sizeof(arr)/sizeof(arr[0]), counter = 0;
  string userInput;
  
  while(true){
    cout << "There are " << len - counter << " employees: \n";
    for(int i = 0; i < len; i++){
      if(arr[i] == ""){

      }else{
      cout << arr[i] << "\n";
      }
    }

    cout << "\nEnter an employee name to remove: ";
    getline(cin, userInput);

    for(int i = 0; i < len; i++){
      if(arr[i] == userInput){
        arr[i] = "";
        counter++;
      }
    }
    
    cout << "\n";

  }
}
