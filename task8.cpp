#include<iostream>
using namespace std;
main()
{
  cout << "Enter vegetable price per kilogram (in coins): ";
  float vegprice;
  cin >> vegprice;
  cout << "Enter fruit price per kilogram (in coins): ";
  float fruitprice;
  cin >> fruitprice;
  cout << "Enter total kilograms of vegetables: ";
  int totalveg;
  cin >> totalveg;
  cout << "Enter total kilograms of fruit: ";
  int totalfruit;
  cin >> totalfruit;
  float earningIncoins;
  earningIncoins=(vegprice*totalveg)+(fruitprice*totalfruit);
  float earningInrupees=earningIncoins/1.94;
  cout << "Total earnings in Rupees (Rps): "<<earningInrupees;
}
