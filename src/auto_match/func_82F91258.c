typedef unsigned char bool;
#define true 1
#define false 0


bool fn_82F91258(char *param_1,char *param_2)

{
  bool bVar1;
  char *pcStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  
  pcStack_20 = (char *)0x0;
  pcStack_1c = param_1;
  pcStack_18 = param_2;
  while( true ) {
    if (*pcStack_18 == '\0') {
      if ((((*pcStack_1c == '\0') || (*pcStack_1c == ' ')) || (*pcStack_1c == '\t')) ||
         ((*pcStack_1c == '*' &&
          (((pcStack_1c[1] == '\0' || (pcStack_1c[1] == ' ')) || (pcStack_1c[1] == '\t')))))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      return bVar1;
    }
    if (*pcStack_1c == '*') {
      pcStack_20 = pcStack_1c + 1;
      pcStack_1c = pcStack_20;
    }
    if (((*pcStack_1c == '\0') || (*pcStack_1c == ' ')) || (*pcStack_1c == '\t')) break;
    if (((*pcStack_1c < 'a') || ('z' < *pcStack_1c)) &&
       (((*pcStack_1c < 'A' || ('Z' < *pcStack_1c)) &&
        ((((*pcStack_1c < '0' || ('9' < *pcStack_1c)) && (*pcStack_1c != '.')) &&
         ((*pcStack_1c != '*' && (*pcStack_1c != '?')))))))) {
      return false;
    }
    if (((*pcStack_1c == '?') && (*pcStack_18 != '\0')) ||
       ((*pcStack_18 == *pcStack_1c || (*pcStack_18 + -0x20 == (int)*pcStack_1c)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      pcStack_1c = pcStack_1c + 1;
    }
    else {
      if (pcStack_20 == (char *)0x0) {
        return false;
      }
      pcStack_1c = pcStack_20;
      pcStack_18 = pcStack_18 + -1;
    }
    pcStack_18 = pcStack_18 + 1;
  }
  return pcStack_1c == pcStack_20;
}

