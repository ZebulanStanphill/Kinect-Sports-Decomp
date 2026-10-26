extern int *fn_8265C9E0(int);
extern unsigned int lbl_821B5E58;

int *fn_823BC158(int param_1)
{
  int *p;

  p = fn_8265C9E0(0x10);
  if (p != 0) {
    *p = (int)&lbl_821B5E58;
    *(unsigned __int64 *)(p + 2) = *(unsigned __int64 *)(param_1 + 8);
    return p;
  }
  return 0;
}
