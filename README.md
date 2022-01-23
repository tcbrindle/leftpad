# libleftpad #

`libleftpad` is a useful C++ library which prepends characters to strings.

It is very definitely a serious project.

Usage:

```cpp
#include <libleftpad/leftpad.hpp>

int main()
{
    std::string hello = "Hello"

    auto hello_with_spaces = lp::leftpad(hello, 10);

    assert(hello_with_spaces == "     Hello");
}
```
