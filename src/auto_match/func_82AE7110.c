extern int fn_82ABE250();
extern int fn_82B507E0();


int fn_82AE7110(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  
  iVar1 = fn_82ABE250(param_1,0x24,0x15);
  *(unsigned int *)(iVar1 + 0x1c) = iVar1 + 0x18U | 1;
  *(unsigned int *)(iVar1 + 0x18) = iVar1 + 0x1cU | 1;
  *(unsigned int *)(iVar1 + 0xc) = param_4;
  *(unsigned int *)(iVar1 + 8) = param_3;
  *(unsigned int *)(iVar1 + 0x14) = 0;
  *(unsigned int *)(iVar1 + 0x10) = 0;
  *(unsigned int *)(iVar1 + 4) = 0;
  *(unsigned char *)(iVar1 + 0x20) = 0;
  fn_82B507E0(iVar1,param_2);
  return iVar1;
}

