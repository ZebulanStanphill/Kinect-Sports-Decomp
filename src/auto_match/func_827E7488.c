extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201DA80;


unsigned int *
fn_827E7488(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  unsigned int *puStack00000044;
  unsigned char auStack_60 [96];
  
  puStack00000044 = param_7;
  fn_82517978(auStack_60,*param_7,param_7[1],0);
  fn_827E4480(param_1,param_2,param_3,param_4,param_5,param_6,auStack_60,param_8);
  *param_1 = &lbl_8201DA80;
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

