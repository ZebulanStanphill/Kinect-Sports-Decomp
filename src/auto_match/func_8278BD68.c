extern int fn_8278BCF0();


int fn_8278BD68(int param_1,int param_2)

{
  *(unsigned short *)(param_1 + 0xc) = *(unsigned short *)(param_2 + 0xc);
  *(unsigned short *)(param_1 + 0xe) = *(unsigned short *)(param_2 + 0xe);
  *(unsigned short *)(param_1 + 0x10) = *(unsigned short *)(param_2 + 0x10);
  *(unsigned short *)(param_1 + 0x12) = *(unsigned short *)(param_2 + 0x12);
  *(unsigned short *)(param_1 + 0x14) = *(unsigned short *)(param_2 + 0x14);
  *(unsigned short *)(param_1 + 0x16) = *(unsigned short *)(param_2 + 0x16);
  fn_8278BCF0(param_1,*(unsigned int *)(param_2 + 8));
  return param_1;
}

