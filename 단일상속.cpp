#include <iostream>
#include <string>
using namespace std;

// 부모 클래스 (기반 클래스)
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void introduce() {
        cout << "이름: " << name << ", 나이: " << age << endl;
    }
};

// 자식 클래스 (파생 클래스)
class Student : public Person {
private:
    string major;

public:
    Student(string n, int a, string m) : Person(n, a), major(m) {}

    void study() {
        cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
    }
};

int main() {
    Student s("홍길동", 21, "컴퓨터공학");
    s.introduce();   // 부모 클래스 함수 사용
    s.study();       // 자식 클래스 함수 사용
    return 0;
}
/*부모클래스 출력할때 맴버함수에 public만 호출이 가능하고 private과 protected는 불가능하다.
자식클래스에 private로 상속을 받으면 놀랍게도 부모클래스에있는 맴버함수가 호출이 불가능하다.
protected또한 private과 같다.
자식클래스 맴버함수를 public에서 protected로 바꾸니 자식생성자 호출이 불가능하고 매게변수 또한 못받는걸로 보인다. private또한 같다.*/