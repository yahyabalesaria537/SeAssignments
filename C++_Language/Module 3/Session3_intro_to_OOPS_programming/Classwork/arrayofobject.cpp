#include<iostream>
using namespace std;
class product{
	public:
		int pid;
		char pname[20];
		float price;
		
		void getproduct(){
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
		p[i].getproduct();
	}
     for(i=0;i<3;i++){
     	p[i].showproduct();
	 }
}
