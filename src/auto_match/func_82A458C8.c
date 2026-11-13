unsigned int fn_82A458C8(int param_1,int param_2)

{
  unsigned int uVar1;
  
  if ((*(unsigned int *)(param_1 + 4) & 0x20000) == 0) {
    uVar1 = **(unsigned int **)(param_2 * 0x60 + *(int *)(param_1 + 8) + 0x40);
  }
  else {
    uVar1 = *(unsigned int *)(param_2 * 0x60 + *(int *)(param_1 + 8));
  }
  return uVar1 >> 0xc & 0xff;
}

