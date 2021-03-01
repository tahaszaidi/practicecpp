#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    string company;
    int age;

public:
    void setName(string thename){
        name = thename;
    }
    void setCompany(string thecompany){
        company = thecompany;
    }
    void setAge(int theage){
        age = theage;
    }
    string getName(){
        return name;
    }
    string getCompany(){
        return company;
    }
    int getAge(){
        return age;
    }
    Employee(string thename, string thecompany, int theage) {
        name = thename;
        company = thecompany;
        age = theage;

    }
    void IntroduceYourself(){
        cout << "My name is " << name <<  ". I work at " << company << ". I am " << age << " years old." << endl;
}

};

int main() {
    Employee employee1("Bob", "Google", 25);
    employee1.setAge(53); 
    employee1.IntroduceYourself();
}