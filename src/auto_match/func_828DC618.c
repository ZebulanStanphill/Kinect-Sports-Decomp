extern int fn_82230218();
extern int fn_828B6158();
extern int fn_828BDDA0();
extern unsigned int lbl_82025D50;
extern unsigned int lbl_82025D58;


unsigned int *
fn_828DC618(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  
  fn_828BDDA0();
  param_1[0x20] = param_5;
  param_1[0x21] = param_6;
  param_1[0x22] = param_7;
  param_1[0x23] = param_8;
  param_1[0x14] = &lbl_82025D50;
  *param_1 = &lbl_82025D58;
  param_1[0x24] = in_stack_00000054;
  param_1[0x25] = param_3;
  *(unsigned __int64 *)(param_1 + 0x26) = param_2;
  param_1[0x28] = param_4;
  param_1[0x2e] = 0xf;
  param_1[0x2d] = 0;
  *(unsigned char *)(param_1 + 0x29) = 0;
  fn_82230218(param_1 + 0x29,in_stack_0000005c,0,0xffffffffffffffff);
  fn_828B6158(param_1 + 0x30,param_8 & 0xffff,in_stack_00000064);
  return param_1;
}

