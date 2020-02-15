 #include<iostream>
 using namespace std;
 void card()
 {
  long long int cardno,expire;
 float cvv;
 char cardn[50];
 system("color 8F");
 system("cls");

cout<<"\t\t**************************************************************************************";
cout<<"\t\t\t\t\t\t\t\t         Welcome to SBI payment  Gateway\n\n";
cout<<"\t\t**************************************************************************************\n\n\n";
cout<<"\tYour total amount to pay is: "<<"\n\n";
cout<<"Enter your card details\n\n";
cout<<"Enter the Name on Card :";
cin>>cardn;
cout<<"Enter your card number :";
cin>>cardno;
cout<<"Enter your Expire Date :" ;
cin>>expire;
cout<<"Enter your CVV :";
cin>>cvv;
cout<<"\t\t**************************************************************************************";
cout<<"\t\t\tTransition Successful!!!\t\t\t/nThanks for shopping with us!";
cout<<"\t\t**************************************************************************************";
}
