extern int fn_82A3FE48();
extern int fn_82A5F3B8();
extern void *memset(void *, int, unsigned int);
extern char lbl_8315E618[], lbl_83219D50[];
extern unsigned int lbl_82089F20;
extern unsigned int lbl_82089F34;


unsigned int * fn_82A4EAC8(unsigned int *param_1)

{
  fn_82A5F3B8(param_1,lbl_8315E618);
  param_1[0x2e] = 0;
  *param_1 = &lbl_82089F34;
  param_1[8] = &lbl_82089F20;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  fn_82A3FE48(lbl_83219D50);
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x13,0,0x24);
  memset(param_1 + 9,0,0x28);
  memset(param_1 + 0x1c,0,0x48);
  return param_1;
}

