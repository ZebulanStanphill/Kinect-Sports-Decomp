extern int fn_8278BCF0();
extern unsigned int lbl_82010C6C;


unsigned int * fn_8278BFA8(unsigned int *param_1,int param_2)

{
  param_1[1] = 1;
  *param_1 = &lbl_82010C6C;
  param_1[2] = 0;
  *(unsigned short *)(param_1 + 3) = *(unsigned short *)(param_2 + 0xc);
  *(unsigned short *)((int)param_1 + 0xe) = *(unsigned short *)(param_2 + 0xe);
  *(unsigned short *)(param_1 + 4) = *(unsigned short *)(param_2 + 0x10);
  *(unsigned short *)((int)param_1 + 0x12) = *(unsigned short *)(param_2 + 0x12);
  *(unsigned short *)(param_1 + 5) = *(unsigned short *)(param_2 + 0x14);
  *(unsigned short *)((int)param_1 + 0x16) = *(unsigned short *)(param_2 + 0x16);
  fn_8278BCF0(param_1,*(unsigned int *)(param_2 + 8));
  return param_1;
}

