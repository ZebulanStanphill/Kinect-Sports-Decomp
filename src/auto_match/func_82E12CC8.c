extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CFC288();


void fn_82E12CC8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  iVar1 = fn_82CE5410();
  fn_82CE5338(*(unsigned int *)(iVar1 + 0x10),uVar2);
  uVar2 = fn_82CFC288(param_2);
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  return;
}

