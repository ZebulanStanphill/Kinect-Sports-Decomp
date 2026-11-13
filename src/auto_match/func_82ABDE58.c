extern int fn_82903C70();
extern int fn_82D7E470();


unsigned __int64
fn_82ABDE58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82D7E470();
  if ((iVar2 == 0) || (iVar2 = fn_82903C70(), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    *param_3 = *(unsigned int *)(iVar2 + 0x10);
    *param_4 = *(unsigned int *)(iVar2 + 0x14);
  }
  return uVar1;
}

