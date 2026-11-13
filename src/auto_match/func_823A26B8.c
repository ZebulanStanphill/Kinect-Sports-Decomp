extern int fn_82278B40();
extern int fn_822ABA88();
extern int fn_8234B020();


void fn_823A26B8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  fn_82278B40((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0xb9c);
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar1 + 8);
  if ((piVar3[1] - *piVar3 & 0xfffffffcU) != 0) {
    iVar5 = 0;
    do {
      uVar6 = 0;
      piVar3 = *(int **)(*piVar3 + iVar5);
      iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
      if (*(int *)(iVar2 + 8) != 0) {
        do {
          iVar2 = fn_822ABA88(iVar2,uVar6);
          fn_8234B020((unsigned __int64)*(unsigned int *)(iVar2 + 0x118) + 0x2c0);
          uVar6 = uVar6 + 1;
          iVar2 = *(int *)(piVar3[4] * 4 + *piVar3);
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 8));
      }
      piVar3 = *(int **)(iVar1 + 8);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar4 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}

