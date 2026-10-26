extern int *fn_8265C9E0(int);
extern unsigned int lbl_821B9BFC;

int *fn_824473E8(int param_1)
{
  int *p;

  p = fn_8265C9E0(8);
  if (p != 0) {
    *p = (int)&lbl_821B9BFC;
    p[1] = *(int *)(param_1 + 4);
    return p;
  }
  return 0;
}
