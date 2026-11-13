extern int fn_8227FDA0();
extern int fn_822C5B18();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8A08;
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_82282330;
extern unsigned int lbl_82282340;
extern unsigned int lbl_82282350;


unsigned int *
fn_82281308(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned __int64 param_7,unsigned int param_8)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  param_1[2] = param_4;
  *param_1 = &lbl_821A8A08;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = &lbl_821A8C90;
  param_1[0x10] = param_3;
  fn_822C5B18(param_1 + 0x12,param_7);
  param_1[0x18] = param_8;
  param_1[0x19] = 0;
  if ((param_2 & 0xffffffff) != 0) {
    uVar1 = fn_8265C9E0(0xa0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_8227FDA0(uVar1,param_2);
    }
    param_1[4] = uVar2;
  }
  param_1[0xc] = param_1;
  param_1[0xd] = &lbl_82282340;
  param_1[0xe] = &lbl_82282350;
  param_1[0xf] = &lbl_82282330;
  fn_82359C18(param_7);
  return param_1;
}

