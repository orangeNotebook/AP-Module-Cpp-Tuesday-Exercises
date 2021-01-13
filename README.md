# AP-Module-Cpp-Tuesday-Exercises
This repo is part of my 'Advanced Programming' module. It contains all of my Tuesday tasks / challenges.

## Exercise 1: ReverseWord
A simple C++ program that reverses a user entered word. The program prompts the user for a single word. Once entered, the program displays the word in reverse.

Example output:
```
Please enter a word: Programming
Programming spelt backwards is: gnimmargorP
```

## Exercise 2: LowerCase Converter
a simple C++ program that converts a user entered word to lower case. The program prompts the user for a single word. Once entered, the program displays the message below and shows the word in lower case

Example output:
```
Please enter a word: MaDaM
MaDaM converted to lower case is: madam
```

## Exercise 3: Palindrome Checker
a simple C++ program that checks whether a word or phrase is a palindrome, i.e., a word that reads the same forwards or backwards. The program prompts the user for a single word. Once entered, the program displays a message indicating whether the word was a palindrome or not.

Example output:
```
Please enter a word: Company
Sorry, ‘Company’ is not a palindrome.

Please enter a word: Race Car
Yes, ‘Race Car’ is a palindrome

Please enter a word: madam
Yes, ‘madam’ is a palindrome
```

## Password Validator
Passwords are validated by comparing a user-provided value with a known, stored value – passwords are either correct or not. Create a simple C++ program that validates user login credentials. The program should prompt the user for a username and password and compare them against already known credentials. If the username provided exists and the password matches the program displays “Welcome” followed by the users first name. If the username does not exist or the password is incorrect a “Failed to Authenticate” message is shown.

Example output:
```
Username: mike@ada.ac
Password: AdaRocks

Welcome Mike

--OR--

Username: casper@ada.ac
Password: AdaRocks

Failed to Authenticate
```

## Password Complexity Checker
Functions help abstract complex operations and provide help to build reusable components.
Write a C++ program that determines the complexity of password based on the following rules:
* Weak (value: 1) – only numeric or only alphabetic characters
* Moderate (value: 2) – at least 4 characters and is not ‘Weak’, ‘Strong’ or ‘Very Strong’
* Strong (value: 3) – at least 8 characters; including at least 2 numeric and at least 4 alphabetic
* Very Strong (value: 4) – at least 8 characters; including at least 2 numeric, at least 4 alphabetic and 1 special

Example output:
```
Password: 12345678
The password '12345678' is Weak

Password: AB235
The password 'AB235' is Moderate

Password: Password2021
The password 'Password2021' is Strong

Password: Password2021!
The password 'Password2021!' is Very Strong
```

## Primer Challenge 3: Employee List Removal
A simple C++ program that displays a list of employee names. Prompts the user for an employee name and remove it for the list; display the remaining names, each on its own line.

Example output:
```
There are 5 employees:
John Smith
Jaelynn Stuart
Kaley Barajas
Walter Collier
Cale Myers

Enter an employee name to remove: Jaelynn Stuart

There are 4 employees:
John Smith
Kaley Barajas
Walter Collier
Cale Myers
```
