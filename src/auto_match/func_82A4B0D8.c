extern int fn_82A5C0A8();

unsigned int fn_82A4B0D8(int param_1, int param_2, int param_3)
{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *pNext;
  int vt;

  piVar2 = (int *)(param_1 + 0x54);
  vt = *(int *)(param_1 + 0x54);
  uVar3 = 0;
  (*(int (**)())(vt + 8))(piVar2);
  puVar4 = *(unsigned int **)(param_1 + 0x144);
  while (puVar4 != 0 && (int)uVar3 >= 0) {
    pNext = puVar4;
    if (puVar4 != 0) {
      puVar4 = (unsigned int *)pNext[1];
      uVar1 = *pNext;
    } else {
      uVar1 = 0;
    }
    uVar3 = fn_82A5C0A8(uVar1, param_2, param_3);
  }
  vt = *piVar2;
  (*(int (**)())(vt + 0x14))(piVar2);
  return uVar3;
}
