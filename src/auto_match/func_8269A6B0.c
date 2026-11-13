extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;


void fn_8269A6B0(int param_1)

{
  unsigned int uVar1;
  
  if ((lbl_82006848 <= ABS(*(float *)(param_1 + 0x3c))) ||
     (lbl_82002AE0 <= ABS(*(float *)(param_1 + 0x40)))) {
    uVar1 = *(unsigned int *)(param_1 + 0x8c) & 0xfffffffd;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x8c) | 2;
  }
  *(unsigned int *)(param_1 + 0x8c) = uVar1;
  return;
}

