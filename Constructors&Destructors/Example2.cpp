/*2. Default and Parameterized Constructors (Rectangle Class)
Steps:
Define the class: Create a class named Rectangle.
Declare member variables: Add private variables for length and width.
Create a default constructor: This constructor should set length and width to 0.
Create a parameterized constructor: This constructor should accept parameters to initialize length and width.
Write methods: Create a method area() to calculate and return the area of the rectangle.
Create objects: In the main function, create objects of Rectangle using both constructors and display their area.
*/
#include<iostream>
#include<string>
using namespace std;

class Rectangle{

   private:
   int length;
   int width;

   public:
   
   Rectangle(){
    length = 0;
    width = 0;
   }

   Rectangle(int length, int width){
    this->length = length;
    this->width = width;
   }

   int area(){
    return length * width;
   }

   void displayArea(){
    cout<<"The length of the rectangle is "<<length<<endl;
    cout<<"The width of the rectangle is "<<width<<endl;
    cout<<"The area of the rectangle is "<<area()<<endl;
    cout<<"------------------"<<endl;
   }

};

int main(){


    Rectangle R1(10,5);
    R1.displayArea();
    
    Rectangle R2(20,10);
    R2.displayArea();

    return 0;
}