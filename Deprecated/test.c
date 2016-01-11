#include <stdio.h>
#include <string.h>
#define LEMMA_LEN 64

static void
_croatian_lemma(const char *instr, char *outstr)
{
	strcpy(outstr, "TestnaLema");
}

int main()
{
  char	outstr[LEMMA_LEN + 1];
  char   *arg;
  
  _croatian_lemma(arg, outstr);
  
  printf("%s", outstr);
  return 0;
}