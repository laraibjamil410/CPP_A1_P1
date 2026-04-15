// Question 11:  A bank charges $10 per month plus the following check fees for a commercial checking account: $.10 each for fewer than 20 checks $.08 each for 20-39 checks $.06 each for 40-59 checks $.04 each for 60 or more checks The bank also charges an extra $15 if the balance of the account falls below $400 (before any check fees are applied). Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank's service fees for the month.

#include<iostream>
using namespace std;
  
int main() {
    double balance, fee = 10;
    int checks;

    cin >> balance >> checks;

    if (checks < 20)
        fee += checks * 0.10;
    else if (checks <= 39)
        fee += checks * 0.08;
    else if (checks <= 59)
        fee += checks * 0.06;
    else
        fee += checks * 0.04;

    if (balance < 400)
        fee += 15;

    cout << "Total fee: " << fee;

    return 0;
}

Question 12. Write a program that ask user which type of headphone he/she wants to buy. display the correct price of the selected type of headphone.
#include<iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    if (choice == 1)
        cout << "Price: 249";
    else if (choice == 2)
        cout << "Price: 199";
    else if (choice == 3)
        cout << "Price: 49";

    return 0;
}
question 13  User Input: * Ask the user to enter their choice (1, 2, 3, or 4).	If they choose 1, 2, or 3, ask them for the number of months they wish to join.
Print the total amount they have to pay.


#include<iostream>
using namespace std;

int main() {
    int choice, months;

    cin >> choice;

    if (choice == 4)
        return 0;

    cin >> months;

    if (choice == 1)
        cout << "Total: " << months * 40;
    else if (choice == 2)
        cout << "Total: " << months * 20;
    else if (choice == 3)
        cout << "Total: " << months * 30;

    return 0;
}
//  question 14 :Write a program that calculates a customer's monthly bill. It should ask which package the customer has purchased and how many gigabytes were used. It should then display the total amount due
#include<iostream>
using namespace std;

int main() {
    int pkg;
    double gb, total;

    cin >> pkg >> gb;

    if (pkg == 1) {
        total = 39.99;
        if (gb > 4)
            total += (gb - 4) * 10;
    }
    else if (pkg == 2) {
        total = 59.99;
        if (gb > 8)
            total += (gb - 8) * 5;
    }
    else
        total = 69.99;

    cout << "Total bill: " << total;

    return 0;
}
question 15: Write a program that asks the user to enter a number of seconds. There are 60 seconds in a minute. 

#include<iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;

    if (seconds >= 86400)
        cout << seconds / 86400 << " days";
    else if (seconds >= 3600)
        cout << seconds / 3600 << " hours";
    else if (seconds >= 60)
        cout << seconds / 60 << " minutes";

    return 0;
}
question no 16
// Write a program that asks the user to enter an object's mass, then calculates and displays its weight.
#include<iostream>
using namespace std;

int main() {
    double mass, weight;
    cin >> mass;

    weight = mass * 9.8;

    cout << "Weight: " << weight << endl;

    if (weight > 1000)
        cout << "Too heavy";
    else if (weight < 10)
        cout << "Too light";

    return 0;
}

    program 17  Write an if statement that performs the following logic: if the variable sales is greater than 50,000, then add 0.25 of the sales variable, and 250 as a bonus. Print the sales
 #include<iostream>
using namespace std;

int main() {
    double sales;
    cin >> sales;

    if (sales > 50000)
        sales = sales + (sales * 0.25) + 250;

    cout << "Final Sales: " << sales;

    return 0;
}

// program 18 Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year. 
#include<iostream>
using namespace std;

int main() {
    double income;
    int years;

    cin >> income >> years;

    if (income >= 35000 && years > 5)
        cout << "Qualified";
    else
        cout << "Not Qualified";

    return 0;
}

program 19
Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year. The program should then determine whether the month times the day is equal to the year. If so, it should display a message saying the date is magic.

#include<iostream>
using namespace std;

int main() {
    int m, d, y;
    cin >> m >> d >> y;

    if (m * d == y)
        cout << "MAGIC DATE";
    else
        cout << "NOT MAGIC";

    return 0;
}

// program 20
// Using the following chart, write an if/else if statement that assigns .10, .15, or .20
// to commission, depending on the value in sales entered by the user.


#include<iostream>
using namespace std;

int main() {
    double sales, commission;
    cin >> sales;

    if (sales <= 10000)
        commission = 0.10;
    else if (sales <= 15000)
        commission = 0.15;
    else
        commission = 0.20;

    cout << "Commission Rate: " << commission;

    return 0;
}

