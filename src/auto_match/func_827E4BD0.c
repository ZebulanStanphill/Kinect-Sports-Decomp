extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern int fn_8281C4B0();
extern int fn_82F66368();
extern unsigned int lbl_8201D770;


unsigned int *
fn_827E4BD0(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned int param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned int *param_8)

{
  int iVar1;
  unsigned int *puStack00000014;
  unsigned int *puStack0000004c;
  unsigned int in_stack_00000054;
  unsigned char auStack_60 [96];
  
  puStack00000014 = param_1;
  puStack0000004c = param_8;
  fn_82517978(auStack_60,*param_8,param_8[1],0);
  fn_827E4480(param_1,0,param_3,0xffffffffffffffff,param_6,param_7,auStack_60,in_stack_00000054);
  param_1[0xc] = param_2;
  param_1[0x4e] = param_5;
  *param_1 = &lbl_8201D770;
  iVar1 = fn_82F66368(param_1 + 0xd,0x104,param_4,0xffffffffffffffff);
  if (iVar1 == 0x50) {
    fn_8281C4B0(0xffffffff8201d6e0,param_4,param_1 + 0xd);
  }
  if (param_8[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

