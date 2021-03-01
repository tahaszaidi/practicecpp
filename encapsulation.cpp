#include <iostream>

using namespace std;

class Employee
{
    private:
        int salary;
    public:
        void setSalary(int aSalary)
        {
            salary = aSalary;
        }

        int getSalary()
        {
            return salary;
        }
};

int main()
{
    Employee Bob;
    cout << Bob.getSalary() << endl;
    Bob.setSalary(85000);
    cout << Bob.getSalary() << endl;


}