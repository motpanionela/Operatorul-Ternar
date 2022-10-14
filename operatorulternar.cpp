#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	int a , b, c;
	a=rand()%100;
	b=rand()%200;
	c=rand()%300;
    int r = a + b -c;
	cout << "a= "<< a <<" b= "<< b << " c= "<< c << "a+ b-c"<<r;
	if( r % 2== 0){
	a=rand()%100;
	b=rand()%200;
	c=rand()%300;
		cout << "a= "<< a <<" b= "<< b << " c= "<< c << "a+ b-c"<<r<<endl;
	}		else {
	a=rand()%100+ (-1);
	b=rand()%200+(-1);
	c=rand()%300+(-1);
		cout << "a= "<< a <<" b= "<< b << " c= "<< c << "a+ b-c"<<r<<endl;
	}	
	if (a >100) {
		c=rand()%100;
		b= rand()%100;
			cout <<" b= "<< b << " c= "<< c <<  endl;
	}
   		if (a >100) {
		
		b= rand()%100;
			cout <<" b= "<< b << endl;
	}
		if(a %  2== 0)  {
			a--;
		}
				if(b %  2!= 0)  {
			b--;
		}
				if(c %  2== 0)  {
			c--;
		}
			cout << "a= "<< a <<" b= "<< b << " c= "<< c << "a+ b-c"<<r<<endl;
return 0;
}
