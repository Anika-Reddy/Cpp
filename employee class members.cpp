#include <iostreme>
using namespace std;

class emoloyee

{
    int emp_number;
    char emp_name[20];
    float emp_basic;
    float emp_da;
    float emp_it;
    float emp_net_sal;

    public:

      void get_emp_details();
      float find_net_salary(float basic,float da, float it);
      void show_emp_details();

};

void emoloyee :: get_emp_details();

 cout<<"\nEnter employee number:";
 cin>>emp_number;
 cout<<"\nEnter employee name: ";
 cin>>emp_name;
 count<<"\nEnter employee basic: ";
 cin>>emp_basic;
  
cout<<"|nEnter employee DA:";
cin>>emp_da;
cout<<"\nEnter employee IT:";
cin>>emp_it;

}

  float employee :: find_net_salary(float basic , float da, float it) {
      return (basic+da)-it;
  }
void employee :: show_emp_details() {
    
    cout<<"\nDetails of Employee ";
    cout<<"\nEmployee Name : "<<emp_name;
    cout<<"\nEmployee number :"<<emp_number;
    cout<<"\nBasic salary :"<<emp_salary;
    cout<<"\nEmployee DA :"<<emp_da;
    cout<<"\nIncome Tax :"<<emp_it;
    cout<<"\nNet Salary :"<<find_net_salary(emp_basic ,emp_da, emp_it);

}

int main(){

    employee emp;
    emp.get_emp_details();
    emp.show_emp_details();
    return 0 ;
    
}