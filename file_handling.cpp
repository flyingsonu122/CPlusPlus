#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream MyFile;
  MyFile.open("test.txt");

  MyFile << "I love C++! \n";
  MyFile.close();
}