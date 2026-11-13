extern int fn_827F3A60();
extern int fn_827F3C58();
extern int fn_827F4100();
extern int fn_827F4248();
extern int fn_827F56B0();
extern unsigned int lbl_8201DD78;
extern unsigned int lbl_82196288;


unsigned int *
fn_827F59C0(double param_1,double param_2,double param_3,unsigned int *param_4,int param_5,
             unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned short in_stack_00000066;
  unsigned int in_stack_0000006c;
  
  fn_827F4248(param_4,param_4 + 0x12,param_8,2,param_4 + 0x38);
  param_4[9] = (float)param_2;
  uVar1 = lbl_82196288;
  param_4[0xe] = in_stack_00000054;
  param_4[10] = (float)(param_2 - param_1);
  param_4[0xf] = in_stack_0000006c;
  param_4[0xb] = (float)param_3;
  *(unsigned short *)(param_4 + 0x11) = in_stack_00000066;
  param_4[0xc] = uVar1;
  param_4[0x10] = in_stack_0000005c;
  *(short *)((int)param_4 + 0x22) = (short)(param_5 / 6);
  *(short *)(param_4 + 8) = (short)param_5 + (short)(param_5 / 6) * -6;
  *param_4 = &lbl_8201DD78;
  param_4[0xd] = 0;
  uVar2 = fn_827F3A60(param_6);
  uVar3 = fn_827F3A60(param_7);
  uVar4 = param_6;
  if (uVar2 <= uVar3) {
    uVar4 = param_7;
  }
  fn_827F4100(param_4 + 0x12,uVar4);
  *(unsigned char *)(param_4 + 0x37) = 0;
  fn_827F3C58(param_4,0,param_6);
  fn_827F3C58(param_4,1,param_7);
  if (param_4[0x10] != 0) {
    fn_827F56B0(param_4);
  }
  return param_4;
}

