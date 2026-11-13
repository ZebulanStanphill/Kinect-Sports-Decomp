extern int fn_8268C510();
extern int fn_8270C6B0();


unsigned __int64 fn_826D71D0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = fn_8270C6B0(((unsigned int)*(unsigned int *)(*(int *)(param_2 + 0x10) + 0x24) & 0xfffffffc) + 8);
  fn_8268C510(param_1,uVar1);
  return param_1;
}

