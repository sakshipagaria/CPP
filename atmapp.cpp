#include<iostream>
using namespace std;

void showMenu(){
    cout<<"**********MENU**********"<<endl;
    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"***********************"<<endl;

}
int main(){
    /*check balance,deposit,withdraw,show menu*/
    int option;
    double balc=500;

    do{
    showMenu();
    cout<<"Option:";
    cin>>option;

    //system("cls");
    switch(option){
    case 1:cout<<"\nBalance is :"<<balc<<"$";break;
    case 2:cout<<"\nDeposit amount:";
         double depositamt;
         cin>>depositamt;
         balc+=depositamt;
    break;
    case 3:cout<<"\nWithdraw amount: ";
         double withdrawamt;
         cin>>withdrawamt;
         if(withdrawamt<=balc)
             balc-=withdrawamt;
         else
            cout<<"\nNot enough money";
         break;
    }
    }
    while(option!=4);
    system("pause>0");
}

