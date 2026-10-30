extern unsigned int fn_827F6AB8(void *p);
int fn_827F7438(char *p, unsigned int i, int **out)
{
  unsigned int n = fn_827F6AB8(p);
  int *arr = *(int **)(p + 0x14);
  if (arr && n && i <= n - 1) { *out = arr + i; return 1; }
  *out = 0;
  return 0;
}
