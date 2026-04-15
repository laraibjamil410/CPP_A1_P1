// Question 11. Write an if statement that performs the following logic: if the variable sales is greater than 50,000, then add 0.25 of the sales variable, and 250 as a bonus. Print the sales.

// #include<iostream>
// using namespace std;
// int main(){
//     int variable;
//     cin>>variable;
//     if(variable>50000)
//     {
//         variable =+0.25+250;
//         cout<<"sales ="<<variable;
        
//     }
// }

// Write a program that asks the user to enter a number of seconds. 
// There are 60 seconds in a minute. If the number of seconds entered by the user is greater than or equal to 60, the program should display the number of minutes in that many seconds.
//  There are 3,600 seconds in an hour. If the number of seconds entered by the user is greater than or equal to 3,600, the program should display the number of hours in that many seconds. 
//  There are 86,400 seconds in a day.
//   If the number of seconds entered by the user is greater than or equal to 86,400, the program should display the number of days in that many seconds
 #include<iostream>
using namespace std;
int main(){
    int sec;
   cout<<"enter number of seconds" <<endl;
   cin>>sec;
   if(sec>=60)
   {
    int minute=sec/60;
    cout<<"number of minute in that seconds is"<<minute<<endl;
 }
 else if(sec>=3600)
{ 
     int hours= sec/3600;
   cout<<"number of hours in that seconds is"<<hours<<endl;
}
else if(sec>=86400)
   {
    int day=sec/86400;
    cout<<"number of days in that seconds is"<<day<<endl;
   }

}