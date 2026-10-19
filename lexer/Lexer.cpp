
#include<iostream>
#include"lexer.h"
#include<vector>
#include<string>

void Compiler::Lexer(std::string input) {
  for(auto& i : input) {
    if(i == ' ') {
      i++
    }
    if(isalpha(i) {
      if(i == "fn" || i == "var" || i == "auto" || i == "int" || i == "float" || i == "bool" || i == "char" || i == "void" || i == "string" || i == "if" || i == "else" || i == "for" || i == "while" || i == "switch" || i == "case" || i == "break" || i == "continue" || i == "const" || i == "global" || i == "static" || i == "import") {
        tokens.push_back(Compiler { Token::KEYWORDS } );
        i++
      }
      if(i != Compiler { Token::KEYWORDS }) {
        tokens.push_back( Compiler { Token::IDENTIFIER }
        i++
      }

    }
    }
}
        
        
