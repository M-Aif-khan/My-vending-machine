#include <iostream>
using namespace std;
/*
 */
int main()
{
  //   cons1 = 5000, cons2 = 1000, cons3 = 500, cons4 = 100, cons5 = 50, cons6 = 20, cons7 = 10, 
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