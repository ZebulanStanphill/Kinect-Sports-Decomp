extern int fn_8300F2C0();
extern int fn_8300F848();
extern int fn_83019E38();


unsigned __int64 fn_83010868(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [4];
  
  if (param_2 != 0) {
    puVar5 = *(unsigned int **)(param_1 + 0x50);
    puVar2 = (unsigned int *)0x0;
    while (puVar4 = puVar5, puVar4 != (unsigned int *)0x0) {
      iVar1 = puVar4[2];
      iVar6 = *(int *)(iVar1 + 8);
      if (iVar1 == param_2) {
        iVar7 = 0;
        if ((*(unsigned int *)(iVar6 + 0x14) & 0xffffff00) == 0x501100) {
          iVar7 = *(int *)(iVar6 + 0x9c) + -1;
          *(unsigned int *)(iVar6 + 0x9c) = 0;
        }
        uVar3 = *(unsigned int *)(iVar6 + 0x10);
        *(unsigned int *)(iVar1 + 0x14) = *(unsigned int *)(param_1 + 0x90);
        *(int *)(iVar1 + 0x30) = iVar7;
        aiStack_40[0] = iVar1;
        iVar6 = fn_83019E38(param_1 + 0x70,uVar3,aiStack_40);
        if (iVar6 != 1) {
          fn_8300F848(param_1,iVar1,0);
          fn_8300F2C0(param_1,iVar1);
        }
        if (puVar4 == *(unsigned int **)(param_1 + 0x50)) {
          *(unsigned int *)(param_1 + 0x50) = *puVar4;
        }
        else {
          *puVar2 = *puVar4;
        }
        if (puVar4 == *(unsigned int **)(param_1 + 0x54)) {
          *(unsigned int **)(param_1 + 0x54) = puVar2;
        }
        *puVar4 = *(unsigned int *)(param_1 + 0x58);
        *(unsigned int **)(param_1 + 0x58) = puVar4;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        return 1;
      }
      puVar2 = puVar4;
      puVar5 = (unsigned int *)*puVar4;
    }
    for (puVar2 = *(unsigned int **)(param_1 + 0x70); puVar2 != (unsigned int *)0x0;
        puVar2 = (unsigned int *)*puVar2) {
      iVar1 = puVar2[2];
      if (iVar1 == param_2) {
        if ((*(unsigned int *)(*(int *)(iVar1 + 8) + 0x14) & 0xffffff00) == 0x501100) {
          *(int *)(iVar1 + 0x30) = *(int *)(*(int *)(iVar1 + 8) + 0x9c) + *(int *)(iVar1 + 0x30);
          return 1;
        }
        *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
        return 1;
      }
    }
  }
  return 1;
}

