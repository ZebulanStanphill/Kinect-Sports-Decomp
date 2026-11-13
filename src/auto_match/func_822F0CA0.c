extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82365BD8();
extern unsigned int lbl_821ADF3C;
extern unsigned int lbl_821AE578;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_822F0CA0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,int param_6,unsigned int param_7)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char auStack_50 [16];
  
  iVar2 = fn_82365BD8(auStack_50,param_6);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[1] = 5;
  *param_1 = &lbl_821ADF3C;
  param_1[5] = param_5;
  fn_82365BD8(param_1 + 6,iVar2);
  param_1[8] = param_7;
  if (*(int *)(iVar2 + 4) != 0) {
    fn_822315A0();
  }
  param_1[0xc] = 0;
  uVar1 = ltcg_pool_0_0f;
  *param_1 = &lbl_821AE578;
  param_1[9] = uVar1;
  param_1[0xd] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = uVar1;
  if (*(int *)(param_6 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

