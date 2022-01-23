
// Copyright (c) 2022 Tristan Brindle (tcbrindle at gmail dot com)
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <libleftpad/leftpad.hpp>

std::string lp::leftpad(std::string str, std::string::size_type len, char ch)
{
    if (len > str.size()) {
        return str.insert(0, len - str.size(), ch);
    } else {
        return str;
    }
}
