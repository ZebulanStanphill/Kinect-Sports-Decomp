extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_823018E8();
extern unsigned int lbl_821AEEF4;


unsigned int *
fn_82304538(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];
  
  fn_82230110(auStack_50,"passlocomotion");
  fn_82230110(auStack_70,"pass_locomotion");
  fn_823018E8(param_1,auStack_70,param_2,auStack_50,param_3);
  fn_82230300(auStack_70,1,0);
  fn_82230300(auStack_50,1,0);
  param_1[0x78] = param_4;
  param_1[0x79] = 4;
  *param_1 = &lbl_821AEEF4;
  for (puVar1 = param_1 + 0x7a; puVar1 != param_1 + 0x7c; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return param_1;
}

