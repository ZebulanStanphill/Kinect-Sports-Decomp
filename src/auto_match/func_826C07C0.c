extern int fn_826BE0E0();
extern int fn_826BE308();
extern int fn_826C0110();


void fn_826C07C0(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)(*(int *)*param_3 + 0xc);
  if ((iVar1 == 0) ||
     (iVar3 = fn_826BE308(param_1,param_3,*(unsigned int *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_826C0110(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_826BE0E0(iVar3 * 0x20 + iVar1 + 0x10,param_3);
  }
  return;
}

