extern unsigned int lbl_8217C608;
extern unsigned int lbl_831BC80C;
extern unsigned int lbl_831BC810;
extern unsigned int lbl_831BC814;


void fn_83027128(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_8217C608;
  param_1[0x13] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)((int)param_1 + 0x31) = 1;
  param_1[0xd] = 0;
  *(unsigned char *)((int)param_1 + 0x33) = 0;
  param_1[0xe] = 0;
  param_1[9] = lbl_831BC80C;
  param_1[10] = lbl_831BC810;
  uVar1 = lbl_831BC814;
  *(unsigned char *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(unsigned char *)((int)param_1 + 0x32) = 1;
  param_1[0xb] = uVar1;
  return;
}

