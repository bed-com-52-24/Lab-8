#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

Person::Person(){
    mHeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}
Person::Person(float newHeight){
    mHeight = newHeight;
    mFirstName = "";
    mAge = 0;
}
Person::~Person(){

}
Person::Person(string newFirstName, float newHeight){
    mHeight = newHeight;
    mFirstName = newFirstName;
    mAge = 0;
}
Person Person::operator+(const Person& otherPerson){
    Person person;

    person.mHeight = this->mHeight + otherPerson.mHeight;
    person.mFirstName = this->mFirstName + " " otherPerson.mFirstName;
    person.mAge = this->mAge + otherPerson.Age;
    return person;
}
void Person::print() const {
    cout << "Name: " << mFirstName
         << ", Height: " << mHeight
         <<", Age: " << mAge << endl;
}
bool Person::operator == (const Person& other) const {
    return (mFirstName == other.mFirstName &&
             mHeight == other.mHeight &&
             mAge == other.mAge);
}
bool Person::operator != (const Person& other) const {
    return !(*this == other);
}
bool Person::operator >(const Person& other) const {
    return mAge > other.mAge;
}
bool Person::operator < (const Person& other) const {
    return mAge < other.mAge;
}



int main(){
    Person john = Person("john ",60.0f,19);
    Person jane = Person("jane", 75.0f,20);

    Person totalWeight = john + jane;
    totalWeight.print();

    if(jane == john){
        cout << "This is the same person " << endl;
    }
    if (jane != John){
        cout << "This is NOT the same person" << endl;
    }
        if(Jane < john){
            cout << "Jane is younger than john" << endl;
        }

        if(john > jane){
            cout << "John is older than jane" << endl;
        }
    
    return 0;

    }
