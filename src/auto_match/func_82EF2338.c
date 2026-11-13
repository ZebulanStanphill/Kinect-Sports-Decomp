extern int fn_82E58050();
extern unsigned int lbl_82154A28;
extern unsigned int lbl_82154A2C;
extern unsigned int lbl_82154A30;
extern unsigned int lbl_82154A34;
extern unsigned int lbl_82160508;
extern unsigned int lbl_82160510;
extern unsigned int lbl_82160524;


unsigned int * fn_82EF2338(unsigned int *param_1)

{
  unsigned int uVar1;
  
  fn_82E58050();
  *param_1 = &lbl_82160524;
  param_1[1] = &lbl_82160510;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(unsigned short *)(param_1 + 0x22) = 0;
  *(unsigned char *)((int)param_1 + 0x8a) = 0;
  param_1[0x14] = &lbl_82160508;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_82154A28;
  param_1[5] = lbl_82154A2C;
  param_1[6] = lbl_82154A30;
  uVar1 = lbl_82154A34;
  param_1[0x12] = 0;
  param_1[7] = uVar1;
  return param_1;
}

