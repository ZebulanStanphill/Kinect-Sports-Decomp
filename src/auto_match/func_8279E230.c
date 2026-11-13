extern int fn_8279B108();
extern int fn_8279B180();
extern int fn_8279E068();


void fn_8279E230(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)*param_3;
  if ((iVar1 == 0) ||
     (iVar3 = fn_8279B180(param_1,param_3,*(unsigned int *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_8279E068(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_8279B108((iVar3 + 1) * 0xc + iVar1,param_3);
  }
  return;
}

