extern int free(unsigned int);
extern unsigned int lbl_831BB940;

void fn_82F719E0(void)
{
  int base;
  int p;

  base = (int)&lbl_831BB940;
  p = base;
  do {
    if (*(unsigned int *)p != 0 && *(int *)(p + 4) != 1) {
      free(*(unsigned int *)p);
      *(unsigned int *)p = 0;
    }
    p = p + 8;
  } while (p < base + 0x120);
}
