extern int fn_827D75C0();


unsigned int fn_827D96A8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  if (*(unsigned int *)(param_1 + 0x14) == 0) {
    uVar1 = fn_827D75C0(param_2,param_1);
    *(unsigned int *)(param_1 + 0x14) = uVar1;
  }
  return *(unsigned int *)(param_1 + 0x14);
}

