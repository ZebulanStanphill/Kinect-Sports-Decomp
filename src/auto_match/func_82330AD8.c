extern int fn_8227D7E8();
extern int fn_8227D908();
extern int fn_8227D9B0();
extern int fn_82528FA8();
extern int memcpy();
extern unsigned int lbl_821B0970;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82330AD8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,int param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  double dVar4;
  
  *param_1 = &lbl_821B0970;
  uVar1 = fn_82528FA8((double)lbl_821CA460,param_4,param_2,0xffffffff821962c0,
                            0xffffffff821ca1a0,param_5,0);
  param_1[4] = uVar1;
  puVar3 = param_1 + 8;
  fn_8227D7E8(puVar3);
  param_1[0x1d] = (int)param_5;
  dVar4 = (double)ltcg_pool_0_0f;
  param_1[0x1c] = ltcg_pool_0_0f;
  memcpy(param_1 + 0x1e,param_3,0x18);
  param_1[0x25] = (float)dVar4;
  param_1[0x24] = 0;
  uVar2 = 0xc;
  if (param_6 != 0) {
    uVar2 = 0xb;
  }
  fn_8227D908(puVar3,uVar2);
  fn_8227D9B0(puVar3);
  return param_1;
}

