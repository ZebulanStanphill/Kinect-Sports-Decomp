extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D5070();
extern int fn_827E4480();
extern unsigned int lbl_8201D950;


unsigned int *
fn_827E63B0(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned __int64 param_8)

{
  int iVar1;
  unsigned int *puStack00000014;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int *in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned char auStack_70 [112];
  
  puStack00000014 = param_1;
  fn_82517978(auStack_70,*in_stack_0000006c,in_stack_0000006c[1],0);
  fn_827E4480(param_1,param_2,param_8,in_stack_00000054,in_stack_0000005c,in_stack_00000064,
                auStack_70,in_stack_00000074);
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  *param_1 = &lbl_8201D950;
  param_1[0xf] = 0;
  param_1[0x10] = param_5;
  param_1[0x11] = param_6;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_7;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  iVar1 = fn_827D5070(*in_stack_0000006c);
  if (iVar1 == 0) {
    param_1[0x18] = 0;
  }
  else {
    param_1[0x18] = 1;
  }
  if (in_stack_0000006c[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

