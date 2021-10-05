#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	double x1,x2,denta;
	cout<<"giai phuong trinh ax^2+bx+c=0"<<endl;
	cout<<"nhap a"<<endl;
	cin>>a;
	cout<<"nhap b"<<endl;
	cin>>b;
	cout<<"nhap c"<<endl;
	cin>>c;	
	denta=b*b-4*a*c;
	if (a==0)
	  {
	    if (b==0 && c!=0)
	      //c=0 
		  {
		    cout<<"No";
		  }
        else if (b==0 && c==0)
          {
		    cout<<"INF";
		  }
	    else if (b!=0)
	      { 
	        double d=-c/b;
		    cout<<d;
		  } 
	  }
	if (a!=0)
	//ax^2+bx+c=0
	  {
	    denta=b*b-4*a*c;
	    if (denta>0)
	      {
		    x1=((-b)-sqrt(denta))/(2*a);
			x2=((-b)+sqrt(denta))/(2*a);
			printf("%0.2f",x1);
			cout<<" ";
			printf("%0.2f",x2);
		  }
		else if (denta==0)
		  {
		    x1=-b/2*a;
		    cout<<x1<<endl;
		  }
		else if (denta<0)
		  {
		    cout<<"No";
		  }
	  }
	cout<<"Ngac nhien khong thang lon";
	return 0;
}
