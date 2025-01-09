#include<iostream>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr[20],arr5[20];
int total=0;
void enter(){
	int choice;
	cout<<"How many studenrs do you want to enter";
	cin>>choice;
	if(total==0){
	total=total+choice;
	for(int i=0;i<choice;i++){
		cout<<"\nEnter data of studen:"<<i+1<<endl<<endl;
		cout<<"Enter name: ";
		cin>>arr1[i];
		cout<<"Enter RenNo: ";
		cin>>arr2[i];
		cout<<"Enter course: ";
		cin>>arr3[i];
		cout<<"Enter class: ";
		//cin>>arr4[i];
		cout<<"Enter contact: ";
		cin>>arr5[i];
	}
 }else{
 		for(int i=total;i<total+choice;i++){
		cout<<"\nEnter data of studen:"<<i+1<<endl<<endl;
		cout<<"Enter name: ";
		cin>>arr1[i];
		cout<<"Enter RenNo: ";
		cin>>arr2[i];
		cout<<"Enter course: ";
		cin>>arr3[i];
		cout<<"Enter class: ";
		//cin>>arr4[i];
		cout<<"Enter contact: ";
		cin>>arr5[i];
	}
	total=total+choice;
 }
}
