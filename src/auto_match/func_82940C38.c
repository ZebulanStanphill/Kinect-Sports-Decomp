extern unsigned int fn_8265C940(unsigned int, unsigned int);
extern int fn_8265C990(unsigned int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82940C38(int param_1, int param_2)
{
  unsigned int uVar1;
  unsigned int lVar2;
  unsigned int uVar3;

  uVar1 = *(unsigned int *)(param_1 + 0x604);
  if (uVar1 != 0) {
    uVar3 = uVar1;
  } else {
    uVar3 = 0x400;
  }
  while ((unsigned int)(param_2 + *(int *)(param_1 + 0x600)) > uVar3) {
    uVar3 = uVar3 << 1;
  }
  if (uVar3 != uVar1) {
    lVar2 = fn_8265C940(uVar3, 0x24810000);
    if (lVar2 == 0) {
      return 0x8007000e;
    }
    memcpy((void *)lVar2, *(void **)(param_1 + 0x5fc), *(unsigned int *)(param_1 + 0x600));
    fn_8265C990(*(unsigned int *)(param_1 + 0x5fc), 0x24810000);
    *(unsigned int *)(param_1 + 0x5fc) = lVar2;
    *(unsigned int *)(param_1 + 0x604) = uVar3;
  }
  return 0;
}
