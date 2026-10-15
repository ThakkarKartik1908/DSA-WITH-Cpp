#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    // data / proparties
    string name ;
    string dept ;
    string subject;
   
    // member funx /method
    void changeDept(string newDept){
        dept = newDept;
    }
    // private member can be acess using this two
    // setter
    void setSalary(double Salary){
        salary = Salary;
    }
    //getter
    double getSalary(){
        return salary;
    }

};
class Account{ // encapsulation = data + method  
private:
    string password; // data hiding
    double Amount;
public:
    string Accountname;
    int Acount_number;
    
    void print(){
        cout << Accountname;
    }

};

int main(){
    Teacher t1 ;
    t1.name = "Kartik Thakkar";
    t1.dept = "computer eng";
    t1.subject = "java";
    //t1.salary = 2500;private not allow
    cout << t1.name<<endl;
    t1.setSalary(2500) ;
    cout <<  t1.getSalary();

    return 0;

}