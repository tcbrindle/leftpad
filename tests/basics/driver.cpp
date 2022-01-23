
// Copyright (c) 2022 Tristan Brindle (tcbrindle at gmail dot com)
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <libleftpad/version.hpp>
#include <libleftpad/leftpad.hpp>

#undef NDEBUG
#include <cassert>

int main ()
{
    using lp::leftpad;

    assert(leftpad("foo", 2) == "foo");
    assert(leftpad("foo", 3) == "foo");
    assert(leftpad("foo", 5) == "  foo");
    assert(leftpad("foo", 12) == "         foo");
    assert(leftpad("foo", 13) == "          foo");

    assert(leftpad("foo", 2, ' ') == "foo");
    assert(leftpad("foo", 3, ' ') == "foo");
    assert(leftpad("foo", 5, ' ') == "  foo");
    assert(leftpad("foo", 12, ' ') == "         foo");
    assert(leftpad("foo", 13, ' ') == "          foo");

    assert(leftpad("1", 2, '0') == "01");
    assert(leftpad("1", 2, '-') == "-1");
    assert(leftpad("foo", 4, '*') == "*foo");
    assert(leftpad("foo", 5, '*') == "**foo");
    assert(leftpad("foo", 6, '*') == "***foo");
    assert(leftpad("foo", 103, '*') == "****************************************************************************************************foo");
}
