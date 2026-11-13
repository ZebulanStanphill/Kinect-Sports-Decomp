extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201D800;


unsigned int *
fn_827E5360(double param_1,double param_2,double param_3,unsigned int *param_4,unsigned char param_5,
             unsigned char param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned char in_stack_00000057;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int *in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned char auStack_60 [96];
  
  fn_82517978(auStack_60,*in_stack_0000006c,in_stack_0000006c[1],0);
  fn_827E4480(param_4,0,0,0xffffffffffffffff,in_stack_0000005c,in_stack_00000064,auStack_60,
                in_stack_00000074);
  param_4[0xf] = (float)param_1;
  param_4[0x10] = (float)param_2;
  *(unsigned char *)(param_4 + 0xc) = param_5;
  param_4[0x11] = (float)param_3;
  *(unsigned char *)((int)param_4 + 0x31) = param_6;
  *param_4 = &lbl_8201D800;
  param_4[0xd] = param_7;
  param_4[0xe] = param_8;
  *(unsigned char *)(param_4 + 0x12) = in_stack_00000057;
  if (in_stack_0000006c[1] != 0) {
    fn_822315A0();
  }
  return param_4;
}

