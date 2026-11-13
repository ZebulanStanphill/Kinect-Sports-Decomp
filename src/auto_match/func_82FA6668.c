extern int fn_82FA5D50();
extern int fn_82FA5E98();
extern int fn_82FA5F18();


void fn_82FA6668(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = (*(unsigned int *)(param_2 + -4) & 0xfffffffc) + param_2 + -8;
    *(int *)(iVar2 + 4) = param_2 + -8;
    *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar2 + 8) | 2;
    *(unsigned int *)(param_2 + -4) = *(unsigned int *)(param_2 + -4) | 1;
    uVar1 = fn_82FA5E98();
    uVar1 = fn_82FA5F18(param_1,uVar1);
    fn_82FA5D50(param_1,uVar1);
  }
  return;
}

