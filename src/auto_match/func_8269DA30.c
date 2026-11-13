extern int fn_8269B590();


int fn_8269DA30(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_8269B590(param_1,param_2,*(unsigned int *)(*param_2 + 0xc) & *(unsigned int *)(iVar2 + 4)),
     iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = (iVar1 + 1) * 0xc + iVar2;
  }
  return iVar2;
}

