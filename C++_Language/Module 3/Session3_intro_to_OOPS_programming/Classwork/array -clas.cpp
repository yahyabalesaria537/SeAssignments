#include<iostream>
using namespace std;
class product{
	int pid;
	char pname[20];
	float price;
	
	public:
	// data function
	void getprouct(){
	 cout<<"\n enter pid pname price";
	cin>>pid>>pname>>price;	
	}
	
	void showproduct(){
		cout<<"\n pid="<<pid;
		cout<<"\n pname="<<pname;
		cout<<"\n price="<<price;
	}
};
main(){
	product p[3];
	int i;
	for(i=0;i<3;i++){
		p[i].getprouct();	
	}
	for(i=0;i<3;i++){
		p[i].showproduct();
	}
}
