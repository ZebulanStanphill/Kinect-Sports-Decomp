void fn_8285D448(int param_1,int param_2,int *param_3,int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x34);
  if (iVar2 == param_1) {
    uVar1 = *(unsigned int *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x38);
    *param_4 = param_2 + 0x1c;
    *param_5 = uVar1;
  }
  else {
    uVar1 = *(unsigned int *)(param_2 + 0x48);
    *param_4 = param_2 + 0x28;
    *param_5 = uVar1;
  }
  *param_3 = iVar2;
  return;
}

