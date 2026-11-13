extern int fn_8268E9E8();


void fn_8267AE38(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = ~(*(int *)(param_1 + 4) - 1U);
  uVar2 = (*(int *)(param_1 + 4) + param_2) - 1U & uVar1;
  if (*(unsigned int *)(param_1 + 8) < 4) {
    iVar3 = (param_2 + param_3 & uVar1) - uVar2;
    iVar4 = *(unsigned int *)(param_1 + 8) * 0x20 + param_1;
    *(unsigned int *)(iVar4 + 0x40) = uVar2;
    *(int *)(iVar4 + 0x44) = iVar3;
    *(unsigned int *)(iVar4 + 0x48) = 0;
    *(int *)(param_1 + 0xb0) = iVar3 + *(int *)(param_1 + 0xb0);
    fn_8268E9E8(*(unsigned int *)(param_1 + 0xc),iVar4 + 0x30);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}

