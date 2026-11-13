extern int fn_8273D5F0();


int fn_8273E508(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_8273D5F0(param_1,param_2,*(unsigned int *)(*param_2 + 0xc) & *(unsigned int *)(iVar2 + 4)),
     iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 0x10 + iVar2 + 0xc;
  }
  return iVar2;
}

