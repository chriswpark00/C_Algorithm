#include <stdio.h>
#include <string.h> //strcpy( 변수, 값); 문자열을 저장할때 사용하는 메소드 
// 구조체
/*
	동일한 자료형의 모임이 아닐 때 사용
	선언위치는 main()함수 밖 - > 붕어빵틀같아서
	구조체를 여러개 만들기위해 여러번 선언 할필요 X
	
	"객체" 개념으로 확장됨
	
	**typedef -> 자료형을 만드는 키워드
	=> 
		1. 가독성 증가 
		2. 이식성 증가 (보통 헤더파일에 따로 처리함.) 
*/
// 자료형이 달라도 됨 
// ex) 배열에서는
	// 학생1 : 국, 영, 수 점수
	// 학생1 성적, 학생2 성적, 학생3 성적...
	// 구조체에서는  
	// 학생의 나이, 이름, 키 자료구조가 다름 (int, char, double)
	
struct student{ // 선언 위치 유의!!  
	char name[10];
	int score1;
	int score2;
	int score3;
	double avg;
};

int main() {
	struct student s1 = { "홍길동", 10, 20, 30, 3.14};
	struct student s2;
	strcpy(s2.name, "aaaa");
	scanf("%d%d%d", &s2.score1, &s2.score2, &s2.score3); // [ . ] == 멤버연산자 
	scanf("%lf", &s2.avg);
	printf("%s, %d, %.2lf", s2.name, s2.score1, s2.avg);		
	return 0;
}
