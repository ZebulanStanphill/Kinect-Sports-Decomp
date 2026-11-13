extern int memcpy();

void fn_8226A4A8(int param_1, unsigned int param_2)
{
  unsigned int *piVar1;
  unsigned int iVar2;
  unsigned int iVar3;
  unsigned int iVar4;
  unsigned int iVar5;

  piVar1 = *(unsigned int **)(param_1 + 4);
  iVar5 = *piVar1;
  while (iVar5 != piVar1[1]) {
    if (*(unsigned int *)(iVar5 + 0xd0) == param_2) {
      iVar3 = piVar1[1];
      iVar4 = iVar5;
      iVar2 = iVar5;
      while (iVar2 = iVar2 + 0xe0, iVar2 != iVar3) {
        memcpy(iVar4, iVar2, 0xe0);
        iVar4 = iVar4 + 0xe0;
      }
      iVar4 = piVar1[1] - 0xe0;
      for (iVar3 = iVar4; iVar3 != piVar1[1]; iVar3 = iVar3 + 0xe0) {
      }
      piVar1[1] = iVar4;
    }
    else {
      iVar5 = iVar5 + 0xe0;
    }
  }
  piVar1[0xad] = 1;
}
