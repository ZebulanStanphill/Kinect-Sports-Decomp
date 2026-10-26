extern int *fn_8265C9E0(int);
extern unsigned int lbl_821B9C08;

int *fn_82447450(int param_1)
{
  int *p;

  p = fn_8265C9E0(8);
  if (p != 0) {
    *p = (int)&lbl_821B9C08;
    *(unsigned char *)(p + 1) = *(unsigned char *)(param_1 + 4);
    return p;
  }
  return 0;
}
