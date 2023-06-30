#include<iostream>
using std::string;

class AbstractEmployee{
    // virtual function is used to give abstraction
    virtual void askForPromotion() = 0;
};



class Employee:AbstractEmployee{
    protected:
        string Name;
    private:        
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

// The way to inherit properties and behaviours from Employee to Developer
class Developer:public Employee { //Employee is made public to let Developer class access askForPromotion();
    public:
        // for favProgLang we have not made getters and setters. public is doing
        string favProgLang;
        Developer(string name, int age, string company, int salary, string favLang) 
            :Employee(name, age, company, salary){
            // we should only worry for the new property.
            favProgLang = favLang;
            }  
        void fixBug(){
        // std::cout << getName() << " fixed bug using " << favProgLang << std::endl; was used when Name was in private mode
        
        std::cout << Name << " fixed bug using " << favProgLang << std::endl; 
        }       
};

class Teacher: public Employee{
    //by default everything is private... 
    public:
        string Subject;
        void prepareLesson() {
        std::cout << Name << " is preparing " << Subject << " lesson" << std::endl;
        }
        Teacher(string name, int age, string company, int salary, string subject)
            :Employee(name, age, company, salary){
                Subject = subject;
            }   
};

int main(){ 
    Developer d = Developer("Devesh Kumar", 21, "Alphabet", 100000, "Java");
    d.fixBug();
    d.fixBug();
    d.fixBug();
    // as she is fixing so many bugs. She wants to ask for promotion
    d.askForPromotion();

    Teacher t = Teacher("Kaushal Kumar", 32, "InfraTech", 200000, "Management");
    t.prepareLesson();
    t.askForPromotion();
    return 0;
}