extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9630();
extern int fn_827E2818();
extern unsigned int lbl_8201D200;


unsigned int *
fn_827E2C60(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned __int64 param_8)

{
  unsigned int *puStack00000014;
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned char auStack_70 [112];
  
  puStack00000014 = param_1;
  fn_82517978(auStack_70,*in_stack_0000005c,in_stack_0000005c[1],0);
  fn_827E2818(param_1,param_8,in_stack_00000054,auStack_70);
  *param_1 = &lbl_8201D200;
  fn_827D9630(param_1 + 6,param_2);
  param_1[0xc] = param_4;
  param_1[0xd] = param_7;
  param_1[0xe] = param_5;
  param_1[0xf] = param_6;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_3;
  param_1[0x13] = 0;
  if (in_stack_0000005c[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

