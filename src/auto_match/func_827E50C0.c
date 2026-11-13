extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201D794;


unsigned int *
fn_827E50C0(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned int *param_5,unsigned int param_6,unsigned __int64 param_7)

{
  unsigned int *puStack00000034;
  unsigned char auStack_50 [80];
  
  puStack00000034 = param_5;
  fn_82517978(auStack_50,*param_5,param_5[1],0);
  fn_827E4480(param_1,0,0,0xffffffffffffffff,param_3,param_4,auStack_50,param_7);
  param_1[0xc] = param_2;
  param_1[0xd] = param_6;
  *param_1 = &lbl_8201D794;
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

