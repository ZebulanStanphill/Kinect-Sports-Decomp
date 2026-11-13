extern int fn_82E58050();
extern unsigned int lbl_820F8EF8;
extern unsigned int lbl_820F8EFC;
extern unsigned int lbl_820F8F00;
extern unsigned int lbl_820F8F04;
extern unsigned int lbl_82154988;
extern unsigned int lbl_8215498C;
extern unsigned int lbl_82154990;
extern unsigned int lbl_82154994;
extern unsigned int lbl_8215FA48;
extern unsigned int lbl_8216055C;
extern unsigned int lbl_82160570;


unsigned int * fn_82EF3238(unsigned int *param_1)

{
  fn_82E58050();
  *param_1 = &lbl_82160570;
  param_1[1] = &lbl_8216055C;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(unsigned short *)(param_1 + 0x1f) = 0;
  *(unsigned char *)((int)param_1 + 0x7e) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x16] = &lbl_8215FA48;
  param_1[2] = 1;
  param_1[4] = lbl_82154988;
  param_1[5] = lbl_8215498C;
  param_1[6] = lbl_82154990;
  param_1[7] = lbl_82154994;
  param_1[0x12] = lbl_820F8EF8;
  param_1[0x13] = lbl_820F8EFC;
  param_1[0x14] = lbl_820F8F00;
  param_1[0x15] = lbl_820F8F04;
  return param_1;
}

