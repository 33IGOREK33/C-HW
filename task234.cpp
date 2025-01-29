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
};
int main()
{
    unsigned int age, servicec, emplSalary;
    Employee empl1, empl2;
    empl1.set_Age(23);
    empl1.set_Servicec(2);
    empl1.set_Salary(10000);
    std::cout << "Empl1 Age: " << empl1.get_Age() << std::endl;
    std::cout << "Empl1 Years Of Servicec: " << empl1.get_Age() << std::endl;
    std::cout << "Empl1 Salary: " << empl1.get_Salary()<< "$" << std::endl;

    empl2.set_Age(33);
    empl2.set_Servicec(10);
    empl2.set_Salary(30000);
    std::cout << "\nEmpl2 Age: " << empl2.get_Age() << std::endl;
    std::cout << "Empl2 Years Of Servicec: " << empl2.get_Age() << std::endl;
    std::cout << "Empl2 Salary: " << empl2.get_Salary()<< "$" << std::endl;

}