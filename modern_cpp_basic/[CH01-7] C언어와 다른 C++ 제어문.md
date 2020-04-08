
# [CH01-7] C언어와 다른 C++ 제어문
## `range for`
> C++11
1. C++11 부터 지원되는 `새로운 모양의 반복문`
2. 배열 뿐 아니라 **STL의 다양한 컨테이너(`list`, `vector`,`set`등)를 사용가능**
3. `auto`와 같이 사용되는 경우가 많다.
4. 사용자가 만든 `list`도 사용 가능

```cpp
#include <iostream>
int main()
{
	int x[10] = {1,2,3,4,5,6,7,8,9,10};
	for (auto n: x)
	{
		std::cout << n << " ";
	}
}
```
## `if init, f constexpr`
> C++ 17
### 핵심 개념
1. 조건문(`if`, `switch`)을 만들 때 **초기화 구문을 추가 할 수 있다.**
- 예제 1
```cpp
int foo() {return -1;}
int main()
{
	// 변수 선언; 조건문
	if ( int ret = foo(); ret == -1)
	
	// switch case응용
	switch( int n = foo(); n)
	{
		case 1: ...;break;
		case 2: ...;break;
	}
}
```
### `if constexpr`
> C++ 17
- 기존의 if (조건식)
	- 런타임(실행 시간)에 조건식을 조사
- `if constexpr (조건식)`
	- 컴파일 시간에 조건식을 조사
	- 조건식은 반드시 컴파일 타임에 값을 결정 할 수 있어야 한다.
	- = `static if`라고도 불리는 문법
	- 템플릿을 만들 때 주로 사용

```cpp
int main()
{
	int n = 0;
	if constexpr (n==0) // error
	{
	}

	// sizeof 함수는 컴파일 시점에 사이즈를 구한다.
	if constexpr ( sizeof(n) == 0 ) //ok
	{
	}
}
```
### `if constexpr` 활용
- 함수 템플릿을 만들 때 조건에 따라 **특정 코드를 생성하지 못하게 할 때**
```cpp
template<typename T>
void foo(T a)
{
	if constexpr (컴파일 시간에 확인하는 조건문)
	
}
```