#include <iostream>

class  Employee
{
private:
    unsigned int salary;
public:
    

    int get_Salary()
    {
        return salary;
    }
    void set_Salary(unsigned int emplSalary)
    {
        salary = emplSalary ;
    }
    int Round()
    {
        int x = get_Salary() / 10;
        return x * 10;
    }
    

};

int main()
{
    unsigned int  emplSalary;
    Employee empl1;
    empl1.set_Salary(1234);
    std::cout << "Empl1 Salary: " << empl1.Round()<< "$" << std::endl;

   
}