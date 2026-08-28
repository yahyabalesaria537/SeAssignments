#include<iostream>
using namespace std;
class paymentprocessor{
	public:
	void processpayment(double amount){
		cout<<"\n version: without coupoun | final amount: "<<amount;
	}
	void processpayment(double amount,const char* coupouncode){
		double finalamount =amount-50.0;
		cout<<"\n version: with coupoun("<<coupouncode<<")|final amount:"<<finalamount;
	}
};
main(){
	paymentprocessor p1;
	p1.processpayment(600.0);
	p1.processpayment(600.0,"SAVE50");
}
