extern int fn_82CE4118();
extern int fn_82D813C0();
extern int fn_82D81690();
extern int fn_82DC82C8();


void fn_82DB3FD0(int param_1)

{
  int iVar1;
  int lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c0);
  lVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x10) - 1;
  *(int *)(iVar1 + 0x10) = (int)lVar2;
  if (lVar2 == 0) {
    fn_82DC82C8(iVar1 + 0x14,param_1);
    fn_82D813C0(param_1,iVar1 + 8);
    fn_82D81690(param_1,iVar1 + 0xc);
    fn_82CE4118(iVar1);
  }
  return;
}

