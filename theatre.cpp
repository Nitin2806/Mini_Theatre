#include<iostream>
#include<stdlib.h>
#include"header.h"
#include"card.h"
#include"moviec.h"
#include<time.h>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    {
    time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	cout << "Time:";
	cout << timePtr->tm_hour<<":"<< timePtr->tm_min<<":" << timePtr->tm_sec<<endl;
	cout << "Date: " <<timePtr->tm_mday << "/"<<timePtr->tm_mon+1<< "/" <<timePtr->tm_year + 1900<<endl;
	}
    int a,b,c,seat,total,gst;
    char name[100],print,payment,A,B,C;
    char mm;
    system("color 9f");
       header();
       homepage:
        cout<<"\n\t\t\t\t Welcome Customer to Ticket Booking ";	 																					//Menu for the user
		cout<<"\n\n\t\t\t\t <1> Book Tickets";
		cout<<"\n\t\t\t\t <2> Receiving Ticket";
		cout<<"\n\t\t\t\t <3> For Information";
		cout<<"\n\t\t\t\t <4> Movie Card Registration";
		cout<<"\n\t\t\t\t <5> Exit \n\n";
		cout<<"\t\t\t\tEnter Your Choice :"<<"\t";
		cin>>a;
    switch(a) //Switch for the Main Page Choice Of Booking Tickets
      {
    case 1:
        system("CLS");
        header();
        cout<<"\n\t\t\t\t****************************************************************\n\n";
        cout<<"\t\t\t\t\tWelcome to movie ticket booking window\n\n";
        cout<<"\t\t\t\t******************************************************************\n\n";
        cout<<"Select your Movie:\n";
        cout<<"Press 1 for Bollywood Movies :\nPress 2 for Hollywood Movies :\n";
        cin>>b;
        switch(b)
        {
    case 1:
        system("cls");
        cout<<"   Movies\t\t\t\tTiming\t\t\tSeat Available\n\n";
        cout<<"1.Krish 4\t\t\t\t15:00\t\t\t01\n2.Housefull 5\t\t\t\t13:00\t\t\t03\n3.KGF 2\t\t\t\t18:00\t\t\t10\n4.Baaghi 3\t\t\t\t19:00\t\t\t14\n5.Badla 2\t\t\t\t\t14:00\t\t\t09\n";
        cin>>c;
        switch(c) //Switch for the Bollywood Movie Selection
        {
        case 1: // Customer Information
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Amount of tickets is:";
            total=seat*180;
            cout<<total;
            cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n\n";
             cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;
    case 2:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
            cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

       case 3:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
           cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";

              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

              case 4:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
           cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";

              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

              case 5:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
            cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

        }
        break;
    case 2: //Switch for selection of Hollywood Movies
        system("cls");
        cout<<"  Movies\t\t\t\tTiming\t\t\tSeat Available\n\n";
        cout<<"1.Black Widow\t\t\t\t15:00\t\t\t00\n2.Captain Marvel 2\t\t\t\t13:00\t\t\t03\n3.The New Mutant\t\t\t\t18:00\t\t\t10\n4.Thor 4t\t\t19:00\t\t\t14\n5.Spiderman:Back to Home\t\t\t114:00\t\t\t10\n";
        cin>>c;
        switch(c)
        {
        case 1:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
            cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

         case 2:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
            cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

              case 3:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
           cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

              case 4:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
           cout<<"\nGST ="<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
            cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;

              case 5:
            system("cls");
            cout<<"Enter your name:\n ";
            cin>>name;
            cout<<"Enter number of tickets:\n";
            cin>>seat;
            cout<<"Total amount of tickets is:";
            total=seat*200;
            cout<<total;
           cout<<"\nGST + VAT=16"<<total<<"+"<<"16\n";
            gst=total+16;
            cout<<"The Total Amount Including all Taxes are :"<<gst<<"\n";
              cout<<"Press A for payment through cash\nPress B for Payment through Credit/Debit Card\nPress C for Payment Through Movie Card:\n";
             cin>>payment;
             if (payment=='A' || payment=='a')
            {
                cout<<print;
            }
             else  if (payment=='B' || payment=='b')
           {
               card();
           }
             else if (payment=='C'|| payment=='c')
           {
               moviec();
           }
            cout<<"\nPress P to print ticket:\n";
            cin>>print;
            system("cls");
            system("color d");
            header();
            cout<<"\n\n\n"<<"\t\t**************************************************************************************";
            cout<<"\n\n\t\tName:"<<name<<"\n\t\tTotal Seats:"<<seat<<"\n\t\tYour Amount of Ticket paid is:"<<gst<<endl;
            cout<<"\t\t**************************************************************************************";
            cout<<"\n\n\n\n\nThis ticket is for online purpose only.The transaction is done including all GST and Taxes according to form no:18";
            break;
        }
        break;
        default:cout<<"Invalid option entered\n\n";
        goto homepage;
        }
    break;
    case 2: //Main Page Selection for availability
        cout<<"Check Availability of Ticket";

        break;
    case 3: //Main Page Selection for availability
        cout<<"Check Availability  of Seat";
        break;
    case 4: //Main Page Selection for list
        cout<<"Show Movie List";
        break;
    case 5: //Main Page Selection for customer info
    cout<<"Show my Ticket ";
    	system("CLS");
		system("PAUSE");
		exit(0);
    break;
    default:cout<<"Exit";
      }
    return 0; //End
}
