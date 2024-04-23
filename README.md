# LudaRater:
LudaRater is a satirical program that rates users on a scale of 1-10 based on their names. Go into the program happy, leave sad that it gave you a 4. Don't take it too seriously :)

## Background/Context: 
LudaRater is one of the first C++ programs I ever wrote. I implemented a version of this in Python originally, then took it upon myself to implement it in C++ to get used to the language and revamp it with new features and more satire. I've come a long way in my C++ journey, but this project really shows how *creativity* and *a will to learn* can make something fun and cool.

## Features:
- ### `User enters name:`
  - When the user enters their name a rating is generated. It then tells the user if they are "fine" enough to continue rating. If the user re-enters their name the program will tell them their rating is solidifed and won't change! 
- ### `Forces users to rate:`
  - Users have an option to say that they don't want to see a rating. If they choose this option 5 times, the program will "get tired" of the user and show them the rating anyways. 
- ### `Judges users for rating:`
  - Every 5 ratings, the program tells the user how many ratings they have done, and then judges them for using such a superficial program (ironic, huh) 
- ### `Special ratings:`
  - Some special ratings are included! Find out for yourself what happens when you try to rate:
    - Luis (that's me!)
    - Nadia (my lovely girlfriend)
    - Lisa (my pet dog)
## Instructions to run:
1. ### Using the executable provided
- Download ludarater.exe to a folder you want
- Via a terminal, go to that folder: `cd folder`
 - Run the executable: `./ludarater` or `ludarater.exe`

2. ### Create your own executable
- Download ludarater.cpp to a folder you want
- In that folder, compile the program using:
`g++ -o ludarater ludarater.cpp`
- Now you can run the executable using the 3rd step from option 1


