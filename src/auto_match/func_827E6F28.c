extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201DA10;


unsigned int *
fn_827E6F28(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned char auStack_70 [112];
  
  fn_82517978(auStack_70,*in_stack_0000005c,in_stack_0000005c[1],0);
  fn_827E4480(param_1,param_2,param_6,param_7,param_8,in_stack_00000054,auStack_70,
                in_stack_00000064);
  param_1[0xc] = param_3;
  param_1[0xd] = param_4;
  param_1[0xe] = 0;
  *param_1 = &lbl_8201DA10;
  param_1[0xf] = 0;
  param_1[0x10] = param_5;
  if (in_stack_0000005c[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

