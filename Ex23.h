// U0924014劉承皓版權所有，請勿抄襲
// "Ex23.h"
#include<bits/stdc++.h>
using namespace std;
class Package{
	public:
		Package(string n,string add,string c,string p,double o,double perO){
			name=n;
			address=add;
			country=c;
			Postal_code=p;
			if(o>0){
				ounce=o;
			}else{
				cout<<"Invalid number\n";
			}
			if(perO>0){
				pricePerOunce=perO;
			}else{
				cout<<"Invalid number\n";
			}
		}
		double caculateCost(){
			return ounce*pricePerOunce;
		}
		double getOunce(){
			return ounce;
		}
	private:
		string name,address,country,Postal_code;
		double ounce,pricePerOunce;
};
class TwoDayPackage:Package{
	public:
		TwoDayPackage(string n,string add,string c,string p,double o,double perO,double twoDay)
			:Package(n,add,c,p,o,perO){
				TwoDayRate=twoDay;
	}
	double caculateCost(){
			return TwoDayRate+Package::caculateCost();
	}
	private:
		double TwoDayRate;  //兩天到費率 
};
class OvernightPackage:Package{
	public:
		OvernightPackage(string n,string add,string c,string p,double o,double perO,double overnight)
			:Package(n,add,c,p,o,perO){
				OvernightRate=overnight;
			}
		double caculateCost(){
			return OvernightRate*Package::getOunce()+Package::caculateCost();
		}
	private:
		double OvernightRate;  //隔夜到每盎司費率 
};
