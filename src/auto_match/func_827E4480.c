extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9E48();
extern unsigned int lbl_8201D5F4;


unsigned int *
fn_827E4480(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int *param_7,unsigned int param_8)

{
  unsigned int *puStack00000014;
  unsigned int *puStack00000044;
  
  param_1[1] = param_3;
  param_1[2] = (int)param_2;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *param_1 = &lbl_8201D5F4;
  param_1[5] = 0;
  param_1[6] = 0;
  puStack00000014 = param_1;
  puStack00000044 = param_7;
  fn_82517978(param_1 + 5,*param_7,param_7[1],0);
  param_1[7] = param_4;
  param_1[8] = param_8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((param_2 & 0xffffffff) != 0) {
    fn_827D9E48(param_2);
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

