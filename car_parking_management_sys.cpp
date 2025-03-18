#include<iostream>
using namespace std;
int main(){
 int u_input;
 int amount=0;
 int count= 0;
 int r,c,b;
 r=0;
 c=0;
 b=0;
 cout<<"**********************************************"<<endl;	
 cout<<"Welcome to Parking Management System"<<endl;;
 cout<<"**********************************************"<<endl;
 cout<<endl;
 cout<<"**********************************************"<<endl;	
 cout<<"Parking Number of Vehicle Limits is = 50"<<endl;
 cout<<"Rikshaw Parking Charges = 100"<<endl;
 cout<<"Car Parking Charges = 200"<<endl;
 cout<<"Bus Parking Charges = 300"<<endl;
 cout<<"**********************************************"<<endl;	
while(true){
	//Menu
	cout<<"Choose Our Services...........s"<<endl;
	cout<<"Press 1 for Rikshaw :"<<endl;
	cout<<"Press 2 for Car :"<<endl;
	cout<<"Press 3 for Bus :"<<endl;
    cout<<"Press 4 for show the Record :"<<endl;
	cout<<"Press 5 for Delete the Record :"<<endl;	
	cout<<"**********************************************"<<endl;
	cin>>u_input;
	if(u_input==1){
		if(count<=50){
			r++;
			amount= amount+100;
			count = count+1;
			cout<<"**********************************************"<<endl;
		    cout<<"A New Rikshaw has Parked ."<<endl;
		    cout<<"Total number of Vehicles ="<<count<<endl;
	        cout<<"Now free Space ="<<50-(r+c+b)<<endl;
	        cout<<"**********************************************"<<endl;	
		}
		else{
			cout<<"Sorry! Parking is Full"<<endl;
		}
	}
	
	
	else if(u_input==2){
		
		if(count<=50){
			c++;
			amount=amount+200;
			count=count+1;
			cout<<"**********************************************"<<endl;
		    cout<<"A New Car has Parked ."<<endl;
		    cout<<"Total number of Vehicles ="<<count<<endl;
	        cout<<"Now free Space ="<<50-(r+c+b)<<endl;
	        cout<<"**********************************************"<<endl;
		}
		else{
			cout<<"Sorry! Parking is Full"<<endl;
		}
	}	
	
	else if(u_input==3){
		if(count<=50){
			b++;
			amount=amount+300;
			count=count+1;
			cout<<"**********************************************"<<endl;
		    cout<<"A New Bus has Parked ."<<endl;
		    cout<<"Total number of Vehicles ="<<count<<endl;
	        cout<<"Now free Space ="<<50-(r+c+b)<<endl;
	        cout<<"**********************************************"<<endl;
		}
		else{
			cout<<"Sorry! Parking is Full"<<endl;
		}
		
	}
	else if(u_input==4){
		cout<<"**********************************************"<<endl;
		cout<<"Total Amount = "<<amount<<endl;
		cout<<"Total Number of Vehicles = "<<count<<endl;
	    cout<<"The Number of Rikshaw = "<<r<<endl;
	    cout<<"The Number of Cars = "<<c<<endl;
	    cout<<"The Number of Bus = "<<b<<endl;
	    cout<<"**********************************************"<<endl;
	}
	else if(u_input==5){
		amount=0;
		count=0;
		r=0;
		c=0;
		b=0;
		cout<<"**********************************************"<<endl;
		cout<<"All Record Deleted..........*"<<endl;
	    cout<<"**********************************************"<<endl; 
	}
	else{
		cout<<"**********************************************"<<endl; 
		cout<<"Invalid Input...*"<<endl;
	    cout<<"**********************************************"<<endl;  
	}
	
}
return 0;

}









