extern unsigned int lbl_83265A28;


void fn_8232BBF8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  uVar1 = (__int64)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar2 = (int)uVar1 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar2;
  *(unsigned int *)(param_1 + -0x40) = 1;
  *(unsigned int *)(param_1 + -0x48) = (unsigned int)((-uVar1 & ~uVar1 & 0xffffffff) >> 0x1f != 0);
  *(unsigned int *)(param_1 + -0x44) = (unsigned int)LZCOUNT((-uVar2 & ~uVar2) >> 0x1f) >> 5;
  return;
}

