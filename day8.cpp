#include <iostream>
using namespace std;
/*
  HI my name is Atif i am a student of CS Major and this is one of my mini project i hope you will like its feel free to suggest any changes possible to make this program better!
  Its just a simple vending machine program.
  Pseudo code :
  Step 1 : declare DOLLER_MOUNT = 277,total,food_choice,payback,payments.
  Step 2: Display the menue to the user.
  Step 3: Ask user for food he/she wants.
  Step 4:Display the food name i.e "You got cola".
  Step 5:Ask user if they want some thing more
          if user is willing to buy another product then goto Step 3.
  Step 6:Ask the user about the payment method they would like to choose.
  Step 7:Ask for the payment and input the payment.
  Step 8: Dsplay the payback money.
  
 */
int main()
{
    const int DOLLER_AMOUNT = 277;
    int food_choice, total = 0, payback = 0;
    bool cond = true; 
    short int ch_price = 50, co_prize = 40, bir_price = 70;
    char currency;
    float payments;



    while (cond)
    {
        cout << "Enter 1 for chips" << endl;
        cout << "Enter 2 for cola" << endl;
        cout << "Enter 3 for biryani" << endl;
        cout << "Enter 4 to exit" << endl;
        cout << "\n\n\tEnter the item you want:";
        cin >> food_choice;
        switch (food_choice)
        {     float(payments);
        case 1:
            cout << "\tYou got chips"<<endl;
            total += ch_price;
            break;
        case 2:
            cout << "\tYou got cola"<<endl;
            total += co_prize;
            break;
        case 3:
            cout << "\tYou got biryani"<<endl;
            total += bir_price;
            break;
        case 4:
            cout << "\n\t*******Thanks for comming*******";
            cond = false;
            break;
        default:
            cout << "\n\tPlease enter a valid number according to menue" << endl;
            break;
      
        }
    }

    cout << "\n\tTour total is : " << total << " RS " <<endl;
    cout<<"\n\tPlease selected the currency (PKR = r or USD = d): ";
    cin>>currency;

      
    if(currency == 'r'){
        cout << "\n\tPlease pay amount RS:";
        cin >> payments;
        }
    else{
        cout<<"\n\tPlease pay the amount $: ";
        cin >> payments;

        payments =  payments * DOLLER_AMOUNT;
    }

    payback = payments - total;

    cout<<"\n\tPayback is : "<<payback<<" RS "<<endl;
}
