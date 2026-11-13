extern int fn_8249E7A0();


void fn_8249E728(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar1 = fn_8249E7A0();
  uVar3 = (unsigned int)LZCOUNT(uVar1) >> 5;
  uVar2 = uVar1;
  if (param_3 != 0) {
    uVar2 = uVar3;
    uVar3 = uVar1;
  }
  if (param_2 == 1) {
    *(unsigned int *)(*(int *)(param_1 + 4) + 0x20) = uVar2;
    *(unsigned int *)(*(int *)(param_1 + 8) + 0x20) = uVar3;
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x20) = uVar2;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x20) = uVar3;
    if (param_2 == 4) {
      return;
    }
  }
  *(int *)(param_1 + 0xec) = param_2;
  return;
}

