#include<iostream>
using std::string;

class AbstractEmployee{
    // virtual function is used to give abstraction
    virtual void askForPromotion() = 0;
};



class Employee:AbstractEmployee{
    private:
        string Name;
        int Age;
        string Company;
        int Salary;
    
    public:
        //setting up the getters and setters
        void setName(string name){
            Name = name;
        }
        string getName() {
            return Name;
        }


        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }


        void setAge(int age){
            Age = age;
        }
        int getAge(){
            return Age;
        }


        void setSalary(int salary){
            Salary = salary;
        }
        int getSalary(){
            return Salary;
        }

        void introduceYourself(){
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Company - " << Company << std::endl;
            std::cout << "Age - " << Age << std::endl;
            std::cout << "Salary - " << Salary << std::endl;
        }

        Employee(string name, int age, string company, int salary){
            Name = name;
            Age = age;
            Company = company;
            Salary  = salary;
        }

        void askForPromotion() {
            if(Age>20){
                std::cout << Name << " got promoted!" << std::endl;
            }
            else{                
                std::cout << Name << ", sorry no promotion for you!" << std::endl;
            }
        }
};

int main(){
    Employee emp1 = Employee("Anurag Raj", 19, "Google", 190000);
    emp1.introduceYourself(); 

    Employee emp2 = Employee("Somya Anand", 21, "GeeksForGeeks", 180000);
    emp2.introduceYourself();   

    emp1.setName("Devesh");
    emp2.setName("Subhra");

    emp1.setAge(21);
    emp2.setAge(20);

    std::cout << emp1.getName() << " is " << emp1.getAge() << " years old" << std::endl;
    std::cout << emp2.getName() << " is " << emp2.getAge() << " years old" << std::endl; 

    emp1.askForPromotion();
    emp2.askForPromotion();

    return 0;
}