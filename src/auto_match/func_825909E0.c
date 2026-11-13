extern int fn_825A23C0();


void fn_825909E0(int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) * 0xc + param_1);
  if (iVar1 == 0) {
    uVar2 = fn_825A23C0(8,8);
    *(unsigned int *)(*(int *)(param_1 + 0x30) * 0xc + param_1) = uVar2;
  }
  else {
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 4);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) * 0xc + param_1 + 4);
  if (iVar1 == 0) {
    uVar2 = fn_825A23C0(0x1c,8);
    *(unsigned int *)(*(int *)(param_1 + 0x30) * 0xc + param_1 + 4) = uVar2;
  }
  else {
    *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 4);
  }
  *(unsigned int *)(*(int *)(param_1 + 0x30) * 0xc + param_1 + 8) = param_2;
  return;
}

