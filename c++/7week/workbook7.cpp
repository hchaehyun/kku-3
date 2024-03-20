#include <iostream>
using namespace std;

/*
//7-1
class Rect;
bool equals(Rect r, Rect s);

class Rect{
    int width, height;
    public:
    Rect(int width, int height){this -> width = width; this -> height = height;}
    friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s){ 
    if(r.width == s.witdh && r.height == s.height) return true;
    else return false;
}

int main(){
    Rect a(3, 4), b(4, 5);
    if(equals(a, b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
}


//7-2
class Rect;
class RectManager{
    public:
    bool equals(Rect r, Rect s);
};

class Rect{
    int width, height;
    public:
    Rect(int width, int height){this->width = width; this->height = height;}
    friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s){
    if(r.width==s.width&&r.height==s.height) return true;
    else return false;
}

int main(){
    Rect a(3, 4), b(3, 4);
    RectManager man;
    if(man.equals(a, b)) cout << "equal" << endl;
    else cout << "not eqaul" << endl;
}


//7-3
class Rect;

class RectManager{
    public:
    bool equals(Rect r, Rect s);
    void copy(Rect& dest, Rect& src);
};

class Rect{
    int width,height;
    public:
    Rect(int width, int height){this->width = width; this->height = height;}
    friend RectManager;

};

bool RectManager::equals(Rect r, Rect s){
    if(r.width == s.width && r.height == w.height) return true;
    else return false;

}

void RectManager::copy(Rect& dest, Rect& src){
    dest.width==src.width; dest.height==src.height;
}

int main(){
    Rect a(3,4), b(5,6);
    RectManager man;

    man.copy(b, a);
    if (man.equals(a,b)) << cout << "equal" << endl;
    else cout << "notequal" << endl; 
}
*/

//7-4
class Power{
    int kick;
    int punch;
    public:
    Power(int lick = 0, int punch = 0){
        this->kick = kick; this->punch = punch;
    }
    void 
}