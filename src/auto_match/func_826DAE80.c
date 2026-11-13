extern int fn_826DAB38();


int fn_826DAE80(int *param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_826DAB38(param_1,param_2,*(unsigned int *)(iVar2 + 4) & *param_2), iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 0xc + iVar2 + 0x10;
  }
  return iVar2;
}

