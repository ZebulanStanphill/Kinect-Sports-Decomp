extern int *fn_8265C9E0(int);
extern unsigned int lbl_821B79F0;

int *fn_823FB290(int param_1)
{
  int *p;

  p = fn_8265C9E0(8);
  if (p != 0) {
    *p = (int)&lbl_821B79F0;
    p[1] = *(int *)(param_1 + 4);
    return p;
  }
  return 0;
}
