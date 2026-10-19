#include<iostream>
#include"lexer.h"
#include<vector>
#include<string>

void Compiler::Lexer(std::string input) {
  for(auto& i : input) {
    if(i == ' ') {
      i++
      if(i.isalpha()) {
        if(i == "fn" || i == "var" || i == "auto" || i == "int" || i == "float" || i == "bool" || i == "char" || i == "void" || i == "string" || i == "
