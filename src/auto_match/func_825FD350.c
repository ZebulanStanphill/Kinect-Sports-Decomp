extern int fn_827D96A0();


unsigned __int64 fn_825FD350(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  *(unsigned int *)(param_1 + 0x34) = param_3;
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  uVar2 = fn_827D96A0(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x40) = uVar2;
  *(unsigned int *)(param_1 + 0x54) = uVar1;
  *(unsigned int *)(param_1 + 0x4c) = 0;
  *(int *)(param_1 + 0x50) = param_1 + 4;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x60) = 0x3e5;
  return 0x3e5;
}

