// (c) Copyright Damian Meden 2017

// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

// See http://www.boost.org/libs/tokenizer for documenation

/// simple_example_5.cpp
#include <iostream>
#include <boost/tokenizer.hpp>
#include <string>
#include <experimental/string_view>

auto tokenize(std::experimental::string_view to_tokenize, const char* separators)
{
    using TokenizerFunction = boost::char_separator<char>;
    using Tokenizer         = boost::tokenizer<
        TokenizerFunction, std::experimental::string_view::iterator, std::experimental::string_view>;

    return Tokenizer{to_tokenize, TokenizerFunction{separators}};
}

void doit(std::experimental::string_view view) {
    auto tt = tokenize(view, "-;|");
    for (auto tok: tt) {
        std::cout << tok << "\n";
    }
}

int main() {
    std::string str { ";;Hello|world||-foo--bar;yow;baz|;" };

    doit(str);
    return EXIT_SUCCESS;
}