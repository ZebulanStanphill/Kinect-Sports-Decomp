extern int fn_82F4FEB8();
extern int fn_82F51A50();
extern int fn_82F520B0();
extern unsigned int lbl_821955D8;
extern unsigned int lbl_821BF554;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824A2308(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  fn_82F51A50();
  param_1[2] = param_2;
  uVar3 = ltcg_pool_0_0f;
  uVar1 = lbl_821955D8;
  param_1[6] = 0;
  uVar2 = lbl_821CA460;
  *param_1 = &lbl_821BF554;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar4 = fn_82F4FEB8();
  fn_82F520B0(param_1,uVar4,0);
  return param_1;
}

