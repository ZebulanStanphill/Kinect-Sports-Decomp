extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_821550CC;
extern unsigned int lbl_82162C5C;
extern unsigned int lbl_82162C70;


void fn_82F3BF68(unsigned int *param_1)

{
  unsigned int uVar1;
  
  param_1[1] = &lbl_821550CC;
  *param_1 = &lbl_82162C70;
  param_1[1] = &lbl_82162C5C;
  param_1[0xc] = param_1 + 0xb;
  param_1[0xb] = param_1 + 0xb;
  param_1[10] = 0;
  param_1[0xf] = param_1 + 0xe;
  param_1[0xe] = param_1 + 0xe;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[2] = 1;
  param_1[4] = lbl_8202E618;
  param_1[5] = lbl_8202E61C;
  param_1[6] = lbl_8202E620;
  uVar1 = lbl_8202E624;
  *(unsigned __int64 *)(param_1 + 8) = 0x18;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  param_1[7] = uVar1;
  return;
}

