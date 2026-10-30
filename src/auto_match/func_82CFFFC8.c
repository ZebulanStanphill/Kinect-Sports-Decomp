typedef struct { int *e; int pad; int n; } Tbl_82CFFFC8;

int fn_82CFFFC8(Tbl_82CFFFC8 *t)
{
  int i = 0;
  if (t->n >= 0) {
    int *p = t->e;
    do {
      if (*p != -1)
        return i;
      i++;
      p++;
    } while (i <= t->n);
  }
  return i;
}
