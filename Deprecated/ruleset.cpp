#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int utfLength(string s)
{
  int len = 0;
  while (*s)
    len+= (*s++ & 0xc0) != 0x80;
  return len;
}

bool firstSizeSecondAlphaCompare(string a, string b)
{
  if (utfLength(a) > utfLength(b))
    return true;
  if (utfLength(a) < utfLength(b))
    return false;
  if (a < b)
    return true;
  return false;
}
int main()
{
  vector<string> vect;
  string s;
  while ( cin >> s )
  {
    string clean = "";
    int j;
    for ( j = 0; j < s.length(); j++ )
    {
      if ( s[j] != ' ' && s[j] != ',' && s[j] != '(' && s[j] != ')' && s[j] != '\'')
	clean+=s[j];
    }
    vect.push_back(clean);
  }
  sort(vect.begin(), vect.end(), firstSizeSecondAlphaCompare);
  int i = 0;
  
  vect.erase ( unique(vect.begin(), vect.end()), vect.end());
  
  for ( i = 0; i < vect.size(); i++)
  {
    vect[i] = "strcpy(sufixList[" + to_string(i) + "], " + "\"" + vect[i] + "\");"; 
  }
  
  for ( i = 0; i < vect.size(); i++)
  {
    cout << vect[i] << endl;
  }
  return 0;
}


  
