extern int *fn_8265C9E0(int);
extern unsigned int lbl_821B8C00;

int *fn_82429D30(int param_1)
{
  int *p;

  p = fn_8265C9E0(8);
  if (p != 0) {
    *p = (int)&lbl_821B8C00;
    p[1] = *(int *)(param_1 + 4);
    return p;
  }
  return 0;
}
