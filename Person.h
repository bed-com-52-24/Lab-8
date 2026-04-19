#pragma once 
#include <string>

using namespace std;

class Person
{
 public:
       Person();
       Person(float newWeight);
       Person(string newFirstName,float newHeight , int age);
       void print()const;
       
       ~Person();
       Person operator+(const Person& otherPerson);
       bool operator == (const Person& other) const;
       bool operator != (const Person& other) const;
       bool operator > (const Person& other) const;
       bool operator < (const Person& other) const;

    float operator + (const Person& otherPerson);

private:
      float mWeight;
      string mFirstName;
      int mAge;    
}