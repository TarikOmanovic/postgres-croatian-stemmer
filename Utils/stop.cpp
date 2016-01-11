#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string.h>

using namespace std;

int main() {
  int i = 0;
  int count = 0;
  vector<string> lista;
  for ( i = 0; i< 2904; i++)
  {
    string s;
    string ignore;
    cin >> s;
    cin >> ignore;
    cin >> ignore;
    cin >> ignore;
    cin >> ignore;
    if (find(lista.begin(), lista.end(), s) != lista.end())
    {
      ignore = "";
    } else 
    {
      lista.push_back(s);
      cout << "strcpy(stopList[";
      cout << count;
      cout << "], \"";
      cout << s;
      cout << "\");" << endl;
      count++;
    }
      
  }
  return 0;
}