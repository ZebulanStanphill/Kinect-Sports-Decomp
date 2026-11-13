extern int fn_826FDC68();
extern int fn_82702BF0();
extern int fn_82709500();


void fn_82709658(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)(*(int *)*param_3 + 0xc);
  if ((iVar1 == 0) ||
     (iVar3 = fn_826FDC68(param_1,param_3,*(unsigned int *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_82709500(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_82702BF0(iVar3 * 0x1c + iVar1 + 0xc,param_3);
  }
  return;
}

