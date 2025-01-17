/*
Copyright (c) 2017 landave

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#ifndef IDENTITYPROGRESS_H_
#define IDENTITYPROGRESS_H_
#include <cstdint>
#include <string>
#include <sstream>
#include <fstream>

class IdentityProgress {
public:
  std::string nickname;
  std::string identity;
  uint64_t currentcounter;
  uint64_t bestcounter;

  IdentityProgress();
  IdentityProgress(std::string nickname,
    std::string identity,
    uint64_t currentcounter,
    uint64_t bestcounter);

  static const char* NICKNAME_STR;
  static const char* IDENTITY_STR;
  static const char* CURRENTCOUNTER;
  static const char* BESTCOUNTER;


  std::string toIniString() const;

  static IdentityProgress parse(const std::string& segment);
};

#endif
