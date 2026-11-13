extern unsigned int lbl_83265A28;


void fn_8232BC70(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar3 * 0x19660d + 0x3c6ef35f;
  uVar2 = -lbl_83265A28;
  uVar1 = ~lbl_83265A28;
  *(unsigned int *)(param_1 + -0x40) = 1;
  *(unsigned int *)(param_1 + -0x48) = ((unsigned int)LZCOUNT((-uVar3 & ~uVar3) >> 0x1f) >> 5 ^ 1) + 2;
  *(unsigned int *)(param_1 + -0x44) = (unsigned int)LZCOUNT((uVar2 & uVar1) >> 0x1f) >> 5;
  return;
}

