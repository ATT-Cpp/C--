#pragma once

#include<iostream>
#include<vector>
#include<string>
class Compiler
{
    private: 
        enum Token  
{
        
        IDENTIFIER, //variable names
        KEYWORDS,  //like if else etc

        LPARENTHESES, // (
        RPARENTHESES, // }

        LBRACKET,
        RBRACKET,

        SEMICOLON,
        EQUALS,
}

        std::vector <Token> tokens;
        std::string compiler_Error;

    public:
        void Lexer(std::string input);
}
