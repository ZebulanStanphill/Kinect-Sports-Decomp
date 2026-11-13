extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E2818();
extern unsigned int lbl_8201D160;


unsigned int *
fn_827E2940(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int *puStack0000002c;
  unsigned char auStack_40 [64];
  
  puStack0000002c = param_4;
  fn_82517978(auStack_40,*param_4,param_4[1],0);
  fn_827E2818(param_1,param_2,param_3,auStack_40);
  *param_1 = &lbl_8201D160;
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

