#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "동물이 소리를 냅니다." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "멍멍!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "야옹!" << endl;
    }
};

int main() {

    Animal a1;
    Dog a2;
    Cat a3;

    a1.speak();
    a2.speak();
    a3.speak();

    return 0;
}
/*override를 지우니까 오버라이드가 된다. 왜인지는 모르겠다. 
a1 = a2;라는 코드를 출력전에 썻더니 결과는 전이랑 다른거 없이 그대로 나온다. 근데 a2 = a3;는 안된다. 
자식클래스 끼리는 안되는거 같다.그리고 스코프를 이용해서 Animal::speak();를 dog클래스 안에 넣으니 출력이 된다.*/