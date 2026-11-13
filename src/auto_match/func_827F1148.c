extern int fn_827F4100();
extern int fn_827F4248();
extern unsigned int lbl_8201DD0C;


unsigned int * fn_827F1148(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_827F4248(param_1,param_1 + 0x3d,param_3,0,0);
  *(unsigned short *)(param_1 + 0x38) = 0;
  *param_1 = &lbl_8201DD0C;
  *(unsigned short *)((int)param_1 + 0xe2) = 0;
  *(unsigned short *)(param_1 + 0x39) = 0;
  *(unsigned short *)((int)param_1 + 0xe6) = 0;
  *(unsigned short *)(param_1 + 0x3a) = 0;
  *(unsigned short *)((int)param_1 + 0xea) = 0;
  *(unsigned short *)(param_1 + 0x3b) = 0;
  *(unsigned short *)((int)param_1 + 0xee) = 0;
  param_1[0x3c] = 0xffff;
  fn_827F4100(param_1 + 0x3d,param_2);
  *(unsigned char *)(param_1 + 0x62) = 0;
  return param_1;
}

