extern unsigned fn_82FA5060(unsigned, int);


int fn_830310B8(int param_1)
{
  unsigned *puVar1;
  unsigned *q;
  unsigned uVar2;

  if (*(unsigned int *)(param_1 + 8) != 0) {
    return 1;
  }
  if ((*(unsigned int *)(param_1 + 0x14) < *(unsigned int *)(param_1 + 0x10)) &&
     ((uVar2 = fn_82FA5060(*(unsigned *)(param_1 + 0x1c),0x70)) != 0)) {
    puVar1 = (unsigned *)uVar2;
    q = puVar1 + 2;
    if (q != 0) {
      q[0x18] = 0;
    }
    *puVar1 = *(unsigned *)(param_1 + 8);
    *(unsigned **)(param_1 + 8) = puVar1;
    return 1;
  }
  return 0;
}
