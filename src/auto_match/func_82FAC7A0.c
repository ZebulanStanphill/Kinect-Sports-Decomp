extern int fn_82FA8E48();
extern int fn_82FADFC0();
extern int fn_82FB3448();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CCE8;
extern unsigned int lbl_8216CCF0;
extern unsigned int lbl_8216CD08;


unsigned int * fn_82FAC7A0(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  fn_82FA8E48(param_1,param_3);
  *param_1 = &lbl_8216CD08;
  param_1[1] = &lbl_8216CCF0;
  param_1[4] = &lbl_8216CCE8;
  param_1[6] = &lbl_8216CC7C;
  fn_82FB3448(param_1 + 0xe);
  param_1[0x18] = param_2;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(unsigned short *)(param_1 + 0x1e) = *(unsigned short *)(param_1 + 0x1e) | 0x8000;
  if (param_1[0x18] != 0) {
    fn_82FADFC0();
  }
  return param_1;
}

