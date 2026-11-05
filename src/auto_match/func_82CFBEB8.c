extern unsigned strlen(const char *);
extern char *fn_82CE52E0(void *, unsigned);

void *fn_82CFBEB8(char *param_1, void *param_2)
{
  char *d = fn_82CE52E0(param_2, strlen(param_1) + 1);
  char *s = param_1;
  char *t = d;
  while ((*t++ = *s++) != 0) ;
  return d;
}
