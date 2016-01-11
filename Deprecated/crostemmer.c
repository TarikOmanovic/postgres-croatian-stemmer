#include <stdio.h>
#include <string.h>
#define MAX_LEN 1024
#define MAX_OPTIONS 32

int len ( char * a )
{
  int i = 0;
  int j = 0;
  while (a[i])
  {
    if (( a[i] & 0xc0) != 0x80 ) j++;
	i++;
  }
  return j;
}

void cro_stemmer(char input_word[], char output_word[], char sufixList[][12])
{
  int i = 0;
  int lenInput = len(input_word);
  int byteLenInput = strlen(input_word);
  for ( i = 0; i < 137; i++)
  {    
    int lenSuf = len(sufixList[i]);
    int byteLenSuf = strlen(sufixList[i]);
    int j = 0;
    int goodSufix = 1;
    while (j < byteLenSuf)
    {
      if (sufixList[i][j] != input_word[byteLenInput-byteLenSuf+j])
      {
	goodSufix = 0;
	break;
      }
      j++;
    }
    if ( goodSufix )
    {
      printf("Dobar sufix je %s\nInput len je %d\nSufix len je %d\n", sufixList[i], lenInput, lenSuf);
      strncpy (output_word, input_word, byteLenInput-byteLenSuf);
      output_word[byteLenInput-byteLenSuf] = '\0';
      break;
    }
  }
}



