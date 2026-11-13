unsigned __int64 fn_827FA2A0(int param_1,unsigned int param_2,int *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if ((*(unsigned int *)(param_1 + 0x18) == 0) || (param_2 >= *(unsigned short *)(param_1 + 0x30))) {
    iVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    iVar2 = param_2 * 4 + *(int *)(param_1 + 0x18);
  }
  *param_3 = iVar2;
  return uVar1;
}

