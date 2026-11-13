extern int fn_827F3768();
extern int fn_827F3C58();
extern int fn_827F41B8();
extern int fn_827F56B0();
extern unsigned int lbl_8201DD78;
extern unsigned int lbl_82196288;


unsigned int *
fn_827F5C20(double param_1, double param_2, double param_3, unsigned int *param_4, int param_5, unsigned __int64 param_6, unsigned __int64 param_7, unsigned __int64 param_8, unsigned __int64 param_9, unsigned int in_stack_0000005c, unsigned int in_stack_00000064, unsigned short in_stack_0000006e, unsigned int in_stack_00000074, unsigned int in_stack_0000007c)

{
  unsigned int uVar1;





  
  fn_827F41B8(param_4,param_8,param_9,2,param_4 + 0x38);
  uVar1 = lbl_82196288;
  param_4[0xd] = in_stack_0000007c;
  param_4[9] = (float)param_2;
  param_4[0xe] = in_stack_0000005c;
  param_4[10] = (float)(param_2 - param_1);
  param_4[0xf] = in_stack_00000074;
  param_4[0xb] = (float)param_3;
  param_4[0x10] = in_stack_00000064;
  param_4[0xc] = uVar1;
  *(unsigned short *)(param_4 + 0x11) = in_stack_0000006e;
  *(short *)((int)param_4 + 0x22) = (short)(param_5 / 6);
  *(short *)(param_4 + 8) = (short)param_5 + (short)(param_5 / 6) * -6;
  *param_4 = &lbl_8201DD78;
  fn_827F3768(param_4 + 0x12);
  *(unsigned char *)(param_4 + 0x37) = 0;
  fn_827F3C58(param_4,0,param_6);
  fn_827F3C58(param_4,1,param_7);
  if (param_4[0x10] != 0) {
    fn_827F56B0(param_4);
  }
  return param_4;
}

