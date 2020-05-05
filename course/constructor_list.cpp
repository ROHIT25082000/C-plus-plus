#include<iostream>
#include<string>

using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;
public: 
    Box()
     : length{100.0},breadth{100.0},height{100.0}{
    }
    Box(double leng,double bread,double heig):
        length{leng},breadth{bread},height{heig}{  
    }
    inline double volume()
    {
        return length*breadth*height;
    } 
};

int main(){
    Box mybox = Box(12,23,34);
    cout << "Volumne : "<< mybox.volume() << endl;
}