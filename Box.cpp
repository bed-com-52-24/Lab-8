#pragma once

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
         retuen Length * breadth * height;
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

    System("pause");
    return 0;
}