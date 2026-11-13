extern int fn_82636118();


void fn_82ABE4E0(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int iVar1;
  
  iVar1 = fn_82636118(*(unsigned int *)(param_1 + 0x300));
  *(unsigned int *)(iVar1 + 4) = (param_3 & 1) << 10 | 0x5000 | *(unsigned int *)(iVar1 + 4) & 0xffff5bff;
  return;
}

