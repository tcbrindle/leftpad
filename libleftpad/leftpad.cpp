#include <libleftpad/leftpad.hpp>

std::string lp::leftpad(std::string str, std::string::size_type len, char ch)
{
    if (len > str.size()) {
        return str.insert(0, len - str.size(), ch);
    } else {
        return str;
    }
}
