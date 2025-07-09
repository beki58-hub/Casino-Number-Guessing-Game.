#include <iostream> 
#include <limits>

using namespace std;
double  money=0,cash;
string account;
void deposit(){
    cout<<"Enter the amount you want to deposit: ";
    
  while (!(cin >> cash)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
    
      money +=cash;

}


int main(){
 
  int fail;  
  int guessing_number;
  string name;
  double amount;
  cout<<"***************************************************************************************************"<<endl;
  cout<<"                                  CASINO Number Guessing Game                                      " <<endl;                                    
  cout<<"***************************************************************************************************"<<endl;



  cout<<"Enter your name : ";
  cin>>name;
  cout<<"Hello "<<name<<" welcome to the game..."<<endl;
  
cout<<"************************************rules of the game************************************"<<endl;
cout<<"                           1. choose any number between 1 to 10"<<endl;
cout<<"                       2.If you win you will get 3 times of money you bet"<<endl;
cout<<"                   3.If you bet on a wrong number you will lose your betting amount"<<endl;
cout<<"*********************************************************************************************"<<endl;
deposit();
  start:cout<<"your curret balance is "<<money<<"$"<<endl;
   cout<<"Enter the amount of money you want to bet: "<<endl;
      while (!(cin >> amount)) {
        cout << "Invalid input, Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Fixed syntax
    }
while(amount >money){
      cout<<"you have insufficent balance ; "<<endl;
     re_enter:cout<<"press 1. to re-enter another amount"<<endl;
      cout<<"press 2. to deposite additional amount"<<endl;
cin>>fail;
      switch(fail){
           case 1:
        goto start;
        break;
           case 2:
        deposit();
        break;
     default:
     cout<<"please enter 1 or 2";
     goto re_enter;
      }
     goto start;
}
  money =money - amount;
  int num, dice;
  char press;
  again:cout<<"let's start playing ,Guess the number between 1 - 10: ";
  while (!(cin >> num)) {
        cout << "Invalid input. Please enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }
  if(num>10||num<1){ 
cout<<"Please try again!!! The number must be 1 upto 10  "<<endl;
goto again;
 } 

 dice=rand()%10+1;
 cout<<"The lucky number is "<<dice<<endl;
 
 if (num==dice){
     amount*=3;
     money+=amount;
     cout<<"                                         **CONGRADULATION**"<<endl;
     cout<<"You have won: "<<amount<<"$"<<endl;
 }else {
     cout<<"Better luck next time. "<<endl;
 }
 
cout<<"Your available current balance is: "<<money<<endl;
back: cout<<" if you want to play again enter 'y' for yes or if not enter 'n' for no   ";
cin>>press;

switch (press) {
        case 'y':
        case 'Y':
            goto start;
            break;
        case 'n':
        case 'N':
            cout << "                               THANK YOU FOR PLAYING!!" << endl;
            break;
        default:
            cout << "Invalid choice! Enter 'y' or 'n'." << endl;
            goto back;
}
            return 0;
}
