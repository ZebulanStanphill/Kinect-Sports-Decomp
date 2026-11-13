extern int fn_827B2738();


int fn_827B3250(int *param_1,int param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_827B2738(param_1,param_2,*(unsigned int *)(iVar2 + 4) & *(unsigned int *)(param_2 + 4)),
     iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 0x14 + iVar2 + 0x10;
  }
  return iVar2;
}

