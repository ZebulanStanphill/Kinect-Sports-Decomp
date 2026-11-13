extern void fn_82517978(unsigned *, unsigned, unsigned, int);
extern unsigned *fn_8265C9E0(int);
extern const char lbl_821B5E4C[];

unsigned *fn_823BC0D0(int param_1)
{
  unsigned *puVar1;

  puVar1 = fn_8265C9E0(0xc);
  if (puVar1 != 0) {
    unsigned *sub = puVar1 + 1;
    *puVar1 = (unsigned)lbl_821B5E4C;
    sub[0] = 0;
    sub[1] = 0;
    fn_82517978(sub, *(unsigned *)(param_1 + 4), *(unsigned *)(param_1 + 8), 0);
    return puVar1;
  }
  return 0;
}
