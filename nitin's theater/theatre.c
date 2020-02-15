#include<iostream>
using namespace std;
class movie
{
    int a;
    char name[100];
public:
    void getdata()
    {
        cout<<"Welcome to Silver Screen movie ticket booking window\n\n\n";
        cout<<"Menu\nSelect";
        cin<<a;
    }
    switch (a)
    {
    case 1:
        cout<<"1.Movie Booking";
        break;
    case 2:
        cout<<"2.Check Avalibility of Ticket";
        break;
    case 3:
        cout<<"3.Check Avalibility  of Seat";
        break;
    case 4:
        cout<<"Show Movie List";
        break;
    case 5:
    cout<<"Show my Ticket ";
    break;
    default:cout<<"Exit";
    }
    return 0;
};
