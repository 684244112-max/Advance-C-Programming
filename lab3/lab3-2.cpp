#include <iostream>

int main(){
    struct Point {
        int x;
        int y;
    } p1;
    int x0, y0;
    for (x0 = 1; x0<=10; x0++){
    y0 = x0 +1;
    p1 = {x0, y0};
    std::cout << "(" << p1.x <<", " << p1.y << ")" << std::endl;
    }
}