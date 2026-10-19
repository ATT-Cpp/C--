
#include<iostream>
#include"lexer.h"
#include<vector>
#include<string>

void Compiler::Lexer(std::string input) {
  std::string currentWord;
  for(int ai = 0; ai < input.size(); ++ai) {
    if(isalpha(currentWord)) {
      ++ai;
      currentWord=input[ai];
    }
    if(isalpha(currentWord)) {
      if(currentWord == "fn" || currentWord == "var" || currentWord == "auto" || currentWord == "int" || currentWord == "float" || currentWord == "bool" || currentWord == "char" || currentWord == "void" || currentWord == "string" || currentWord == "if" || currentWord == "else" || currentWord == "for" || currentWord == "while" || currentWord == "switch" || currentWord == "case" || currentWord == "break" || currentWord == "continue" || currentWord == "const" || currentWord == "global" || currentWord == "static" || currentWord == "import") {
        Keywords.push_back(Compiler { Token::KEYWORDS } );
        ++ai;
        currentWord = input[ai]
      }
      if(currentWord != Keywords) {
        tokens.push_back( Compiler { Token::IDENTIFIER } );
        ++ai;
        currentWord = input[ai];
      }
        
    }
}
        
        
