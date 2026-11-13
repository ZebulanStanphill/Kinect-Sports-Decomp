extern int fn_82BA02A8();
extern int fn_82BE4AB0();
extern int fn_82BE51A8();
extern int fn_82BEA180();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern int fn_82BEEAA0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_820E9050;
extern unsigned int lbl_821AAD20;


unsigned int *
fn_82BE4B68(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned int param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  double dVar4;
  
  fn_82BE51A8(param_1,param_2,2);
  *param_1 = &lbl_820E9050;
  fn_82BA02A8(param_1 + 0x1c);
  fn_82BA02A8(param_1 + 0x1f);
  fn_82BA02A8(param_1 + 0x22);
  fn_82BA02A8(param_1 + 0x25);
  fn_82BA02A8(param_1 + 0x28);
  fn_82BA02A8(param_1 + 0x2b);
  fn_82BA02A8(param_1 + 0x2e);
  param_1[0x33] = param_5;
  param_1[0x31] = param_4;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  uVar3 = lbl_821AAD20;
  param_1[0x35] = 0;
  param_1[0x36] = uVar3;
  param_1[0x37] = 0;
  dVar4 = (double)lbl_8200133C;
  fn_82BEEAA0(dVar4,dVar4,param_1 + 0x38);
  fn_82BEEAA0(dVar4,dVar4,param_1 + 0x3a);
  uVar1 = thunk_FUN_82be5550(0x38);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BEA180(uVar1,0xffffffff820e913c,1);
  }
  param_1[0x1b] = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    param_1[3] = 0x65;
  }
  else {
    iVar2 = fn_82BEA200(uVar1,0xffffffff820e9100);
    if (iVar2 != 0) {
      fn_82BE4AB0(param_1,param_3);
      fn_82BEA230(param_1[0x1b],0xffffffff820e9100);
      if (param_1[0x31] != 0) {
        return param_1;
      }
      uVar3 = 0x1f7;
      goto LAB_82be4cb0;
    }
  }
  uVar3 = 0x69;
LAB_82be4cb0:
  param_1[3] = uVar3;
  return param_1;
}

