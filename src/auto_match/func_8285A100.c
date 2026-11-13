extern int fn_82F68B78();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8285A100(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_2 = *(int *)(param_1 + 0x50) + param_2;
  *(int *)(param_2 + 0x50) = (int)param_3;
  uVar2 = lbl_821AAD20;
  uVar1 = lbl_82002AE0;
  if ((int)param_3 != 0) {
    fn_82F68B78(param_3,param_2 + 0x10);
    return;
  }
  *(unsigned int *)(param_2 + 0x10) = lbl_82002AE0;
  *(unsigned int *)(param_2 + 0x20) = uVar2;
  *(unsigned int *)(param_2 + 0x30) = uVar2;
  *(unsigned int *)(param_2 + 0x40) = uVar2;
  *(unsigned int *)(param_2 + 0x14) = uVar2;
  *(unsigned int *)(param_2 + 0x24) = uVar1;
  *(unsigned int *)(param_2 + 0x34) = uVar2;
  *(unsigned int *)(param_2 + 0x44) = uVar2;
  *(unsigned int *)(param_2 + 0x18) = uVar2;
  *(unsigned int *)(param_2 + 0x28) = uVar2;
  *(unsigned int *)(param_2 + 0x38) = uVar1;
  *(unsigned int *)(param_2 + 0x48) = uVar2;
  *(unsigned int *)(param_2 + 0x1c) = uVar2;
  *(unsigned int *)(param_2 + 0x2c) = uVar2;
  *(unsigned int *)(param_2 + 0x3c) = uVar2;
  *(unsigned int *)(param_2 + 0x4c) = uVar1;
  return;
}

