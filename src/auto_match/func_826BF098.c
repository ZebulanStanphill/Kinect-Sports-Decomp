extern int fn_826AA6A8();


int fn_826BF098(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_826AA6A8(param_1,param_2,*(unsigned int *)(*param_2 + 0xc) & *(unsigned int *)(iVar2 + 4)),
     iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 0x20 + iVar2 + 0x10;
  }
  return iVar2;
}

