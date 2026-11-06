extern unsigned char fn_8267D8F0(void *);
char *fn_8267D958(char *a, char *b)
{
  if (*(unsigned int *)(a + 8) == 0 || fn_8267D8F0(a) != 0) {
    return b ? b + 0xc : 0;
  }
  return a + 0xc;
}
