//•••Done 1.Создать класс Person (человек) с полями: имя, возраст, пол и вес.
//•••       Определить методы переназначения имени, изменения возраста и веса.
//•••       Создать производный класс Student (студент), имеющий поле года обучения.
//•••       Определить методы переназначения и увеличения этого значения.
//•••       Создать счетчик количества созданных студентов. В функции main() создать несколько студентов. По запросу вывести определенного человека.
//2.Создать классы Apple (яблоко) и Banana (банан), которые наследуют класс Fruit (фрукт).
//   У Fruit есть две переменные-члена: name (имя) и color (цвет). Добавить новый класс GrannySmith, который наследует класс Apple.

#include<iostream>
#include<string>

using namespace std;

class Person
{
private:
    string name;
    int age;
    char sex;  //could be bool   for example 1 equal male 0 equal female
    int weight;
public:
    void set_name(string m_name)
    {
        name=m_name;
    }
    void set_age(int m_age)
        {
         age=m_age;
        }
    void set_weight(int m_weight)
        {
         weight=m_weight;
        }
   void set_sex(char m_sex )
   {
       sex=m_sex;
   }
  void print_attrbts(int i)
  {
      cout <<"Student #:"<<i<<endl;
      cout<<"name: "<<name<<endl;
      cout<<"age: "<<age<<endl;
      cout<<"weight: "<<weight<<endl;
      cout<<"sex: "<<sex<<endl;
  }
};

class student: public Person   // открытое наследование
{
private:
  int ed_year;
public:
  void reset_education_year()
  {
      ed_year=0;

  }
  void set_education_year(int m_year)
   {
       ed_year=m_year;
   }
};



class Fruit
{
public:
    string name;
    string color;

    Fruit(string color, string name ) : color(color),name(name) {}
  string getName()
  {
      return name;
  }
  string getColor()
  {
      return color;
  }
};

class Banana : public Fruit
{
public:
    Banana( string color = "Yellow",string name = "Banana") : Fruit( color,name) {}
};

class Apple : public Fruit
{
public:

    Apple( string color="black", string name="Apple") : Fruit(color,name) {}
};

class GrannySmith : public Apple
{
public:
    GrannySmith(string color = "Green",string name ="GrannySmith Apple") : Apple( color,name) {}
};

int main()
{
  student student_mass[20];
  int qtty_of_stdnts=0;
int i=0;
 student_mass[qtty_of_stdnts].set_name("Sasha");
 student_mass[qtty_of_stdnts].set_age(21);
 student_mass[qtty_of_stdnts].set_weight(55);
 student_mass[qtty_of_stdnts].set_sex('f');
 student_mass[qtty_of_stdnts].set_education_year(1);
 qtty_of_stdnts++;
 student_mass[qtty_of_stdnts].set_name("Alex");
 student_mass[qtty_of_stdnts].set_age(21);
 student_mass[qtty_of_stdnts].set_weight(85);
 student_mass[qtty_of_stdnts].set_sex('m');
 student_mass[qtty_of_stdnts].set_education_year(3);
 qtty_of_stdnts++;
 student_mass[qtty_of_stdnts].set_name("Ivan");
 student_mass[qtty_of_stdnts].set_age(30);
 student_mass[qtty_of_stdnts].set_weight(100);
 student_mass[qtty_of_stdnts].set_sex('m');
 student_mass[qtty_of_stdnts].set_education_year(2);
 qtty_of_stdnts++;
 for(i=0;i<qtty_of_stdnts;i++)
    {
     student_mass[i].print_attrbts(i);
    }

 cout<<"Общее количество студентов :"<<qtty_of_stdnts<<endl;



 Apple a("red");
    Banana b;
    GrannySmith c;


    cout <<"My "<<a.getName() << " is " << a.getColor() << ".\n";
    cout <<"My "<<b.getName() << " is " << b.getColor() << ".\n";
    cout <<"My "<< c.getName() << " is " << c.getColor() << ".\n";

 }


