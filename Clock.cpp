#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int min,hrs,sec,i=0,a=0;
	while(a==0){	
		cout<<"Enter hour: ";
		cin>>hrs;
		cout<<"Enter minutes: ";
		cin>>min;
		cout<<"Enter Seconds: ";
		cin>>sec;
		if(hrs<24&&min<60&&sec<60)
		a++;
		
	}
	
	while(i==0){
		cout<<hrs<<":"<<min<<":"<<sec<<endl;
		Sleep(1000);
		sec++;
		if(sec>59){
			sec=0;
			min++;
		}
		if(min>59){
			min=0;
			hrs++;
		}
		if(hrs>24)
		hrs=0;
		system("cls");
	}
	return 0;
}
