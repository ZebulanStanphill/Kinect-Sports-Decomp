extern int fn_82AC6560();
extern int fn_82AD1978();


void fn_82AD19D8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  
  iVar1 = fn_82AC6560(param_3,0x14,0x1a);
  *(int *)(iVar1 + 0xc) = param_2;
  *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(param_2 + 4);
  *(int *)(param_2 + 4) = iVar1;
  fn_82AD1978(param_1,iVar1);
  return;
}

