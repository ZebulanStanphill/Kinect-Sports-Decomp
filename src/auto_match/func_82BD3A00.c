extern unsigned int lbl_83171E00;
extern unsigned int lbl_83171E20;


void fn_82BD3A00(int param_1,unsigned int *param_2)

{
  unsigned char **ppuVar1;
  
  param_2[1] = 10;
  if (*(int *)(param_1 + 0x24) == 1) {
    ppuVar1 = &lbl_83171E20;
  }
  else {
    ppuVar1 = &lbl_83171E00;
  }
  *param_2 = ppuVar1;
  return;
}

