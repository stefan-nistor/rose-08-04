#ifndef ROSE8_04_CIRCLE_H
#define ROSE8_04_CIRCLE_H
#include "Punct.h"

class Circle {
private:
    int x;
    int y;
    int ray;
    Punct patrat[4];

public:

    class Iterator {
    private:
        int alCatalea;
        Circle * pCircle;
    public:
        Iterator ( int alCatalea, Circle * pCircle ) :
            alCatalea ( alCatalea ),
            pCircle ( pCircle ) {

        }

        bool operator != (Iterator it) {
            if ( this->alCatalea != it.alCatalea ) {
                return true;
            } else {
                return false;
            }
        }

        Iterator operator ++ () {
            this->alCatalea ++;
            return * this;
        }

        Punct operator * () {
            switch ( this->alCatalea ) {
                case 0:
                    return Punct (
                            this->pCircle->x,
                            this->pCircle->y - this->pCircle->ray
                    );
                case 1:
                    return Punct (
                            this->pCircle->x + this->pCircle->ray,
                            this->pCircle->y
                    );
                case 2:
                    return Punct (
                            this->pCircle->x,
                            this->pCircle->y + this->pCircle->ray
                    );
                case 3:
                    return Punct (
                            this->pCircle->x - this->pCircle->ray,
                            this->pCircle->y
                    );
            }
        }
    };

    Iterator begin () {
        return Iterator (0, this);
    }

    Iterator end () {
        return Iterator (4, this);
    }

    Circle() = delete; // nu vom avea constructor implicit
    Circle(int x, int y, int ray) : x(x), y(y), ray(ray) {}

    // context: circle == punct{x, y};
    bool operator==(Punct p);

    bool operator>(Punct p);

    int operator[](char * prop);


};


#endif //ROSE8_04_CIRCLE_H
