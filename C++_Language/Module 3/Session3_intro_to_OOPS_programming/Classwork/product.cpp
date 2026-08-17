#include<iostream>
using namespace std;
class product{
	// data member
	int pid;
	char pname[20];
	float price;
	
	public:
	// data function
	void getproduct(){
		cout<<"\n enter pid pname price";
		cin>>pid>>pname>>price;
	}	
	public:
	void showproduct(){
		cout<<"\n pid="<<pid;
		cout<<"\n pname="<<pname;
		cout<<"\n price="<<price;
	}
};
main(){
	product p1;
	p1.getproduct();
	p1.showproduct();
	// cout<<"\n pname="<<p1.pname;
}
