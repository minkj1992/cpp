## [CH01-1]`namespace`

1. 관련된 요소끼리 묶어서 관리 가능
2. 기능별로 다른 이름 공간을 사용하기에, 함수/구조체등의 이름 충돌을 막을 수 있다.

## namespace에 있는 요소에 접근하는 3가지 방법
1. 한정된 이름(`qualified name`)
	- `Audio::init();`
2. `Using 선언(Declaaration)`을 사용한 접근
	- `using Audio::init;`
	- init함수는 Audio 이름 없이 사용 가능
3. `Using 지시어(directive)`
	- `using namespace Audio;`
	- Audio namespace의 모든 요소를 Audio 이름 없이 사용가능.
- `using` 선언이나 지시어는 "함수 안 또는 밖"에 만들 수 있다.
- 1번이 가장 좋은 방법
- `::init()`: global에 있는 네임스페이스를 사용하고 싶다면 콜론 2개

## 함수를 선언 파일과 구현 파일로 분리할 때
1. 함수의 선언부와 구현부를 모두 namespace로 묶어야 한다.

- 구현부 (방법 1)
```c++
#include "Audio.h"
namespace Audio
{
	void init()
	{
	}
	void reset()
	{
	}
}
```
- 방법 2
```c++
void Audio::init()
{
}

void Audio::reset()
{
}
```

## namespace std
> c++은 표준의 모든 요소는 std namespace안에 존재한다. (C와 달리)

- `max()`
	- `std::max(1,2);`
	- `using std::max; max(1,2);`
	- `using namespace std; max(1,2);`

- std 전체를 열어두게 되면 (using namesoace std) 이름충돌 조심해야한다.
	- `count`라는 변수를 만들었을 때, 컴파일시 표준함수 `count()` 인지, 전역변수 count인지 ambiguous하다.

## C++ 헤더 파일의 특징

1. 헤더 파일의 확장자를 사용하지 않는다. (.h, ...)
2. 기존 c 헤더를 대신하는 `새로운 헤더파일`을 제공한다.
	- <stdio.h> -> <cstdio>
	- <stdlib.h> -> <cstdlib>

## C++ 헤더 파일 관례
- `<stdio.h>` vs `<cstdio>`
	- `<stdio.h>`
		- 표준함수가 `global namespace`에 있다.
		- c++ 철학에 위배된다.
	-  `<cstdio>`
		- `printf()` 등의 표준 함수가 `std` 이름 공간에 있다.
		- 표준은 아니지만 대부분의 컴파일러는 `global namespace`에도 printf등의 표준 함수를 제공한다.
		-
		```c++
		 #include <cstdio>
		 int main()
		 {
			 std::printf("hello\n");
			 printf("hello\n");
		 } 
	 ```


