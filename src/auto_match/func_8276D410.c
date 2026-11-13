extern int fn_8276ACC0();


int fn_8276D410(int *param_1,unsigned short *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) ||
     (iVar1 = fn_8276ACC0(param_1,param_2,*(unsigned int *)(iVar2 + 4) & (unsigned int)*param_2), iVar1 < 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 8 + iVar2 + 0xc;
  }
  return iVar2;
}

