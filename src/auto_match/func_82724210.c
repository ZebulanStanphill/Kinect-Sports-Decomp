extern void fn_8267C498(void *);

int fn_82724210(int param_1)
{
  int iVar1;
  int *p;
  int r;

  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (iVar1 != 0 && (p = *(int **)(iVar1 + 0x14)) != 0) {
    r = p[0xc];
    p[1] = p[1] + 1;
    fn_8267C498(p);
    return r;
  }
  return -1;
}
