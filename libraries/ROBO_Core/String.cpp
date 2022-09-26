#include "String.h"

Core::String::String(const char* value) : str(value) {}

Core::String Core::String::operator=(const char* value) {
  return String(value);
}

const char* Core::String::c_str() const {
  return this->str;
}