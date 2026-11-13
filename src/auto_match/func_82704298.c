extern int fn_826F8620();
extern int fn_826FC048();
extern int fn_82702C48();


void fn_82704298(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)(*(int *)*param_3 + 0xc);
  if ((iVar1 == 0) ||
     (iVar3 = fn_826FC048(param_1,param_3,*(unsigned int *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_82702C48(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_826F8620((iVar3 + 1) * 0xc + iVar1,param_3);
  }
  return;
}