int main()
{
  char sufixList[137][12];
  
  strcpy(sufixList[0], "lovima");
  strcpy(sufixList[1], "movima");
  strcpy(sufixList[2], "evima");
  strcpy(sufixList[3], "njima");
  strcpy(sufixList[4], "ovima");
  strcpy(sufixList[5], "scima");
  strcpy(sufixList[6], "slima");
  strcpy(sufixList[7], "stima");
  strcpy(sufixList[8], "tcima");
  strcpy(sufixList[9], "šlju");
  strcpy(sufixList[10], "šću");
  strcpy(sufixList[11], "anja");
  strcpy(sufixList[12], "cima");
  strcpy(sufixList[13], "daca");
  strcpy(sufixList[14], "gama");
  strcpy(sufixList[15], "inom");
  strcpy(sufixList[16], "kama");
  strcpy(sufixList[17], "lova");
  strcpy(sufixList[18], "love");
  strcpy(sufixList[19], "lovi");
  strcpy(sufixList[20], "mova");
  strcpy(sufixList[21], "move");
  strcpy(sufixList[22], "movi");
  strcpy(sufixList[23], "nima");
  strcpy(sufixList[24], "njem");
  strcpy(sufixList[25], "njom");
  strcpy(sufixList[26], "noga");
  strcpy(sufixList[27], "nome");
  strcpy(sufixList[28], "nomu");
  strcpy(sufixList[29], "rima");
  strcpy(sufixList[30], "skom");
  strcpy(sufixList[31], "taka");
  strcpy(sufixList[32], "tima");
  strcpy(sufixList[33], "tkom");
  strcpy(sufixList[34], "zaka");
  strcpy(sufixList[35], "zima");
  strcpy(sufixList[36], "aca");
  strcpy(sufixList[37], "aka");
  strcpy(sufixList[38], "ama");
  strcpy(sufixList[39], "ana");
  strcpy(sufixList[40], "anj");
  strcpy(sufixList[41], "ara");
  strcpy(sufixList[42], "ata");
  strcpy(sufixList[43], "cem");
  strcpy(sufixList[44], "dac");
  strcpy(sufixList[45], "eva");
  strcpy(sufixList[46], "eve");
  strcpy(sufixList[47], "evi");
  strcpy(sufixList[48], "gom");
  strcpy(sufixList[49], "ima");
  strcpy(sufixList[50], "ina");
  strcpy(sufixList[51], "inu");
  strcpy(sufixList[52], "kom");
  strcpy(sufixList[53], "lom");
  strcpy(sufixList[54], "mom");
  strcpy(sufixList[55], "nih");
  strcpy(sufixList[56], "nim");
  strcpy(sufixList[57], "nja");
  strcpy(sufixList[58], "nje");
  strcpy(sufixList[59], "nji");
  strcpy(sufixList[60], "nju");
  strcpy(sufixList[61], "nog");
  strcpy(sufixList[62], "nom");
  strcpy(sufixList[63], "oga");
  strcpy(sufixList[64], "ome");
  strcpy(sufixList[65], "omu");
  strcpy(sufixList[66], "ova");
  strcpy(sufixList[67], "ove");
  strcpy(sufixList[68], "ovi");
  strcpy(sufixList[69], "rom");
  strcpy(sufixList[70], "sao");
  strcpy(sufixList[71], "sci");
  strcpy(sufixList[72], "ska");
  strcpy(sufixList[73], "ske");
  strcpy(sufixList[74], "sku");
  strcpy(sufixList[75], "sli");
  strcpy(sufixList[76], "sti");
  strcpy(sufixList[77], "tak");
  strcpy(sufixList[78], "tci");
  strcpy(sufixList[79], "tka");
  strcpy(sufixList[80], "tke");
  strcpy(sufixList[81], "tku");
  strcpy(sufixList[82], "tom");
  strcpy(sufixList[83], "zak");
  strcpy(sufixList[84], "ću");
  strcpy(sufixList[85], "ac");
  strcpy(sufixList[86], "ak");
  strcpy(sufixList[87], "am");
  strcpy(sufixList[88], "an");
  strcpy(sufixList[89], "ao");
  strcpy(sufixList[90], "ar");
  strcpy(sufixList[91], "ca");
  strcpy(sufixList[92], "ce");
  strcpy(sufixList[93], "ci");
  strcpy(sufixList[94], "cu");
  strcpy(sufixList[95], "em");
  strcpy(sufixList[96], "ga");
  strcpy(sufixList[97], "ge");
  strcpy(sufixList[98], "gi");
  strcpy(sufixList[99], "gu");
  strcpy(sufixList[100], "ih");
  strcpy(sufixList[101], "im");
  strcpy(sufixList[102], "in");
  strcpy(sufixList[103], "ka");
  strcpy(sufixList[104], "ke");
  strcpy(sufixList[105], "ki");
  strcpy(sufixList[106], "ku");
  strcpy(sufixList[107], "la");
  strcpy(sufixList[108], "lu");
  strcpy(sufixList[109], "ma");
  strcpy(sufixList[110], "mu");
  strcpy(sufixList[111], "na");
  strcpy(sufixList[112], "ne");
  strcpy(sufixList[113], "ni");
  strcpy(sufixList[114], "nu");
  strcpy(sufixList[115], "og");
  strcpy(sufixList[116], "oj");
  strcpy(sufixList[117], "om");
  strcpy(sufixList[118], "ra");
  strcpy(sufixList[119], "re");
  strcpy(sufixList[120], "ri");
  strcpy(sufixList[121], "ru");
  strcpy(sufixList[122], "st");
  strcpy(sufixList[123], "ta");
  strcpy(sufixList[124], "te");
  strcpy(sufixList[125], "ti");
  strcpy(sufixList[126], "tu");
  strcpy(sufixList[127], "zi");
  strcpy(sufixList[128], "a");
  strcpy(sufixList[129], "e");
  strcpy(sufixList[130], "g");
  strcpy(sufixList[131], "i");
  strcpy(sufixList[132], "k");
  strcpy(sufixList[133], "o");
  strcpy(sufixList[134], "t");
  strcpy(sufixList[135], "u");
  strcpy(sufixList[136], "");
  
  char input_word[MAX_LEN];
  
  printf("Unesite riječ: ");
  scanf("%s", input_word);
  
  char output_word[MAX_LEN];
  cro_stemmer(input_word, output_word, sufixList);
  
  printf("\nKorijen riječi \"%s\" je \"%s\"\n", input_word, output_word);
  
  return 0;
}