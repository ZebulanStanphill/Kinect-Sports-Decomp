extern int fn_82279E08();
extern int fn_82284738();
extern int fn_82284D28();


void fn_82284B08(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82284738();
  iVar1 = *(int *)(iVar2 + 0x14c);
  if ((*(int *)(iVar2 + 0x148) != iVar1) && (*(int *)(iVar1 + -0x10) == param_2)) {
    if ((*(int *)(iVar1 + -0xc) == 3) || (*(int *)(iVar1 + -8) == 3)) {
      fn_82284D28(iVar2);
    }
    fn_82279E08(param_1,iVar2);
  }
  return;
}

