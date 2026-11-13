extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();


void fn_828D8AC0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar1 = fn_828E9DA8(param_2);
  iVar2 = fn_828E9D90(param_2);
  if (iVar1 - iVar2 >= 4) {
    iVar1 = fn_828E9FF8(param_2,4);
  } else {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x80) = iVar1;
  if (iVar1 == 0) {
    iVar1 = fn_828E9DA8(param_2);
    iVar2 = fn_828E9D90(param_2);
    iVar1 = iVar1 - iVar2 >= 0x10 ? fn_828E9FF8(param_2,0x10) : 0;
    *(int *)(param_1+0x84)=iVar1;
  }
  return;
}

