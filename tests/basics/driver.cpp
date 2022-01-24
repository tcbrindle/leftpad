
// Copyright (c) 2022 Tristan Brindle (tcbrindle at gmail dot com)
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <libleftpad/version.hpp>
#include <libleftpad/leftpad.hpp>

#include "catch.hpp"

TEST_CASE("leftpad testing")
{
    using lp::leftpad;

    REQUIRE(leftpad("foo", 2) == "foo");
    REQUIRE(leftpad("foo", 3) == "foo");
    REQUIRE(leftpad("foo", 5) == "  foo");
    REQUIRE(leftpad("foo", 12) == "         foo");
    REQUIRE(leftpad("foo", 13) == "          foo");

    REQUIRE(leftpad("foo", 2, ' ') == "foo");
    REQUIRE(leftpad("foo", 3, ' ') == "foo");
    REQUIRE(leftpad("foo", 5, ' ') == "  foo");
    REQUIRE(leftpad("foo", 12, ' ') == "         foo");
    REQUIRE(leftpad("foo", 13, ' ') == "          foo");

    REQUIRE(leftpad("1", 2, '0') == "01");
    REQUIRE(leftpad("1", 2, '-') == "-1");
    REQUIRE(leftpad("foo", 4, '*') == "*foo");
    REQUIRE(leftpad("foo", 5, '*') == "**foo");
    REQUIRE(leftpad("foo", 6, '*') == "***foo");
    REQUIRE(leftpad("foo", 103, '*') == "****************************************************************************************************foo");
}
