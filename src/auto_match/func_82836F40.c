extern float fRam8320a7f4;
extern float fRam8320a7f8;
extern float fRam8320a7fc;
extern unsigned int lbl_82005328;
extern unsigned int lbl_8320A7F0;
extern unsigned int lbl_8320A888;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82836F40(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  lbl_8320A888 = (((param_4 & 0xff) << 8 | param_1 & 0xff) << 8 | param_2 & 0xff) << 8 |
                 param_3 & 0xff;
  fRam8320a7f4 = (float)(__int64)(int)(param_2 & 0xff) * lbl_82005328;
  lbl_8320A7F0 = (float)(__int64)(int)(param_1 & 0xff) * lbl_82005328;
  fRam8320a7f8 = (float)(__int64)(int)(param_3 & 0xff) * lbl_82005328;
  fRam8320a7fc = (float)(param_4 & 0xff) * lbl_82005328;
  return;
}

