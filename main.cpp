// Author: Aadil Ali
/* P3_4_1.cpp - Read and average some integers, print the result.
This program continue asking for a new number until the user enters a 0 to terminate the
program
*/

#include <iostream>
using namespace std;

int main()

{
    int x;
    int count = 0; // (1) initialize a counter to 0 to count number of values
    int choice = 1;
    //This is the choice that controls the looping continuation or termination double
    int sum = 0; //initialize sum to 0 to make sure sum at the beginning is 0
    double average;
while(choice == 1) // (2) read N grades and compute their sum, count ensures N entries
{
// read each number and compute the sum:
cout << "\n Enter a grade <Enter>: ";
cin >> x;
sum = sum + x;
count++; // (3) update the count
// prompt the user:
cout << "Do you wish to enter another grade? (1 for yes and 0 or other key for no): "
    <<endl;
cin >> choice;
}
if(count == 0)

    cout << "You haven't entered any number. No average will be computed. Bye!\n";
else
{
average = sum/count; //Notice that we have divided by count this time
    cout << "The average of these " << count << " grades is " << average <<"." << endl;
}
return 0;
}
