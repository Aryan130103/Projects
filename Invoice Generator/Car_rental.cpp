#include<iostream>

using namespace std;
class cars
{
    int ch=0,days=0,age=0;
    long long phone=0;
    string name,occ;
    string car[10] = {"Hyundai","BMW","Mercedes","Audi","Tesla","Tata","Volkswagen","Toyota","Ford"};
    string model[10] = {"2016MD","2018AS","2018DS","2017LA","2018OW","2005PS","2008PW","2010QW","2016SA"};
    string color[10] = {"Red","black","yellow","Blue","Red","Brown","Silver","Black","grey"};
    string max_speed[10] = {"100 Km/h ","150 Km/h","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h","120 Km/h","150 Km/h"};
    int price[10] = {1000,2000,3000,5000,2000,2500,4000,6000,9000};

    public:
void login()
    {
        string pass="";
        cout<<"\n\n\n\n\n\t\t\t\t\t|| !Welcome to the car rental services! ||";
        cout<<"\n\n\n\n\n\t\t\t\t\t\t Enter the password: ";
        cin>>pass;
        cout<<"\n\n\n\n";
        if(pass=="aryan")
        {
            cout<<"\n\n\t\t\t\t\t\t***** !ACCESS GRANTED! *****\n\n\n"<<endl;
            system("PAUSE");
            system("CLS");
            menu();
        }
        else{
            cout<<"\n\n\n\n\t\t\t\t\tSorry, the entered password is incorrect.\n\n\n"<<endl;
            system("PAUSE");
            system("CLS");
        login();
        }
    }

void menu()
    {
        cout<<"\n\n";
        cout<<"\t\t\t\t\t*************************************"<<endl;
        cout<<"\t\t\t\t\t      !WELCOME TO CAR RENTALS!       "<<endl;
        cout<<"\t\t\t\t\t________________MENU_________________"<<endl;
        cout<<"\t\t\t\t\t*************************************\n\n\n";
        for(int i=1;i<=9;i++)
            {
        cout<<"\t\t\t\t\t-> Enter "<<i<<" to go for "<<car[i-1]<<endl;
        }
        cout<<"\n\n\n";
        cout<<"\t\t\t\t\t     Enter choice: ";
        cin>>ch;
        cout<<"\n\n\n";
        if(ch<1 || ch>9){
            cout<<"\t\t\t\tWrong input, Enter from above given choices.\n\n\n";
            system("PAUSE");
            system("CLS");
            menu();}
        else
            structure();
    }

void structure()
{
    system("CLS");
    string a="";

    cout<<"\n\n\n\t\t\t\t\t-----------------------------"<<endl;
    cout<<"\t\t\t\t\t       ||GREAT CHOICE||     "<<endl;
    cout<<"\t\t\t\t\t    Selected car -> "<<car[ch-1]<<endl;
    cout<<"\t\t\t\t\t-----------------------------\n";
    cout<<"\n\n\t\t\t\t\tModel : "<<model[ch-1]<<endl;
    cout<<"\t\t\t\t\tColour : "<<color[ch-1]<<endl;
    cout<<"\t\t\t\t\tMaximum speed : "<<max_speed[ch-1]<<endl;
    cout<<"\t\t\t\t\tPrice : "<<price[ch-1]<<" /day"<<endl;
    cout<<"\n\n\n\t\t\t\t\tShould we confirm your order?(yes/no/exit): ";
    cin>>a;
    cout<<"\n";
    if(a=="Yes"||a=="YES"||a=="yes"||a=="y"||a=="Y"){
         system("PAUSE");
         details();}
    else if(a=="No"||a=="no"||a=="NO"||a=="n"||a=="N"){
         system("CLS");
         menu();}
    else if(a=="exit"||a=="Exit"||a=="EXIT"){
         system("CLS");
         cout<<"\n\n\n\n\n\n\t\t\t\t\t****************************"<<endl;
         cout<<"\t\t\t\t\t  !Thank You For Visiting!"<<endl;
         cout<<"\t\t\t\t\t****************************\n\n\n"<<endl;
         system("PAUSE");}
    else{
        cout<<"\n\n\t\t\t\t\tInvalid entry :( \n\n\n\n";
        system("PAUSE");
        system("CLS");
        structure();}
}

void details()
{

    system("CLS");
    cout<<"\n\n\n\t\t\t\t\t**********| !PERSONAL DETAILS FORM! |**********"<<endl;
    cout<<"\n\n\t\t\t\t\t  Name: ";
    cin>>name;
    cout<<"\t\t\t\t\t  Age: ";
    cin>>age;
    cout<<"\t\t\t\t\t  Occupation: ";
    cin>>occ;
    cout<<"\t\t\t\t\t  Phone number: ";
    cin>>phone;
    cout<<"\t\t\t\t\t  Number of days you want to rent the car: ";
    cin>>days;
    invoice();

}

void invoice()
{
    system("CLS");
    int rent=0;
    float adv=0.0;

    rent=(price[ch-1])*days;
    adv=0.25*rent;

    cout << "\n\t\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t\t	| Customer Name :"<<"----------------|\t"<<name<<endl;
    cout << "\t\t\t	| Customer Age :"<<"-----------------|\t"<<age<<endl;
    cout << "\t\t\t	| Occupation :"<<"-------------------|\t"<<occ<<endl;
    cout << "\t\t\t	| Phone Number :"<<"-----------------|\t"<<phone<<endl;
    cout << "\t\t\t	| Car Brand :"<<"--------------------|\t"<<car[ch-1]<<endl;
    cout << "\t\t\t	| Car Model :"<<"--------------------|\t"<<model[ch-1]<<endl;
    cout << "\t\t\t	| Car Colour :"<<"-------------------|\t"<<color[ch-1]<<endl;
    cout << "\t\t\t	| Maximum Speed :"<<"----------------|\t"<<max_speed[ch-1]<<endl;
    cout << "\t\t\t	| Number of days :"<<"---------------|\t"<<days<<endl;
    cout << "\t\t\t	| Your Rental Amount is :"<<"--------|\t"<<rent<<"/- Rs"<<endl;
    cout << "\t\t\t	| Advance Payment :"<<"--------------|\t"<<adv<<"/- Rs"<<endl;
    cout << "\t\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t\t	| Total Rental Amount is :"<<"-------|\t"<<rent<<"/- Rs"<<endl;
    cout << "\t\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t\t	 # This is a computer generated invoice and it does not"<<endl;
    cout << "\t\t\t	 require an authorized signature #"<<endl;
    cout <<"\n";
    cout << "\t\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t\t	Otherwise penalty fee will be applied"<<endl;
    cout << "\t\t\t	///////////////////////////////////////////////////////////\n\n\n\n"<<endl;

    system("PAUSE");
    system("CLS");
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t******* Thank You *******\n\n\n\n\n\n\n\n\n";

}
};

int main()
{
    cars aa;
    aa.login();
}







