extern int fn_82BBD1C0();


void fn_82BBD6D0(unsigned int *param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  if (param_3 == 1) {
    iVar2 = fn_82BBD1C0(param_2);
    if (iVar2 < 3) {
      uVar1 = param_1[iVar2 + -1];
      param_1[iVar2 + -1] = param_1[3];
      param_1[3] = uVar1;
    }
    else {
      uVar1 = param_1[2];
      param_1[2] = *param_1;
      *param_1 = uVar1;
    }
  }
  return;
}

