#include <iostream>
using namespace std;

// 부모 클래스
class Animal {
public:
    void eat() {
        cout << "동물이 먹고 있습니다." << endl;
    }
};

// 자식 클래스 (Animal을 상속)
class Dog : public Animal {
public:
    void bark() {
        cout << "멍멍!" << endl;
    }
};

int main() {
    Dog myDog;
    // 부모 클래스 함수사용
    myDog.eat();
    // 자식 클래스의 함수사용
    myDog.bark();

}