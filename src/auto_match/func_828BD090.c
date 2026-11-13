extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828BD090(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = fn_828E9DA8(param_3);
  iVar2 = fn_828E9D90(param_3);
  if (iVar1 - iVar2 < 0x20) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_828E9FF8(param_3,0x20);
  }
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 4) = 5;
    *(unsigned int *)(param_4 + 8) = uVar3;
  }
  return;
}

