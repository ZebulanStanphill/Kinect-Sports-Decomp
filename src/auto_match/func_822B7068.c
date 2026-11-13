extern int fn_82F68B78();


void fn_822B7068(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  
  piVar1 = *(int **)(param_1 + 0x11c);
  if (*(int *)(*(int *)(*piVar1 + 0x8c0) + 0x90) == 0) {
    fn_82F68B78(param_2);
    return;
  }
  uVar4 = 0;
  piVar3 = piVar1 + 4;
  do {
    if (*piVar3 == param_2) {
      *(unsigned int *)(param_2 + 0x1b4) = 0;
      lVar6 = 2;
      *(unsigned char *)(piVar1 + (uVar4 + 1) * 0x10) = 1;
      puVar5 = (unsigned int *)(param_2 + 0x1dc);
      do {
        puVar2 = puVar5 + 1;
        puVar5 = puVar5 + 1;
        *puVar5 = *puVar2 & 0xfffffffd;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return;
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x10;
  } while (uVar4 < 2);
  return;
}

