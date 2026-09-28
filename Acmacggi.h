#pragma once
#include <iostream>

namespace LEEHyeonGyeong2693251
{
    class Acmacggi
    {
    //private 임
        int Month;
        int Day;

        void testMonth()
    {
        if ((Month <1) || (Month > 12))
        {
            std::cout << "Illegal month value!\n";
            std::exit(1);
        }   
    }

    void testDay()
    {
        if ((Day < 1) || (Day > 31 ))
        {
            std::cout << "Illegal day value!\n";
            std::exit(1);
        }
    }
    public: //이 이후부터 다 public
    void input()
    {
        std::cout << "Enter the month as a number: ";
        std::cin >> Month; testMonth();
        std::cout << "Enter the day of the month: ";
        std::cin >> Day; testDay();
    }
    void setMonth(int m) {Month = m; testMonth();}
    void setDay (int d) {Day = d; testDay();}
    void print()
    {
        switch(Month)
        {
            case 1: std::cout << "Jan "; break;
            case 2: std::cout << "Feb "; break;
            case 3: std::cout << "Mar "; break;
            case 4: std::cout << "Apr "; break;
            case 5: std::cout << "May "; break;
            case 6: std::cout << "Jun "; break;
            case 7: std::cout << "Jul "; break;
            case 8: std::cout << "Agu "; break;
            case 9: std::cout << "Sep "; break;
            case 10: std::cout << "Oct "; break;
            case 11: std::cout << "Nob "; break;
            case 12: std::cout << "Dec "; break;
        }
        std::cout << Day << "\n";
    }
    int getMonth() {return Month;}
    int getDay() {return Day;}
    };

}

// 1. 본인이름학번의 네임스페이스
// -본인이름학번 네임스페이스 예: 이름이 김프로이고 학번이 1234567일 경우 KimPro1234567
// using 지시자는 cpp파일에서는 영역 { block } 안에서 사용, 
// 헤더파일엔 using 지시자는 사용하지 않고 네임스페이스 지정자를 사용합니다.
// -using 지시자 예: { using namespace std; cout << "Enter your id: "; }
// -네임스페이스 지정자 예: std::cout << "Enter your id: ";


// 2. 클래스명.h: 클래스 정의
// 1의 본인이름학번의 네임스페이스 안에 클래스를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언 (2개 이상)
// private 멤버함수 정의
// -test멤버변수1: 멤버변수1 범위가 아니면 프로그램 종료
// -test멤버변수2: 멤버변수2 범위가 아니면 프로그램 종료
// public 멤버함수 정의
// -input: 표준스트림입력으로 멤버변수들 입력, test함수들 호출
// -set 접근함수들: 멤버변수 값 설정 및 test함수 호출
// -print: 표준스트림출력으로 멤버변수들 출력
// -get 접근함수들: 멤버변수 값 리턴