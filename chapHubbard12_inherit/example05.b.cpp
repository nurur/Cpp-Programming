// EXAMPLE: 12.11
// Polymorphic Class 
// "Pure Virtual Function"


#include <cstring>
#include <iostream>
using namespace std;


class Person
{
public:
  Person(const char* s) 
  { name = new char[strlen(s)+1]; 
    strcpy(name,s); 
  }
  
  virtual void print() = 0;
  
protected:
  char* name;
};


class Student : public Person 
{
public:
  Student(const char* s, float g) : Person(s), gpa(g) { }
  
  void print() 
  { cout << "name of the student: " << name << endl;
    cout << "gpa of the student : " << gpa  << endl;  
  }
  
protected:
  float gpa;
};


class Professor : public Person 
{
public:
  Professor(const char* s, int n) : Person(s), publist(n) { }
  
  void print() 
  { cout << "name of the professor   : " << name    << endl;
    cout << "publist of the professor: " << publist << endl;  
  }
  
protected:
  int publist;
};




int main()
{
  // Person    x("Robert");   // Instantiation of abstract class not allowed
  // Person* p1 = &x;         // Not allowed
  // p1->print();             // Not alllowed


  Student   y("Julia", 3.82);
  Professor z("Nurur Rahman", 40);

  Person* p2 = &y;
  Person* p3 = &z;

  p2->print(); cout << endl;
  p3->print(); cout << endl;

  return 0;
}
