#include<iostream>
using std::string;

class Employee{
    public:
        string Name;
        string Company;
        int age;
        int salary;

        void introduceYourself(){
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Company - " << Company << std::endl;
            std::cout << "Salary - " << salary << std::endl;

        }

        Employee(string Name, int age, string Company, int salary){
            Name = Name;
            Company = Company;
            salary  = salary;
        }
};

int main(){
    Employee emp1 = Employee("Anurag Raj", 19, "Google", 190000);
    emp1.introduceYourself(); 

    Employee emp2 = Employee("Somya Anand", 21, "GeeksForGeeks", 180000);
    emp1.introduceYourself();   

// imagine having to make 10 more such employees 
// so here comes constructors
// a constructor is a special kind of method that is invoked each time an object is created

// 3 rules of constructors
// 1. it does not have a return type
// 2. it has the same name as the class-name is 
// 3. it needs to be public... later on we may req private constructor

    return 0;
}