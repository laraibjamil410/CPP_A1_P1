// Question 1: Write a program that asks the user to enter two numbers. The program  should display which number is the smaller and which is the larger.
#include<iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Enter 1st number :";
    cin>>num1;
    cout<<"Enter 2nd number :";
    cin>>num2;
    if(num1>num2)
    { 
        cout<<num1<<"is greater"<<endl;
    }
    else if(num1<num2)
    {
        cout<<num2<<"is greater"<<endl;
    }
    else
    {cout<<"numbers are equal"<<endl;
    }
}
// Question 2: Write a program that asks for the time of three runners  it took each of them to finish a race. The program should display who came in first, second, and third place
#include<iostream>
using namespace std;
int main(){
   float t1,t2,t3;
   cout<<"enter time for runner 1 ,2 and 3 :"<<endl;
   cin>>t1>>t2>>t3;
  
 if(t1<t2 && t1<t3)
 {
    cout<<" 1st place: runner 1 "<<endl;
 }
 else if((t2<t1) && (t2<t3))
 {
    cout<<" 2nd place :runner 2 "<<endl;
 }
 else{
    cout<<"3rd place: runner 3"<<endl;
 }
}
// Question 3: Write a program that asks the user to enter two numbers. The program  should display which number is the smaller and which is the larger.
#include<iostream>
using namespace std;
int main(){
    int a=10;
    a=a+0.2;
   int b=10;
    if(a>b)
   {cout<<"a is larger :"<<a<< " b is smaller: "<<b<<endl;
   }
   else 
   {
    cout<<"b is larger :"<<b<< " a is smaller : "<<a<<endl;
   }
}


// Question 4: write a program that takes two numbers from the user and print their division result only if the denominator is not zero. Otherwise print “Division by zero is not possible.”


#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter 1st num";
    cin>>num1;
    cout<<"enter 2nd num";
    cin>>num2;
    if(num2!=0)
    {
        cout<<"division result is"<<num1/num2;
    }
   else{
    cout<<"division by zero is not possible"<<endl;
   }
}



// Question 5. Write an if statement that prints the message "The number is valid" if the variable temperature is within the range -50 through 150.
#include<iostream>
using namespace std;
int main(){
    float temp;
    cin>>temp;
    if((temp>=-50) && (temp<=150))
    {cout<<"the number is valid"<<endl;
    }
    else
    {cout<<"not valid"<<endl;
    }
    return 0;
}


// Question 6: Write an if/else statement that assigns 0 to x when y is equal to 10. Otherwise, it should assign 1 to x.
#include<iostream>
using namespace std;
int main(){
    int y,x;
    cin>>y;
    if(y==10)
    {x=0;
    cout<<"x is zero :"<<x<<endl;;
    }
    else
   {
    x=1;
    cout<<"x is 1 : "<<x<<endl;
    }
}

// Question 7. Ask user which TV model he wants to purchase and display the features of the respective model .
// Model 300  has features Picture-in-a-picture, Stereo sound, and Remote control
// Model 200		Stereo sound and Remote control
// Model 100		Remote control only
#include<iostream>
using namespace std;
int  main(){
   int model;
   cout<<"Enter a Tv model you want to purchase: ";
   cin>>model;
   if(model==300){
      cout<<"features :Picture-in-a-picture, Stereo sound, and Remote control"<<endl;
   }
   else if(model==200)
   {
      cout<<" features :Stereo sound, and Remote control";
   }
   else if(model==100)
   {
     cout<<" features : Remote control";
   }
   else {
      cout<<"try another options";
   }
}
// Question 8: Assume the variables a = 2, b = 4, and c = 6. Determine whether each of the following conditions is True or False:
//  A) a == 4 || b > 2 
// B) 6 <= C && a 3 
// C) 1 != b && C != 3
//  D) a >=-1|| a <= b
//  E) ! (a > 2)
#include<iostream>
using namespace std;
int main() {
  int a=2,b=4,c=6;
  cout<<boolalpha;
  cout<<((a == 4) || (b > 2));
  cout<<((6<=c) && (b = 4));
  cout<<((1 !=b ) || ( c!= 3));
  cout<<""<<((a >=-1 ) || (a<=b));
}


// Question 9. Write a code to display ASSCI values of alphabets using explicit type casting. 
 #include<iostream>
  using namespace std;
  int main(){
   char ch='A';
  int  ascii = (int)ch;
  cout<<ascii<<endl;
   char b='c';
   int value =(int)b;
   cout<<value<<endl;
  }

// Question 10: Write a program that displays the following menu: Geometry Calculator
//  1. Calculate the Area of a Circle
//  2. Calculate the Area of a Rectangle 
// 3. Calculate the Area of a Triangle
//  Enter your choice (1-3): If the user enters 1, the program should ask for the radius of the circle then display its area. Use the following formula: area = nr2 Use 3.14159 for n and the radius of the circle for r. 
// If the user enters 2, the program should ask for the length and width of the rectangle, then display the rectangle's area. Use the following formula: area = length* width 
// If the user enters 3, the program should ask for the length of the triangle's base and its height, then display its area. Use the following formula: area = base * height* .5


  #include<iostream>
using namespace std;
int main(){
   int choice;
   cout<<"Enter your choice "<<endl;
   cin>>choice;
   if(choice==1)
   {   
       float pie=3.1416;
       float r;
      cout<<"enter the radius of a circle"<<endl;
      cin>>r;
      cout<<"area   is"<<pie*r*r;
   }
   else if(choice==2)
{
   float length,width;
   cout<<"Enter the length and width of rectangle : "<<endl;
   cin>>length>>width;
   cout<<"Area  is :"<<length*width<<endl;
}
else if(choice==3)
{
   float base,height;
   cout<<"Enter the base and height of triangle "<<endl;
   cin>>base>>height;
   cout<<"Area  is : "<<(1.0/2)*base*height<<endl;
}
else{
cout<<"invalid choice "<<endl;
}
   }
