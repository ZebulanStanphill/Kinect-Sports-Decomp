extern int fn_82AC6860();
extern int fn_82ACA920();
extern int fn_82AD1978();
extern int fn_82B841E8();


int fn_82B1AF10(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = fn_82B841E8(param_1,*(unsigned int *)(param_3 + 0x1c),0,0x33,1,1);
  uVar2 = fn_82AD1978(iVar1, *(unsigned int *)(param_4 + 0x10) != 0 ? fn_82ACA920(param_1,param_4,*(unsigned int *)(param_4 + 0xc)) : param_4);
  *(unsigned int *)(iVar1 + 0x2c) = uVar2;
  fn_82AC6860(param_1,iVar1,param_2,param_3);
  return iVar1;
}

