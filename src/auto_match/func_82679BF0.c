extern int fn_826776A0();
extern int fn_82679310();


void fn_82679BF0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x1d0);
  fn_82679310(param_1 + 0x1d4,piVar1);
  iVar2 = param_2;
  if ((2 < iVar2) && (*piVar1 != iVar2)) {
    *piVar1 = iVar2;
    fn_826776A0(param_1,param_2);
  }
  return;
}

