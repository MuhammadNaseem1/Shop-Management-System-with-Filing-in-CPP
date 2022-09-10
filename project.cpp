#include<iostream>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	cout<<"******************THIS IS MY PROJECT*************************************"<<endl;
	cout<<"*********************TITLE: DR.SAJID SUPERMARKET*******************"<<endl;
	cout<<".............you are warmly welcomed.................."<<endl;
	cout<<"supermarket consists of three portions including cosmetics,beverages and fruits and vegetbles "<<endl;
	cout<<"/////////////please enter the portion you want to go////////////"<<endl;
	int pno;//product number
	float price,qty,dis;
	string product;
	int portion;
	cout<<"enter 1 in order to enter in the cosmetics section of our market"<<endl;
	cout<<"enter 2 in order to enter in the beverages section of our market"<<endl;
	cout<<"enter 3 in order to enter in the fruits and vegetables section of our market"<<endl;
	cin>>portion;
	switch(portion)
	
	{
		case 1:
			cout<<"welcome to the cosmetics portion of supermarket"<<endl;
			cout<<"enter the product number,the product and the quantity of the product  you want to purchase"<<endl;
			cin>>product;
			cout<<"you have selected product: "<<product;
			
			
			
			
			
			
			
			
			
			
			
			
			
			break;
			case 2:
		    cout<<"welcome to the beverages portion of supermarket"<<endl;
			cout<<"select the product you want to drink"<<endl;
			cin>>product;
			cout<<"you ahve selected: "<<product<<endl;
			
			
			
			
			
			
			
			
			
			
			
			break;
			case 3:
		    cout<<"welcome to the fruits and vegetables portion of supermarket"<<endl;
			cout<<"select the product you want to purchase"<<endl;
			cin>>product;
			cout<<"you ahve selected: "<<product<<endl;
			
			
			
			
			
			break;
			default:
				cout<<"product you want to purchase is not available in our supermarket"<<endl;
	}
}
