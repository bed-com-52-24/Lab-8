
#include <iostream>
#include "Box.h"

using namespace std;

box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}
Box::Box(const double newLength, const double newBreadth,newHeight){
        Length = newLength;
        Breadth = newBreadth;
        Height = newHeight;
}
 
Box::Box(){

}
double Box::GetVolume() {
         return Length * breadth * height;
}
void Box::SetLength(double len) {
    length =len;
}
void Box::SetBreadth(double bre) {
    breadth = bre;
}
void Box::SetHeight (double hei) {
    height  = hei;
} 
Box Box::Operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.breadth = this->breadth + b.bredth;
    box.height = thid->height + b.height;

    return 0;
}

int main() {
    Box Box1;
    BOx Box2;
    Box Box3;
    double volume = 0.0;

    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    volume = Box1.GetVolume();
    cout << "volume of Box1 :" << volume <<endl;

    Box3 = Box1 + Box2;

    volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << volume << endl;


    return 0;

}