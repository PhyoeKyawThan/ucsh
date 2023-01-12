#include <iostream>

using namespace std;

enum etype{laborer, secretary, manager, accountant, executive,
researcher};

struct Date{
    int hour;
    int min;
    int sec;
};
struct Employee{
    int emp_num;
    float compensation;
    etype emp_type;
    Date date;
};
int main()
{
    Employee emp[3];
    char format, t_emp;
    for(int i = 0; i < 2 ; i++){
        cout<< "Enter employee number: ";
        cin>> emp[i].emp_num;

        cout<< "Enter compensation: ";
        cin>> emp[i].compensation;

        cout<< "Enter the date of first employment (mm/dd/yy): ";
        cin>> emp[i].date.hour >> format >> emp[i].date.min >> format >> emp[i].date.sec;

        cout<< "Enter employee type (first letter only)laborer, secretary, manager,accountant, executive, researcher): ";
        cin>> t_emp;
        switch(t_emp)
        {
            case 'l':
                emp[i].emp_type = laborer;
                break;
            case 's':
                emp[i].emp_type = secretary;
                break;
            case 'm':
                emp[i].emp_type = manager;
                break;
            case 'a':
                emp[i].emp_type = accountant;
                break;
            case 'e':
                emp[i].emp_type = executive;
                break;
            case 'r':
                emp[i].emp_type = researcher;
                break;
            default:
                cout<< "Enter only one letter of l s m a e r..";
                break;
        }

    }

    for(int i = 0 ; i < 3 ; i++){
        cout<< "\nFor emp" << i;
        cout<< "\nEmployee number: " << emp[i].emp_num;
        cout<< "\nCompensation: " << emp[i].compensation;
        cout<< "\nDate of first employee: " << emp[i].date.hour << format << emp[i].date.min << format << emp[i].date.sec;
        cout<< "\nEmployee Type: ";
        switch(emp[i].emp_type){
            case laborer:
                cout<< "Laborer.";
                break;
            case secretary:
                cout<< "Secretary.";
                break;
            case manager:
                cout<< "Manager.";
                break;
            case accountant:
                cout<< "Accountant.";
                break;
            case executive:
                cout<< "Executive.";
                break;
            case researcher:
                cout<< "Researcher.";
                break;
            default:
                cout<< "Something worng..";
                break;
        }


    }
    return 0;
}