
#include "festival.h"

namespace LEEHyeonGyeong2693251
{
    bool compareAcmacggi(const Acmacggi& d1, const Acmacggi& d2)
    {
        return (d1.getDay() == d2.getDay()) && (d1.getMonth() == d2.getMonth());
    }
}

int main()
{
    using namespace LEEHyeonGyeong2693251;
    festival f1; f1.print();

    festival f2(Acmacggi{11, 14}, true); f2.print();

    if (compareAcmacggi (f1.getDate(), f2.getDate()))
        std::cout << "same\n";
    else
        std::cout << "Not same\n";
    

    return 0;
}

// 4. main.cpp: 테스트 (추가)

// 1의 본인이름학번의 네임스페이스 안에 비멤버함수 compare클래스1 정의
// : 매개변수는 const 클래스1 참조형 2개, 매개변수 멤버들이 모두 같은지를 비교

// 클래스2 객체1 선언, print함수 호출

// 클래스2 객체2 초기값을 넣어서 선언, print함수 호출

// 비멤버함수 compare클래스1을 호출하여 그 리턴값이 true면 same, false면 not same을 표준스트림으로 출력

