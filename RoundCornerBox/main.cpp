// This file shows the example usage of RoundCornerBox
//
// Copyright (C) 2016 Raymond Fei <fyun@acm.org>
//
// This Source Code Form is subject to the terms of the Mozilla Public License
// v. 2.0. If a copy of the MPL was not distributed with this file, You can
// obtain one at http://mozilla.org/MPL/2.0/.

#include "RoundCornerBox.hpp"
#include <iostream>
#include <sstream>

template<class T>
bool extractFromString( const std::string& in_string, T& output )
{
  return (bool)(std::stringstream(in_string) >> output);
}

int main(int argc, const char * argv[]) {
  if(argc < 7) {
    std::cout << "Usage: RoundCornerBox <N> <size.x> <size.y> <size.z> <radius> <filename>" << std::endl;
    std::cout << "\tExample: ./RoundCornerBox 4 1.0 0.5 0.2 0.1 cornerbox.obj" << std::endl;
    return 0;
  }
  
  Vector3d s; // half-size
  double r;   // round-corner radius
  int N;      // half of the number of faces at one hinge
  
  extractFromString(std::string(argv[1]), N);
  extractFromString(std::string(argv[2]), s(0));
  extractFromString(std::string(argv[3]), s(1));
  extractFromString(std::string(argv[4]), s(2));
  extractFromString(std::string(argv[5]), r);
  
  RoundCornerBox cbc;
  cbc.Create(N, s, r);
  cbc.WriteOBJ(std::string(argv[6]));
  return 0;
}
