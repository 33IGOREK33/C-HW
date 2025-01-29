#include <iostream>

class  Employee
{
private:
    unsigned int itsAge;
    unsigned int yearsOfService;
    unsigned int salary;
public:
    int get_Age()
    {
        return itsAge ;
    }

    void set_Age(unsigned int age)
    {
        itsAge = age;
    }



    int get_Servicec()
    {
       return yearsOfService;

    }
    void set_Servicec(unsigned int emplServicec)
    {
        yearsOfService = emplServicec ;

    }


    int get_Salary()
    {
        return salary;
    }
    void set_Salary(unsigned int emplSalary)
    {
        salary = emplSalary;
    }
    Employee(unsigned int age, unsigned int Service, unsigned int eSalary)
    {
        itsAge = age;
        yearsOfService = Service;
        salary = eSalary;

    }
};
int main()
{
    unsigned int age, servicec, emplSalary;
    Employee empl1(18,4,4234), empl2(20,2,2323);
    std::cout << "Empl1 Age: " << empl1.get_Age() << std::endl;
    std::cout << "Empl1 Years Of Servicec: " << empl1.get_Servicec() << std::endl;
    std::cout << "Empl1 Salary: " << empl1.get_Salary()<< "$" << std::endl;

    std::cout << "\nEmpl2 Age: " << empl2.get_Age() << std::endl;
    std::cout << "Empl2 Years Of Servicec: " << empl2.get_Servicec() << std::endl;
    std::cout << "Empl2 Salary: " << empl2.get_Salary()<< "$" << std::endl;

}