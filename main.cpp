#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
#include <string>
using std::string;

class Employee{
public:
    Employee() = default;
    explicit Employee(const string &s) : name(s), id(++i) {}
    Employee(const Employee &) = default;
    Employee &operator=(const Employee &);
private:
    string name;
    int id;
    static int i;
};

int Employee::i = 0;

Employee::Employee(const Employee &e) :
    name(e.name),
    id(++i)
    { };

Employee &
Employee::operator=(const Employee &e) {
    name = e.name;
    //同一雇员id号应该不变
    return *this;
}

int main() {}