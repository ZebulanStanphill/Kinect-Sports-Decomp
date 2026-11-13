extern int fn_8307E218();


unsigned __int64 fn_83049EC0(int param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  
  iVar2 = fn_8307E218(*(unsigned int *)(param_1 + 0x28),0,param_2);
  *param_3 = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0x2e;
  }
  else {
    uVar3 = *(int *)(param_1 + 0x5c) + iVar2;
    *(unsigned int *)(param_1 + 0x5c) = uVar3;
    if (uVar3 >= *(unsigned int *)(param_1 + 0x78)) {
      *(unsigned int *)(param_1 + 0x5c) = uVar3 - *(unsigned int *)(param_1 + 0x78);
    }
    uVar1 = 0x2d;
  }
  return uVar1;
}

