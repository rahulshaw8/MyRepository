#include <iostream>
#include <string.h>
using namespace std;
void rooms_menu()
{
    int validc;
    cout<<"\n                   ROOMS MENU                         \n";
    cout<<"---------------------------------------------------\n";
    cout<<"   Room Types        Available rooms     price/day   ";
    cout<<"\n\n a)Normal Room :   101--------150       1000/-  Rs ";
    cout<<"\n b)AC Room     :   201--------280       1800/-  Rs ";
    //cout<<"\n c)Single Rooms :   301--------350       1200/-  Rs ";
    cout<<"\n d)Double Room :   401--------430       1200/-  Rs ";
    cout<<"\n d)Room with View : 401--------430      2500/-  Rs ";
    cout<<"\n---------------------------------------------------\n";
    
}
void food_items()
{
    int n;
    cout<<"\n\n               FOOD ITEM MENU               ";
    cout<<"\n---------------------------------------------------";
    cout<<"\n   FOOD ITEM                           price   ";
    cout<<"\n            All time favourite Items  ";
    cout<<"\n1.Plain Dosa                    -       35/-     ";
    cout<<"\n2.Masala Dosa                   -       40/-     ";
    cout<<"\n3.Idly                          -       40/-     ";
    cout<<"\n4.Uppuma                        -       40/-     ";
    cout<<"\n5.Veg biryani                   -       80/-     ";
    
    cout<<"\n\n   Beverages                        price   ";
    cout<<"\n6.Tea                        -        15/-     ";
    cout<<"\n7.Cold Coffee                -        60/-     ";
    cout<<"\n8.Ice Tea                    -        25/-     ";
    cout<<"\n9.Cold Drink                 -        35/-     ";
    cout<<"\n10.Lemon Tea                 -        25/-     ";
    cout<<"\n11.Hot Coffee                -         50/-     ";
    cout<<"\n\n(Enter the Number of food Item)"<<"\n Give your order please : ";
    cin>>n;
    switch(n)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:cout<<"\nYour Order will Reach Soon !";
                break;
        default:cout<<"\nSORRY This is Not Available !";
    }
}

class hotel 
{
    int days,quantity,price;
    public:
    
    void acroom()
    {
        cout<<"\n   How many days u want to stay : ";
        cin>>days;
        cout<<"\n   How many rooms u want :";
        cin>>quantity;
        price=days*quantity*1800;
        cout<<"\n   Your Bill = "<<price<<"/- Rs\n ";
    }
    void normalroom()
    {
        cout<<"\n   How many days u want to stay : ";
        cin>>days;
        cout<<"\n   How many rooms u want :";
        cin>>quantity;
        price=days*quantity*1000;
        cout<<"\n   Your Bill = "<<price<<"/- Rs \n";
    }
    void doubleroom()
    {
        cout<<"\n   How many days u want to stay :";
        cin>>days;
        cout<<"\n   How many rooms u want :";
        cin>>quantity;
        price=days*quantity*1200;
        cout<<"\n   Your Bill = "<<price<<"/- Rs\n ";
    }
    void r_with_view()
    {
        cout<<"\n   How many days u want to stay :";
        cin>>days;
        cout<<"\n   How many rooms u want :";
        cin>>quantity;
        price=days*quantity*2500;
        cout<<"\n   Your Bill = "<<price<<"/- Rs\n ";
    }
};

int main()
{
    int ch,choice;
    cout<<"\n=====================================================";
    cout<<"\n-----------------------------------------------------";
    cout<<"\n************* HOTEL MANAGEMENT SYSTEM ***************";
    cout<<"\n-----------------------------------------------------";
    cout<<"\n=====================================================";
    cout<<endl;
    cout<<"\nDo you want rooms in our hotel ?\n";
    cout<<"\n1.Yes\t\t2.No";
    cout<<"\n\nEnter yes or No :";
    cin>>ch;
    switch(ch)
    {
        case 1:rooms_menu();
               hotel h;
                char str2[55];
                cout<<"\nWhich type of room u want : ";
                cin >>str2;
                if(strcmp(str2,"acroom")==0)
                {
                    cout<<"\nFILL THE DETAILS FOR AC ROOM :-\n";
                    h.acroom();
                }
                else if(strcmp(str2,"normalroom")==0)
                {
                    cout<<"\nFILL THE DETAILS FOR NORMAL ROOM :-";
                    h.normalroom();
                }
                else if(strcmp(str2,"doubleroom")==0)
                {
                    cout<<"\nFILL THE DETAILS FOR DOUBLE ROOM :-";
                    h.doubleroom();
                }
                else if(strcmp(str2,"roomwithview")==0)
                {
                    cout<<"\nFILL THE DETAILS FOR ROOM WITH VIEW :- ";
                    h.r_with_view();
                }
                else 
                {
                    cout<<"\nNOT AVAILABLE ! ";
                }
               break;
               
        default: cout<<"OHK No Problem !";
                 break;
    }
   
    cout<<"\nDo you want to Order Something ?\n";
    cout<<"\n1.Yes\t\t2.No";
    cout<<"\n\nEnter yes or No :";
    cin>>choice;
    switch(choice)
    {
        cout<<"\nPlease Give Your Order ..!";
        case 1:food_items();
               break;
        default: cout<<"OHK No Problem !";
    }
    return 0;
}
