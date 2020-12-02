#include <iostream>   //Library decleartion
#include <stdlib.h>
#include <fstream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;

class parking
{ public:
	string plateNo;
	string typeName;        //Variable Declertion 
	string name;
	string timedate;
	int type;
	int stay;
	int contact;
	int price;
	int recipt;
	//Function
	void addVehicle();
	void data();
	void record();
	void outro();
	
	
		
};
void parking::addVehicle()
{ cout<<"~~~~~~~~~~~~~~Welcome to Parking Managment System~~~~~~~~~~~~ \n ---------Add Vehicle---------"<<endl;
  cout<<"Select Type of Vehicle \n 1.Car \n 2.Bike \n 3.Scotty \n 4.Tempo"<<endl;
  cin>>type;
  system("cls");
  switch(type) {
  case 1:{
  	cout<<"You Vehicle type is Car \n ----------Enter below Information!!!------------"<<endl;
  	typeName = "Car";
	price = 50;   }
  break;
  case 2:{
  	cout<<"You Vehicle type is Bike \n -----------Enter below Information!!!-----------"<<endl;
	typeName = "Bike";
	price = 30;}
  break;
  case 3:{
  	cout<<"You Vehicle type is Scotty \n ----------Enter below Information!!!------------"<<endl;
  	typeName = "Scotty";
	price = 25;  }
  break;
  case 4:{
  	cout<<"You Vehicle type is Tempo \n -----------Enter below Information!!!-------------"<<endl;
  	typeName = "Tempo";
	price = 45;  }
  break;
  default: cout<<"*********ERROR********* \n ~~~~~~~~~~~~~Please enter proper choice from provided list~~~~~~~~~~~"<<endl;
  
}}

void parking::data()
{time_t ttime = time(0);
 char* dt = ctime(&ttime);
 srand(time(0));
 timedate = dt;
 cout<<"\n Enter your Name:           ";
 cin>>name;
 cout<<"\n Enter Your Contact Number: ";
 cin>>contact;
 cout<<"\n Vehicle Plate Number:      ";
 cin>>plateNo;
 cout<<"\n Enter Number of Hour Stay: ";
 cin>>stay;
 system("cls");
 cout<<"\n --------Swipe or Pay Cash for parking Charges--------"<<endl;
 recipt = rand();
 cout<<" Amount is : "<<price<<endl;
 system("pause");
 
 
 cout<<"--------Thank You---------- \n Your Virtual Recipt Number is: "<<recipt<< " Amount paid: "<<price<<endl;
 system("pause");
}

void parking::record(){
	ofstream mfile;
 	mfile.open("parkingRecord.txt",ios::app);
	mfile<<"Name "<<name<<endl; 	
	mfile<<"Contact Number "<<contact<<endl;
	mfile<<"Vehicle Type \t\t Plate Number \t\t Time \t\t Stay Hour \t Bill"<<endl;
	mfile<<typeName<<"\t\t"<<plateNo<<"\t\t"<<timedate<<"\t\t"<<stay<<"\t"<<recipt<<" "<<price<<endl;
		
}
void parking::outro(){
	system("cls");
	cout<<"\t-------Project Made By Group SKL4----------  \n ----------Vidyalankar Institude of Technology, Wadala--------"<<endl;
}

int main()
{
	parking obj;
	obj.addVehicle();
	obj.data();
	obj.record();
	obj.outro();
	
	return 0;
}




