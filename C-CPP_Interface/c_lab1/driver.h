#ifdef __cplusplus		// C++ 컴파일러에서 정의된 매크로	C++ 컴파일러로 코드가 컴파일되면 아래의 코드가 활성화
extern "C" {			// C++ 컴파일러에서 extern "C"를 사용하면 C의 링킹 규칙을 따르도록 지정	
#endif					// 그러면 C와 C++ 간에 함수 호출 호환 가능

extern int driver_sub(int a, int b);	// extern 다른 파일에서 정의된 함수나 변수를 참조할 때 사용

#ifdef __cplusplus
}
#endif