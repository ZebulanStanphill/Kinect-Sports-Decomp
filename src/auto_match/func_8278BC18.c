extern int fn_8267BE38();


void fn_8278BC18(int param_1)

{
  *(unsigned short *)(param_1 + 0xc) = 0;
  *(unsigned short *)(param_1 + 0xe) = 0;
  *(unsigned short *)(param_1 + 0x10) = 0;
  *(unsigned short *)(param_1 + 0x12) = 0;
  *(unsigned short *)(param_1 + 0x14) = 0;
  *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) & 0x7940 | 1;
  fn_8267BE38(*(unsigned int *)(param_1 + 8));
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_1 + 0x16) & 0xffbf;
  return;
}

