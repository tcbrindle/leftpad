
// Copyright (c) 2022 Tristan Brindle (tcbrindle at gmail dot com)
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef LEFTPAD_HPP_INCLUDED
#define LEFTPAD_HPP_INCLUDED

#include <string>

#include <libleftpad/export.hpp>

namespace lp
{
    /// Prepends the character `ch` to the start of `str` until it is of length `len`,
    /// and returns the new string
    LIBLEFTPAD_SYMEXPORT
    std::string leftpad(std::string str, typename std::string::size_type len, char ch = ' ');
}

#endif
