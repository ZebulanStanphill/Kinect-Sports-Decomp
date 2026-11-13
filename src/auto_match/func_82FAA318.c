extern int fn_82FAC5E8();
extern unsigned int lbl_8216CC50;


unsigned int * fn_82FAA318(unsigned int *param_1,unsigned int param_2,int param_3)

{
  param_1[3] = param_2;
  param_1[1] = 0;
  *param_1 = &lbl_8216CC50;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 4) = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(unsigned short *)(param_1 + 0xc) = 0;
  *(unsigned short *)((int)param_1 + 0x32) = *(unsigned short *)((int)param_1 + 0x32) & 0x7fff;
  param_1[0xd] = 0;
  param_1[0x10] = param_3;
  if (param_3 != 0) {
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(unsigned char *)(param_1 + 0x13) = 0;
  if (param_1[0x10] != 0) {
    fn_82FAC5E8(param_1[0x10],param_1);
  }
  return param_1;
}

