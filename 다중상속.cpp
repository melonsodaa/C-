#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "강의를 하고 있습니다." << endl;
    }
};

class Researcher {
public:
    void research() {
        cout << "연구를 하고 있습니다." << endl;
    }
};

// 다중 상속
class Professor : public Teacher, public Researcher {
public:
    void introduce() {
        cout << "저는 교수입니다." << endl;
    }
};

int main() {
    Professor p;
    p.introduce();
    p.teach();
    p.research();
    return 0;
}

/*다중상속은 생성자를 생성할때는 상속받은 자식클래스 이름으로 부모클래스에 있는 맴버함수에 접근 가능하다(단 public일 경우).
그런데 클래스들의 맴버함수명이 다 같을때는 자식클래스에 맴버함수가 출력된다.  
자식클래스를 private로 바꾸면 아무리 함수명이 같아도 다른 클래스를 호출하지 않는다.*/