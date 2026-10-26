extern int *fn_8265C9E0(int);
extern unsigned int lbl_821B7A38;

int *fn_823FB520(int param_1)
{
  int *p;

  p = fn_8265C9E0(8);
  if (p != 0) {
    *p = (int)&lbl_821B7A38;
    p[1] = *(int *)(param_1 + 4);
    return p;
  }
  return 0;
}
