#include "driver.h"		// driver.h의 5번 줄만 복사됨

extern int cpp_sqr(int a);	// extern 선언으로 참조  extern - 변수나 함수가 다른 파일에 정의되어 있다는 의미
							// 링크할 때 정의를 찾아서 연결

int c_add_sqr(int a, int b)
{
	return cpp_sqr(a) + cpp_sqr(b);
}





