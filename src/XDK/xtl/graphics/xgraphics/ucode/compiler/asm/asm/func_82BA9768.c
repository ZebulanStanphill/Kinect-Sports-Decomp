extern int fn_82BA05E8();
extern int fn_82BC24F0();


int fn_82BA9768(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  
  iVar1 = fn_82BC24F0(0x31,param_4);
  *(unsigned int *)(iVar1 + 0x38) = param_2;
  *(unsigned int *)(iVar1 + 0x50) = 0;
  fn_82BA05E8(iVar1,1,param_3);
  *(unsigned int *)(param_1 + 0x38) = param_2;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0xe4) = *(unsigned int *)(param_1 + 0xe4) & 0xffffff7f;
  return iVar1;
}

