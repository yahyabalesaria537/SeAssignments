#include<iostream>
using namespace std;
class P{
	public:
		int p;
		void getp(){
			cout<<"enter p:";
			cin>>p;
		}
};
class A :virtual  public P{
	public:
	int a;
	void geta(){
		cout<<"enter a:";
		cin>>a;
	}
};
class B : virtual public P{
	public:
	int b;
	void getb(){
		cout<<"\n enter b:";
		cin>>b;
		
	}
};
class C :  public A,public B{
	public:
	int c;
	void getc(){
		cout<<"\n enter c:";
		cin>>c;
		
	}
	void add(){
		cout<<"\n addition is :"<<p+a+b+c;
	
	}
};
main(){
	C c1;
	c1.getp();
	c1.geta();
	c1.getb();
	c1.getc();
	c1.add();
}
