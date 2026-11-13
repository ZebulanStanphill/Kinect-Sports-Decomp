extern unsigned int lbl_83264604;


unsigned int fn_8300D348(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  
  uVar1 = 0;
  if (*(unsigned char *)(param_1 + 0x4d) == 0) {
    return uVar1;
  }
  uVar3 = 0;
  iVar2 = param_1;
  do {
    if ((1 << (*(unsigned char *)(iVar2 + 0x3c) & 0x3f) &
        *(unsigned char *)(*(int *)(param_2 + 0x70) + 0x12) & lbl_83264604) != 0) {
      uVar1 = 1 << (uVar3 & 0x3f) | uVar1;
    }
    uVar3 = uVar3 + 1 & 0xff;
    iVar2 = uVar3 + param_1;
  } while (uVar3 < *(unsigned char *)(param_1 + 0x4d));
  return uVar1;
}

