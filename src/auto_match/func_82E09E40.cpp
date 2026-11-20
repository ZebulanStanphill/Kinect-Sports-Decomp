#include "havok/hkString.h"

extern "C" char *lbl_83187004[];
extern "C" int fn_82E09E40(char *s)
{
  int i = 0;
  char **tbl = lbl_83187004;
  while (tbl[i] != 0) {
    char *p = tbl[i];
    if (hkString::strNcmp(s, p, hkString::strLen(p)) == 0) return 1;
    i++;
  }
  return 0;
}
