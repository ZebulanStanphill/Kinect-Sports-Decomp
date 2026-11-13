extern int fn_82AC6860();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82B841E8();


int fn_82B1B8C0(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned int uVar1;
  unsigned int uVar3;
  
  iVar2 = fn_82B841E8(param_1,*(unsigned int *)(param_3 + 0x1c),0,0x48,1,1);
  uVar1 = fn_82AD17B0(param_1,param_4);
  uVar3 = fn_82AD1978(iVar2,uVar1);
  *(unsigned int *)(iVar2 + 0x2c) = uVar3;
  fn_82AC6860(param_1,iVar2,param_2,param_3);
  return iVar2;
}

