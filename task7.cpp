#include<iostream>
using namespace std;
main()
{
   cout << "Enter the movie name: ";
   string movie;
   cin >> movie;
   cout << "Enter the adult ticket price: $";
   int adult;
   cin >> adult;
   cout << "Enter the child ticket price: $";
   int child;
   cin >> child;
   cout << "Enter the number of adult tickets sold: ";
   int noOfadult;
   cin >> noOfadult;
   cout << "Enter the number of child tickets sold: ";
   int noOfchild;
   cin >> noOfchild;
   cout << "Enter the percentage of the amount to be donated to charity: ";
   int charity;
   cin >> charity;
   cout <<"Movie: "<<movie<<endl;
   float ticketsales;
   ticketsales=(adult*noOfadult)+(child*noOfchild);
   cout << "Total amount generated from ticket sales: $"<<ticketsales<<endl;
   float donation;
   donation=ticketsales/charity;
   cout << "Donation to charity (10%): $"<<donation<<endl;
   float remaining;
   remaining=ticketsales-donation;
   cout << "Remaining amount after donation: $"<<remaining;
}