#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Sample class 1
/*
Classes can have multiple constructors, you just need to have different parameters.abort

if you have no values to specify you do not need to use parenthesis!

objects in class made first then class object itself made last.
*/
class Rectangle {
    private:
        int height;
        int width;
    
    // inline init
    // int height = 0;
    // int width = 0;

    public:
        
        // inline init default constructor:
        // Rectangle() = default;

        // basic constructor
        Rectangle() {
            height = 0;
            width = 0;
        }

        // constructor 1
        Rectangle(int side) {
            width = height = side;
        }

        // constructor 2
        Rectangle(int w, int h) {
            width = w;
            height = h;
        }

        // destructor, will execute when out of scope
        ~Rectangle() {
            cout << "Rectangle with " << width << " x " << height << " is destroyed." << endl;
        }
        
        // getter
        int getHeight() { 
            return height;
        }

        // getter
        int getWidth() { 
            return width;
        }

        // setter
        void setHeight(int newHeight) {
            height = newHeight;
        }

        //setter
        void setWidth(int newWidth) {
            width = newWidth;
        }
        
};


int main(){
    Rectangle rect;
    cout << rect.getHeight() << " " << rect.getWidth() << endl;
    Rectangle rect1(10);
    cout << rect1.getHeight() << " " << rect1.getWidth() << endl;
    Rectangle rect2(5, 4);
    cout << rect2.getHeight() << " " << rect2.getWidth() << endl;

    return 0;
}