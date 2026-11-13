extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8256DE08();
extern int fn_827E2818();
extern unsigned int lbl_8201D0B8;


unsigned int *
fn_827E22D0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned char param_5,unsigned char param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puStack00000014;
  unsigned int *in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned char auStack_70 [112];
  
  puStack00000014 = param_1;
  fn_82517978(auStack_70,*in_stack_00000054,in_stack_00000054[1],0);
  fn_827E2818(param_1,param_7,param_8,auStack_70);
  param_1[5] = param_3;
  param_1[6] = param_4;
  *param_1 = &lbl_8201D0B8;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_8256DE08(param_1 + 7,0);
  param_1[10] = param_2;
  *(unsigned char *)(param_1 + 0xe) = param_5;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = in_stack_0000005c;
  param_1[0xd] = 0;
  *(unsigned char *)((int)param_1 + 0x39) = param_6;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3e4;
  *(unsigned char *)(param_1 + 0x12) = 0;
  *(unsigned char *)((int)param_1 + 0x49) = 0;
  if (in_stack_00000054[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

