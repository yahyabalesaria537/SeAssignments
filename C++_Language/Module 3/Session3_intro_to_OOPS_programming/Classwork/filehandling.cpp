#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream writeFile
	int pid;
	char pname[30];
	float price;
	char data[100];
	writeFile.open("product.csv",ios::out);
	for(i=1;i<3;i++){
	cout<<"\n enter pid pnam and price";
	cin>>pid>>pname>>price;
	writeFile<<pid<<","<<pname<<","<<price<<"\n";	
	}
	writeFile.close();
	
}
