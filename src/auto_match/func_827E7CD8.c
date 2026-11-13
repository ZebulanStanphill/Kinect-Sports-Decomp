extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827E4480();
extern unsigned int lbl_8201DB60;


unsigned int *
fn_827E7CD8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
             unsigned __int64 param_5)

{
  unsigned int *puStack0000002c;
  unsigned char auStack_50 [80];
  
  puStack0000002c = param_4;
  fn_82517978(auStack_50,*param_4,param_4[1],0);
  fn_827E4480(param_1,0,0,0xffffffffffffffff,param_2,param_3,auStack_50,param_5);
  param_1[0xc] = 0;
  *param_1 = &lbl_8201DB60;
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

