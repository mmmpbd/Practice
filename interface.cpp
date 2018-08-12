#include <iostream>
using namespace std;

class area {
    protected:
              int width;
              int height;
    public:
              void setwidth(int w){
                  width = w;
              }
              void setheight(int h){
                  height = h;
              }
              virtual int getarea() = 0;
};

class rectangle:public area{
    public: 
              int getarea(){
                  return width * height;
              }
};

class triangle:public area{
    public:
               int getarea(){
                   return 2 * width * height;
               }
};

int main(){
    rectangle A;
    rectangle* Rect = &A;
    Rect->setwidth(4);
    Rect->setheight(6);
    cout<<Rect->getarea()<<endl;
    triangle B;
    triangle* Trian = &B;
    Trian->setwidth(2);
    Trian->setheight(8);
    cout<<Trian->getarea()<<endl;
    return 0;
}
