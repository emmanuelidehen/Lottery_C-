//
//  main.cpp
//  Lottery
//
//  Created by Emmanuel Idehen on 2/24/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//  Submitted to Mr. Marcus Golden(CS2014 Computer programming II)
//  Due Feb. 26th, 2019.
//
/*
 Write a program that simulates a lottery. The program should have an array of five
 integers named winningDigits, with a randomly generated number in the range of 0
 through 9 for each element in the array . The program should ask the user to enter five
 digits and should store them in a second integer array named player . The program must
 compare the corresponding elements in the two arrays and count how many digits match.
 For example, the following shows the winningDigits array and the Pl ayer array with
 sample numbers stored in each. There are two matching digits, elements 2 and 4.
 
 Once the user has entered a set of numbers, the program should display the winning
 digits and the player's digits and tell how many digits matched.
 
 
 
 Psuedo code:
 First Initiliaze all position to default
 Generate Random Numbers //Random generator!
 Ask user for choices of number and take those numbers and store in the player indexes!
 validate those inputs
 Print the Winning digits
 Print the players Digit
 compare the wining digits indexes and players digit indexes if any num match!
 print matching indexes!
 ask user if they'll like to continue!
 
 
 
 */
#include <iostream>
#include <string>
#include <cstdlib>   //needed for random generator
#include <ctime>
using namespace std;

int main()
{
    
    //array of five integers
    const int size= 5;
    int winningDigits[size];
    int player[size];
    
    for (int i = 0; i < size; i++)//default value!
    {
        winningDigits[i] = 0;
        player[i]=0;
    }
    
    // int randomNum = 0; //will hold the randomly generated int
    srand(time(0));
    
    // Get 5 random digits and store them in winningDigits
    for (int i = 0; i < size; i++)
    {
        winningDigits[i] = 0 + rand() % 9;
    }
    //Ask user to enter the choices of number and store those number in the Winning Digit!
    cout << "\nTo play Enter your 5 lottery choices of numbers between 0 - 9 (one number at a time)"<<endl;
    for (int i = 0; i < size; i++)
    {
        // take numbers
        cout <<"Number "<<i+1<<": ";
        cin>>player[i];
        while (player[i] < 0 || player[i] > 9)//validate users input!
        {
            cout << "you're out of the range of numbers, Reenter that number"<<endl;
            cout <<"Number "<<i+1<<": ";
            cin >> player[i];
        }
        
    }
    
    //print the Wining Digits!
    cout << "These are the Wining Digits:  ";
    for (int i = 0; i<size; i++)
    {
        cout<< winningDigits[i];
        
    }
    cout <<"\n"<<endl;
    //Print the Players Digits !
    cout << "These are the players Digits: ";
    for (int i = 0; i<size; i++)
    {
        cout<< player[i];
        
    }
    cout <<"\n"<<endl;//
    int count=0; // use count to check how many numbers match!
    
    //1   //comparing both positions between the winning digits and the player digits!
    
    if (winningDigits[0] == player[0])//compare position zero!
    {
        cout << "\nThis numbers Match: "<<winningDigits[0] << "   " << player[0]<<endl; //comparing postion one!
        count++;
    }
    if (winningDigits[1] == player[1])
    {
        cout << "\nThis numbers Match: "<<winningDigits[1] << "   " << player[1]<<endl; //comparing postion two !
        count++;
    }
    if (winningDigits[2] == player[2])
    {
        cout << "\nThis numbers Match: "<<winningDigits[2] << "   " << player[2]<<endl; //comparing position three!
        count++;
    }
    if (winningDigits[3] == player[3])
    {
        cout << "\nThis numbers Match: "<<winningDigits[3] << "   " << player[3]<<endl; //comparing position four!
        count++;
    }
    if (winningDigits[4] == player[4])
    {
        cout << "\nThis numbers Match: "<<winningDigits[4] << "   " << player[4]<<endl; // comparing position five!
        count++;
    }
    // print out how many numbers match!
    cout <<count<<" Number Match!"<<endl;
    /*=================================================================*/
    // just asking the user to contine
    char y = 'y';
    cout << "\nDo you wish to continue, press y for yes! or any other letter to exit \n";
    cin >> y; //take users choice to continue or not!
    if (y == 'y')
        main(); //Restart program!
    else
        cout <<endl;//end return !
    
    return 0;
}
/*
 
 Test Case(1)
 =============
 
 
 To play Enter your 5 lottery choices of numbers between 0 - 9 (one number at a time)
 Number 1: 4
 Number 2: 5
 Number 3: 6
 Number 4: 7
 Number 5: 8
 These are the Wining Digits:  34321
 
 These are the players Digits: 45678
 
 0 Number Match!
 
 Do you wish to continue, press y for yes! or any other letter to exit
 
 Program ended with exit code: 0
 
 
 
 Test Case(2)
 =============
 
 To play Enter your 5 lottery choices of numbers between 0 - 9 (one number at a time)
 Number 1: 3
 Number 2: 4
 Number 3: 5
 Number 4: 6
 Number 5: 7
 These are the Wining Digits:  12768
 
 These are the players Digits: 34567
 
 
 This numbers Match: 6   6
 1 Number Match!
 
 Do you wish to continue, press y for yes! or any other letter to exit
 
 
 Test Case(3)
 =============
 
 
 To play Enter your 5 lottery choices of numbers between 0 - 9 (one number at a time)
 Number 1: 3
 Number 2: 4
 Number 3: 10
 you're out of the range of numbers, Reenter that number
 Number 3: 3
 Number 4: 80
 you're out of the range of numbers, Reenter that number
 Number 4: 3
 Number 5: 5
 These are the Wining Digits:  50824
 
 These are the players Digits: 34335
 
 0 Number Match!
 
 Do you wish to continue, press y for yes! or any other letter to exit
 y
 
 To play Enter your 5 lottery choices of numbers between 0 - 9 (one number at a time)
 Number 1: 7
 Number 2: 5
 Number 3: 40
 you're out of the range of numbers, Reenter that number
 Number 3: 3
 Number 4: 2
 Number 5: 9
 These are the Wining Digits:  33611
 
 These are the players Digits: 75329
 
 0 Number Match!
 
 Do you wish to continue, press y for yes! or any other letter to exit
 y
 
 To play Enter your 5 lottery choices of numbers between 0 - 9 (one number at a time)
 Number 1: 4
 Number 2: 5
 Number 3: 6
 Number 4: 7
 Number 5: 8
 These are the Wining Digits:  05277
 
 These are the players Digits: 45678
 
 
 This numbers Match: 5   5
 
 This numbers Match: 7   7
 2 Number Match!
 
 Do you wish to continue, press y for yes! or any other letter to exit
 
 
 
 
 
 
 
 
 
 
 
 
 
 ================================================================================================
 //Trash!
 //1
 cout <<winningDigits[0]<<" "<<winningDigits[1]<<" "<<winningDigits[2]<<" "<<winningDigits[3]<<" "<<winningDigits[4]<<"\n"<<endl;
 
 //    for (int i = 0; i <size; i++)
 //    {
 //        if (winningDigits[i] == player[i])
 //            cout << "This numbers are the same : "<<winningDigits[0] << "   " << player[0]<<endl;
 //        else
 //            cout << "No number match";
 //    }
 
 
 */
