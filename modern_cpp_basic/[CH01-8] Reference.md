
# [CH01-8] Reference
> c에 포인터가 있다면, c++에는 reference가 있다.

## reference
## 핵심 개념
- 변수
	- 메모리의 특정 위치를 가리키는 이름
	- 코드안에서 해당 메모리에 접근하기 위해서 사용
- 레퍼런스 변수
	- 기존 변수에 또 다른 이름(alias)를 부여 하는 것
```cpp
int main()
{
	int n = 10;
	int& r = n; // 레퍼런스 변수
	
	r = 30;	// n=30
	cout << n << endl; // 30
	cout << r << endl; // 30
	cout << &n << endl; // 0093FBB8
	cout << &r << endl; // 0093FBB8
}
```

### reference 활용 (함수 인자 전달 방식)
1. call by value
	- 원본을 수정 할 수 없다.
	- 인자가 값으로 전달된다면 parameter 값이 이를 복사하고, 변경하더라도 params 값만 변경됨
2. call by pointer
	- c 배울때 call by reference 라고 배웠던 것이 c++에서 `reference`도입되면서 call by pointer라고 이름 변경
	- 원본을 수정할 수 있다.
	- param이 포인터 형식으로 args의 주소를 받는다. 이후 해당 주소를 통해 원본 값 변경 가능
3. call by reference
	- 원본을 수정할 수 있다.
	- 장점: pointer보다 간단 
	- 단점: 호출자 입장에서는 해당 arg가 call by value인지 call by reference인지 판단 불가능

```cpp
#include <iostream>

void f1(int n) {++n;}
void f2(int* p) {++(*p);} //call by pointer
void f3(int& r) {++r;} // call by reference, int& r = c;
int main()
{
	int a = 0,b=0,c=0;
	f1(a);
	f2(&b); //b가 변경될 수 있다고 예측 가능
	f3(c); // 호출자 입장에서는 call by value 인지 call by reference인지 파악 불가능 
}
```
### 포인터와 레퍼런스
1. 유사점
	- 기존 변수를 가리킨다.
2. 차이점  
	1. 초기화
		- 포인터:  변수 주소로 초기화, 초기값 생략 가능
		- 레퍼런스: 변수 이름으로 초기화 초기값이 반드시 필요
	2. 요소접근
			- 포인터:  *연산자 사용
		- 레퍼런스:  * 연산자 불필요
	3. null
		- 포인터:  null 가능
		- 레퍼런스:  null 불가능
	4. 주소출력
		- 포인터:  포인터 변수의 주소
		- 레퍼런스:  기존 변수와 동일 주소
```cpp
int main()
{
	int n = 10;
	
	// 1번 차이점 초기화
	int* p1 = &n;
	int& r1 = n;
	
	// 2번 차이점 요소 접근
	*p1 = 20;	// ok
	r1 = 20;	// error
	// 3번 차이점 null
	int* p2 = 0; // ok
	int& r2;	//error
	
	// 4번 차이점
	cout << &p1 << endl;	//포인터 변수주소
	cout << r1 << endl;		//기존 변수와 동일 주소
}
```
## const reference
## reference return
## rvalue reference


