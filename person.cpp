#include <iostream>
using namespace std;
class person
{
private:
    string name;
    string phone;

public:
    string getName(){
        return name;
    }
    void setName(string n){
        name=n;
    }
    string getPhone(){
        return phone;
    }
    void setPhone(string p){
        phone=p;
    }

    person(){}

    person(string Name,string p){
        name=Name;
        phone=p;
    }
    void print(){
        cout<<"                 Person Class        "<<endl;
        cout<<endl;
        cout<<"Your Name: ";
        cout<<this->getName()<<endl;
        cout<<"Your Phone Number: ";
        cout<<this->getPhone()<<endl;
        cout<<endl;
    }
};

class student:public person{
    private:
    string id;
    float cgpa;

    public:
    string getId()
    {
        return id;
    }
    void setId(string i)
    {
        id = i;
    }
        float getCgpa(){
        return cgpa;
    }
    void setCgpa(float cg)
    {
        cgpa=cg;
    } 

    student(){}
    student(string n,string i,float c,string p){
        this->setName(n);
        id=i;
        cgpa=c;
        this->setPhone(p);
    }

    void studentPrint(){
        cout<<"                 Student Class        "<<endl;
        cout<<endl;
        cout<<"Student ID: ";
        cout<<this->getId()<<endl;
        cout<<"Student Name: ";
        cout<<this->getName()<<endl;
        cout<<"Student CGPA: ";
        cout<<this->getCgpa()<<endl;
        cout<<"Student Phone Number: ";
        cout<<this->getPhone()<<endl;
        cout<<endl;
        cout<<endl;
    }

};


class Employee:public person{
    
    private:
    string EmpID;
    double salary;

    public:

    string getEmpID(){
        return EmpID;
    }
    void setEmpID(string id){
        EmpID=id;
    }
    double getSalary(){
        return salary;
    }
    void setSalary(double s){
        salary=s;
    }
    Employee(){}
    Employee(string i,string n,double s,string p){
        EmpID=i;
        this->setName(n);
        salary=s;
        this->setPhone(p);
    }
    void EmpPrint(){
        cout<<"                 Employee Class        "<<endl;
        cout<<endl;
        cout<<"Employee ID: ";
        cout<<this->getEmpID()<<endl;
        cout<<"Employee Name: ";
        cout<<this->getName()<<endl;
        cout<<"Employee Salary: ";
        cout<<this->getSalary()<<endl;
        cout<<"Employee Phone Number: ";
        cout<<this->getPhone();
        cout<<endl;
        cout<<endl;
    }
};


int main()
{
    person p1;
    p1.setName("Tanvir Hasan Tamal");
    p1.setPhone("01534103985");
    person p2("Rokon Ahmed","01746102563");
    p1.print();
    p2.print();

    student s1("Israt","18-54879-1",3.98,"01746140732");
    student s2;
    s2.setId("15-8798-2");
    s2.setName("Imran Ahmed");
    s2.setCgpa(3.56);
    s2.setPhone("013546689");
    s1.studentPrint();
    s2.studentPrint();

    Employee e1;
    e1.setEmpID("1847-454-2");
    e1.setName("Ismail Hossain");
    e1.setSalary(4568.265);
    e1.setPhone("1457894563");

    Employee e2("1548-155-1","Nazmul Hossain",54897.256,"0198745623");
    e1.EmpPrint();
    e2.EmpPrint();
    return 0;
}