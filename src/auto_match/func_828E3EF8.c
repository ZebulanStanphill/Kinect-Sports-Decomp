extern int fn_828A4538();


unsigned int * fn_828E3EF8(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = fn_828A4538(param_2 + 3,param_3);
  iVar1 = param_2[4];
  *param_1 = 0;
  if (iVar2 == iVar1) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = *(unsigned int *)(iVar2 + 0x18);
  }
  *param_1 = uVar3;
  return param_1;
}

