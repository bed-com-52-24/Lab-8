#pragma once

#include <iostream>
using namespace std;


class Box {
    public:


        Box();

        
        
        Box(const double newLength, const double newbreadth, const double newHeight);

        

        ~Box();

        double GetVolume();

        void SetLength(double len);

        void SetBreadth(double bre);

        void SetHeight(double hei);

        private:
        double length;

        double breath;

        double height;

    

        system("pause");

        return 0;
};    
