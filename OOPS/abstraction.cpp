#include<iostream>
#include<string>
using namespace std;

class Shap{ //abstract class
    virtual void draw() = 0; // pure virtual fun
};
class Cir : public Shap{
public:
    void draw(){
        cout<<"drawing a circle\n";
    }
};
int main(){
    Cir c1;
    c1.draw();
    return 0;
}