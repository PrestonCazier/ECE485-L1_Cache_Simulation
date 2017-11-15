#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <string>
#include "cache.h"

using namespace std;

void ResetCache();

int HitCount = 0;
int MissCount = 0
int CacheReads = 0;
int CacheWrites = 0;
long totalOperations = 0;

int main(int argc, char* argv[])
{
  string line;
  ifstream* file;
  
  try
  {
    file.open(argv[1]);
    if (file.isOpen())
    {
      while (getline(file, line))
      {
        istringstream iss(line);
        int a, b;
        // process pair (a,b)
        if (!(iss >> a >> b)) { break; } // error
      
      
        // this is were we actually handle cache instructions
        cout << a << ',' << b << '\n';
        //
      }
    }
  }
  catch(Exception e)
  {
    cout << e << "\n\n";
  }
  
  file.close();
  return 0;
}
