extern unsigned int lbl_82191FCC;


void fn_8260E818(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  
  uVar6 = lbl_82191FCC;
  if (param_5 == 0) {
    uVar4 = *(unsigned int *)(param_3 + 0x10);
    uVar1 = *(unsigned int *)(param_3 + 0x1c);
    uVar2 = *(unsigned int *)(param_3 + 0x14);
    uVar3 = *(unsigned int *)(param_3 + 0x20);
    iVar5 = *(int *)(**(int **)(param_1 + 0x60) + 0x1ac);
    *(unsigned int *)(iVar5 + 0x24) = *(unsigned int *)(param_3 + 0x18);
    *(unsigned int *)(iVar5 + 0x18) = uVar4;
    *(unsigned int *)(iVar5 + 0x28) = uVar3;
    *(unsigned int *)(iVar5 + 0x38) = 1;
    *(unsigned int *)(iVar5 + 0x1c) = uVar2;
    *(unsigned int *)(iVar5 + 0x20) = uVar1;
    *(unsigned int *)(iVar5 + 0x2c) = uVar6;
    return;
  }
  if (param_5 != 1) {
    return;
  }
  *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x60) + 0x1ac) + 0x38) = 0;
  return;
}

