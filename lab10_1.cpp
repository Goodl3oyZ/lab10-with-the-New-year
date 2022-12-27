#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double princ,itr,ppy; //princ=เงินต้น,itr=ดอกเบี้ย%,ppy=ค่างวดpayment per year,year=ปีที่จะจ่ายเงินจนหมด
	cout << "Enter initial loan: ";
	cin>>princ;
	cout << "Enter interest rate per year (%): ";
	cin>>itr;
	cout << "Enter amount you can pay per year: ";
	cin>>ppy;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int year=1;
    double total;
	double newb=princ+(0.01*itr*princ)-ppy,interest;
do{
	cout << fixed << setprecision(2); 
	    interest=0.01*itr*princ;
        total=princ+interest;
	    newb=total-ppy;
	cout << setw(13) << left << year; 
	cout << setw(13) << left << princ;
	cout << setw(13) << left << interest;
    cout << setw(13) << left << total;
	cout << setw(13) ; //payment
    	if(total<=ppy) cout<<total;
	    else cout<<ppy;
	    
	cout << setw(13); //newbalance
    if(newb<=0)
    newb=0;
    cout <<newb;
	cout << "\n";
		year=year+1;
	    princ=newb;
}while(newb>0);	
	return 0;
}
