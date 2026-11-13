extern unsigned int lbl_82010E78;


void fn_827252E0(int param_1)

{
  *(unsigned short *)(param_1 + 0x50) = *(unsigned short *)(param_1 + 0x50) | 0x800;
  *(unsigned int *)(param_1 + 0x30) = 0xff000000;
  *(unsigned int *)(param_1 + 0x2c) = lbl_82010E78;
  *(unsigned short *)(param_1 + 0x50) = *(unsigned short *)(param_1 + 0x50) | 0x528;
  return;
}

