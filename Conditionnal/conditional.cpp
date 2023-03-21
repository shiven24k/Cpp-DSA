// //Q1 - Write a program which takes the values of length and breadth from user and check if it is a square or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int length, breadth;
//     cout<<"Type the length and breadth to check if it is rectagle or not"<<endl;
//     cin>>length>>breadth;
//     if(length!=breadth){
//         cout<<"It is a rectangle"<<endl;
//     }
//     else{
//         cout<<"It is not a rectangle"<<endl;
//     }

// }

// //Q2 - Write a program to print absolute value of a number entered by the user.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Write the value"<<endl;
//     cin>>num;
//     if(num<0){
//         num=-num;
//     }
//     cout<<"THe absolute value of the given number is "<<num;
   
// }


// //Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.
// #include<iostream>
// using namespace std;
// int main(){
//     int cp,sp,profit,loss;
//     cout<<"Write the cost price of the product you purchased"<<endl;
//     cin>>cp;
//     cout<<"Now wtite the selling prise of the purchase"<<endl;
//     cin>>sp;
//     profit = sp-cp;
//     loss   = cp-sp;
//     if (loss<=0){
//        cout<<" PROFIT = "<<profit<<endl;
//     }
//     else{
//        cout<<" LOSS = "<<loss<<endl;
//     }

// }

// //Q4- Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Write the value"<<endl;
//     cin>>num;
//     if(num<0){
//         cout<<"The nymber is negative and skipped"<<endl;
//     }
//     else {
//         cout<<num;
//     }
   
// }


// //Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.
// #include<iostream>
// using namespace std;
// int main(){
//     char op;
//     float a,b;
//     cout<<"Write the value of a and b"<<endl;
//     cin>>a>>b;
//     cout<<"Write the operation to perform among (+ , *, -, /)"<<endl;
//     cin>>op;
//     switch (op){
//         case '+':
//           cout<<a+b;
//           break;
//         case '-':
//           cout<<a-b;
//           break;
//         case '*':
//           cout<<a*b;
//           break;
//         case '/':
//           cout<<a/b;
//           break;
//         default:
//           cout<<"Ecexuted Sussesfully";    
//     }
    
// }

// //Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :
// // 100 – 90 A+
// // 90 – 80  A
// // 80 – 70  B
// // 70 – 60  C
// // 60 – 50  D
// // 50 – 40  E
// // 40 – 30  F
// // 30 – 0   G
// #include <iostream>
// using namespace std;

// int main() {
//     int marks;
//     cout << "Enter marks";
//     cin >> marks;
//     if (marks <= 100 && marks >= 90) {
//         cout << "Grade: A+" << endl;
//     } else if (marks <90 && marks >= 80 ) {
//         cout << "Grade: A" << endl;
//     } else if (marks < 80 && marks >= 70) {
//         cout << "Grade: B+" << endl;
//     } else if (marks < 70 && marks >= 60) {
//         cout << "Grade: B" << endl;
//     } else if (marks < 60 && marks >= 50) {
//         cout << "Grade: C" << endl;
//     } else if (marks < 50 && marks >= 40) {
//         cout << "Grade: D" << endl;
//     } else if (marks < 40 && marks >= 30) {
//         cout << "Grade: E" << endl;    
//     } else {
//         cout << "Grade: F" << endl;
//     }
//     return 0;
// }