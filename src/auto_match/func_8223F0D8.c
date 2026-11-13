extern unsigned strlen(const char *);
extern char *fn_8265CA60(unsigned);
void fn_8223F0D8(char *s)
{
  unsigned n = strlen(s) + 1;
  char *d = fn_8265CA60(n);
  while (n--) *d++ = *s++;
}
