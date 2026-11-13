extern int fn_828ABF58();
extern int fn_828E5F40();
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821B47C8;
extern unsigned int lbl_821B557C;
extern unsigned int lbl_821B55AC;


unsigned int * fn_823A9B18(unsigned int *param_1)

{
  param_1[1] = 0;
  *param_1 = &lbl_821B55AC;
  param_1[3] = 0;
  param_1[2] = &lbl_821B47C8;
  fn_828ABF58(param_1 + 4,0,0,8);
  fn_828ABF58(param_1 + 10,0,0,2);
  param_1[0x11] = 0;
  param_1[0x13] = 7;
  param_1[0x12] = 5;
  param_1[0x10] = &lbl_82196C88;
  param_1[0x14] = 3;
  param_1[0x15] = 7;
  param_1[0x16] = 5;
  param_1[0x17] = 7;
  fn_828ABF58(param_1 + 0x18,0,0,8);
  param_1[0x1f] = 0;
  param_1[0x1e] = &lbl_821B557C;
  fn_828ABF58(param_1 + 0x20,0,0,4);
  fn_828E5F40(param_1 + 0x26,3,10);
  fn_828E5F40(param_1 + 0x2a,1,7);
  return param_1;
}

