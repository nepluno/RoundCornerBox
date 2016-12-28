# Round Corner Box
A Single C++ Header Generating 3D Triangulated Round-Corner Boxes

This is an Eigen-based, header-only library for generating a 3D triangulated mesh of round-corner box centered at zero point. The input parameters to the class are number of subdivision, size of box, radius of the round corner. The output are the vertices, normal vectors and indices of the round-corner box.

![alt tag](http://www.columbia.edu/~yf2320/cornerbox.png)

Dependency:
Eigen (http://eigen.tuxfamily.org/)

Usage:
Include RoundCornerBox.hpp inside your code. See main.cpp for an example. 

To compile the example:
mkdir build && cd build && cmake .. && make

To run the example:
cd RoundCornerBox && ./RoundCornerBox 4 1.0 0.5 0.2 0.1 cornerbox.obj