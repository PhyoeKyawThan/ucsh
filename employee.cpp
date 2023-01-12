#include <iostream>
#include <string>
using namespace std;

struct employee{
	int emp_num;
	float compan;
};

int main(){
	employee emp[3];
	string employees[3] = {"First employee", "Second employee", "Third employee"};
	for(int i = 1; i<=3; i++){
	cout<<"Enter employee Number for emp"<<i<< ": ";
	cin>> emp[i].emp_num;
    cout<< endl;
	cout<<"Enter compansation for emp"<< i << ": $";
	cin>> emp[i].compan;
	
	}
	for(int i = 0; i < 3; i++){
	  cout<<employees[i]<<endl;
	  cout<< "Employee number: "<< emp[i+1].emp_num;
	  cout<< "\nCompasation amount: $" << emp[i+1].compan<<endl;
	}
	return 0;
}
