extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9630();
extern int fn_827E2818();
extern unsigned int lbl_8201D3E0;


unsigned int *
fn_827E34D0(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7)

{
  unsigned int *puStack00000014;
  unsigned int *puStack00000044;
  unsigned char auStack_60 [96];
  
  puStack00000014 = param_1;
  puStack00000044 = param_7;
  fn_82517978(auStack_60,*param_7,param_7[1],0);
  fn_827E2818(param_1,param_5,param_6,auStack_60);
  *param_1 = &lbl_8201D3E0;
  fn_827D9630(param_1 + 6,param_2);
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_4;
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

