extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9BC8();
extern int fn_827E2818();
extern unsigned int lbl_8201CE20;


unsigned int *
fn_827E13A0(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int *param_6)

{
  unsigned int *puStack00000014;
  unsigned int *puStack0000001c;
  unsigned int *puStack0000003c;
  unsigned char auStack_50 [80];
  
  puStack00000014 = param_1;
  puStack0000001c = param_2;
  puStack0000003c = param_6;
  fn_82517978(auStack_50,*param_6,param_6[1],0);
  fn_827E2818(param_1,param_4,param_5,auStack_50);
  *param_1 = &lbl_8201CE20;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_82517978(param_1 + 5,*param_2,param_2[1],0);
  param_1[8] = param_3;
  param_1[7] = 0;
  fn_82517978(auStack_50,*param_6,param_6[1],0);
  fn_827D9BC8(*param_2,auStack_50);
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  return param_1;
}

