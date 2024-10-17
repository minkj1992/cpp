## 명시적으로 디폴트 생성자 사용하기

```cpp
class Test {
 public:
  Test() = default  // explicit default
}
```

## C 스타일 string

```cpp
Marine::Marine(int x, int y, const char* marine_name) {
  name = new char[strlen(marine_name) + 1];
  strcpy(name, marine_name);

  ...
}
```

> Q. 어째서 +1을 해야 하는가? 

\0로 마지막을 표현하기 위해서.

> Q2. 하지만 어쨰서 마지막을 표현해야 하는가? 그냥 size를 알고 있으니, \0는 필요없지 않을까?

A. [널 종단 문자가 필요한 이유](https://www.reddit.com/r/cpp_questions/comments/15vth5w/comment/jwx7qyi/?utm_source=share&utm_medium=web3x&utm_name=web3xcss&utm_term=1&utm_content=share_button)

C 언어는 배열을 1급 객체로 취급하지 않기로 했고, 배열의 크기를 따로 저장하지 않기 때문에 크기 정보를 유지하지 않습니다. 그래서 문자열의 끝을 알리기 위해 **널 종단 문자(\0)**를 사용하는 것이 관례가 되었습니다.

널 종단 문자는 문자열의 끝을 나타내기 위해 필요합니다. 배열 크기를 매번 전달하는 대신, \0로 문자열이 끝났음을 알릴 수 있습니다. 이는 특히 문자열의 크기를 따로 전달하지 않고 사용할 수 있는 이점이 있었습니다.

하지만 다른 데이터 타입(int, float 등)에서는 이러한 널 종단 문자를 사용할 수 없습니다. 예를 들어, 배열에 0을 저장할 수도 있고, 다른 값들을 저장할 수 있기 때문에 특정 값을 끝을 나타내는 값으로 사용할 수 없기 때문입니다. 문자 배열은 특별히 \0을 끝을 나타내는 값으로 사용하도록 정해졌습니다.



