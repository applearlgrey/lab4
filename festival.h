#pragma once
#include "Acmacggi.h"


namespace LEEHyeonGyeong2693251
{
    class festival
    {
        Acmacggi date;//d
        bool audience;

    public:

        festival( Acmacggi d = Acmacggi{1,1}, bool a = false ) : date{d}, audience{a} //Day -> d0 
        {}
        // festival (int m, int d, bool p) : date{m,d}, audience{p} // 기본값 하나만 넣거나 그냥 하나 만들기
        // {}

        void print() const // festival::print
        {
            date.print(); //Acmacggi
            if (audience)
                std::cout << "Audience will be enforced.\n";
            else 
                std::cout << "Audience will not be enforced.\n";
        }

        const Acmacggi& getDate() const {return date;}
        void setDate (const Acmacggi& d) {date = d;}
        
    };

}
