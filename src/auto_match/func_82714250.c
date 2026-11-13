extern char lbl_8200F2D4[];
extern unsigned int *auStack_20;
extern int fn_826BF638();
extern int fn_827141C0();
extern unsigned int lbl_8200F2EC;
extern unsigned int lbl_8200F2F0;
extern unsigned int lbl_8200F3D8;


unsigned int * fn_82714250(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned char auStack_20 [8];
  
  fn_827141C0();
  *param_1 = &lbl_8200F2F0;
  param_1[4] = &lbl_8200F3D8;
  param_1[0xd] = &lbl_8200F2EC;
  auStack_20[0] = 1;
  fn_826BF638(param_1 + 0xd,param_1,param_2,lbl_8200F2D4,auStack_20);
  return param_1;
}

