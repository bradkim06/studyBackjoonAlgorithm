# 1단계-입출력과 사칙연산

## Table of Contents

- [1단계 - HelloWorld](#1단계-helloworld)
  - [iostream](#iostream)
  - [std](#std)
  - [namespace](#namespace)
  - [cout](#cout)
  - [endl](#endl)
  - [etc..](#etc)

### 1단계-HelloWorld

[C++ Basic에 대해 잘 정리된 블로그](https://blog.hexabrain.net/159?category=402649)

#### iostream

iostream은 C++에 있는 입출력을 위한 헤더 파일이다. 이는 C++ 표준 라이브러리의
하나이다. Input/Output Stream(입출력 스트림)에서 이름을 따왔다. C 프로그래밍
언어의 stdio.h와 같은 역할을 한다.

#### std

[cout](#cout), [endl](#endl) 등의 입출력 함수들이 정의 되어있는 클래스.

#### namespace

함수 및 변수의 이름 충돌을 방지하는 목적의 기능이다.

**namespace를 사용하여 동일한 이름의 변수를 사용하는 예제**

```cpp
// Here we can see that more than one variables
// are being used without reporting any error.
// That is because they are declared in the
// different namespaces and scopes.
#include <iostream>
using namespace std;

// Variable created inside namespace
namespace first
{
    int val = 500;
}

// Global variable
int val = 100;

int main()
{
    // Local variable
    int val = 200;

    // These variables can be accessed from
    // outside the namespace using the scope
    // operator ::
    cout << first::val << '\n';

    return 0;
}
```



#### cout

c의 printf()와 동일한 역할을 한다.

```cpp
std::cout << "저의 이름은 " << name << "입니다.";
printf("저의 이름은 %s입니다.", name);
```

#### endl

C에서 \n(newLine)과 같은 역할을 한다.

#### etc

> [using namespace 사용을 지양해야 하는가?](https://sexycoder.tistory.com/16)
