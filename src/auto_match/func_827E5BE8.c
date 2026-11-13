extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201D8E0;


unsigned int *
fn_827E5BE8(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  unsigned int *puStack0000004c;
  unsigned int in_stack_00000054;
  unsigned char auStack_60 [96];
  
  puStack0000004c = param_8;
  fn_82517978(auStack_60,*param_8,param_8[1],0);
  fn_827E4480(param_1,param_3,param_4,param_5,param_6,param_7,auStack_60,in_stack_00000054);
  param_1[0xc] = param_2;
  *param_1 = &lbl_8201D8E0;
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

