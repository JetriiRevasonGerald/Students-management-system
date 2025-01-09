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
void show(){
	if(total=0){
		cout<<"No data is entered"<<endl;
	}else{
	for(int i=0;i<total;i++){
		cout<<"Data of studen:"<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Regno: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		//cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl;
					
	}
  }
}
void search(){
	if(total=0){
		cout<<"No data is entered"<<endl;
	}else{
	string regno;	
	cout<<"enter RegNo of student which you want to search: ";
	cin>>regno;
	for(int i=0;i<total;i++){
		if(regno==arr2[1]){
		
		cout<<"Data of studen:"<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Regno: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		//cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl;
		}
	}
 }
void update(){
	if(total=0){
		cout<<"No data is entered"<<endl;
	}else{
		string regno;	
	cout<<"enter RegNo of student which you want to search: ";
	cin>>regno;
	for(int i=0;i<total;i++){
		if(regno==arr2[1]){
		cout<<"Previous data"<<endl<<endl;
		cout<<"Data of studen:"<<i+1<<endl<<endl;
		cout<<"Name: "<<arr1[i]<<endl;
		cout<<"Regno: "<<arr2[i]<<endl;
		cout<<"Course: "<<arr3[i]<<endl;
		//cout<<"Class: "<<arr4[i]<<endl;
		cout<<"Contact: "<<arr5[i]<<endl;
		cout<<"\nEnter new data"<<endl;
		cout<<"Enter Name:";
		cin>>arr1[i];
		cout<<"Enter RegNo:";
		cin>>arr2[i];
		cout<<"Enter course:";
		cin>>arr3[i];
		cout<<"Enter class:";
		//cin>>arr4[i];
		cout<<"Enter contact:";
		cin>>arr5[i];
		}
	}
  }
} 
void deleterecord(){
	if(total=0){
		cout<<"No data is entered"<<endl;
	}else{
	int a;
	cout<<"Press 1 to delete full record"<<endl;
	cout<<"Press 2 to delete specific record"<<endl;
	cin>>a;
	if(a==1){
		total=0;
		cout<<"All record is deleted"<<endl;
	}
	else(a==2 );{
		string regno;
		cout<<"Enter regno which you want to delete"<<endl;
		cin>>regno;
		for(int i=0;i<total;i++){
			if(regno==arr2[i]){
				for(a=i;a<total;a++){
					arr1[a]=arr1[a+1];
					arr2[a]=arr2[a+1];
					arr3[a]=arr3[a+1];
					//arr4[j]=arr4[j+1];
					arr5[a]=arr5[a+1];
				}
				total--;
				cout<<"Your required record is deleted..!!"<<endl;
			}
		}
	}
	
 }
}
