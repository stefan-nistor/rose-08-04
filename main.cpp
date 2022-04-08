#include "Circle.h"
#include <vector>
#include <set>
#include <array>
#include <list>
#include <iostream>


int main() {
    Circle c1(10, 10, 5);
    Circle c2(15, 15, 5);

    for ( auto it = c1.begin(); it != c1.end(); ++ it ) {
        Punct p = * it;
        std :: cout << p.x << ", " << p.y << '\n';
    }

    // a ++ -> operator ++ (int)
    // ++ a -> operator ++ ()

    for ( Punct p : c1 ) {
        std :: cout << p.x << ", " << p.y << '\n';
    }

//    std :: set < int > arr = { 1, 2, 3, 4, 5 };
//    int n = 5;
//
//
//    for (int i = 0; i != n; ++i) {
///       int e = arr[i];
//        std :: cout << arr[i] << '\n';
//    }
//    for ( int e : arr ) {
//        std :: cout << e << '\n';
//    }

//    for ( auto it = arr.begin(); it != arr.end(); ++ it ) {
//        std :: cout << * it << '\n';
//    }

}