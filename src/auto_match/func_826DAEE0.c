extern int fn_826DAA60();
extern int fn_826DAAC0();
extern int fn_826DACD8();


void fn_826DAEE0(int *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)(*param_3 + 8);
  if ((iVar1 == 0) ||
     (iVar3 = fn_826DAAC0(param_1,param_3,*(unsigned int *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_826DACD8(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_826DAA60(iVar3 * 0xc + iVar1 + 0x10,param_3);
  }
  return;
}

