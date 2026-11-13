extern unsigned int *auStack_30;
extern int fn_8227D7E8();
extern int fn_8227D908();
extern int fn_8251F720();
extern int fn_82520158();
extern int fn_8265C9E0();
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_823DB178(unsigned int *param_1,unsigned int param_2)

{
  float fVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  double dVar5;
  double dVar6;
  unsigned char auStack_30 [24];
  
  *param_1 = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  fVar1 = ltcg_pool_0_0f;
  dVar5 = (double)ltcg_pool_0_0f;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x37] = fVar1;
  param_1[0x10] = fVar1;
  param_1[0x35] = 0;
  param_1[0x11] = fVar1;
  param_1[0x38] = 0;
  param_1[0x12] = fVar1;
  param_1[0xc] = 0;
  iVar3 = fn_8265C9E0(0x50);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8227D7E8();
  }
  param_1[0x15] = (int)uVar2;
  fn_8227D908(uVar2,1);
  param_1[0x24] = (float)dVar5;
  param_1[0x25] = (float)dVar5;
  param_1[0x20] = 0;
  param_1[0x26] = (float)dVar5;
  iVar3 = fn_8265C9E0(0x50);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_8227D7E8();
  }
  param_1[0x29] = (int)uVar2;
  fn_8227D908(uVar2,0);
  fn_82520158(0xffffffff821b677c,auStack_30,0);
  uVar4 = fn_8251F720(auStack_30,0);
  param_1[0x2c] = uVar4;
  fVar1 = lbl_821CA460;
  dVar6 = (double)lbl_82191FB0;
  dVar5 = (double)lbl_821CA460;
  param_1[0x2d] = lbl_82191FB0;
  param_1[0x2e] = fVar1;
  fn_82520158(0xffffffff821b67a4,auStack_30,0);
  uVar4 = fn_8251F720(auStack_30,0);
  param_1[0x2f] = uVar4;
  param_1[0x30] = (float)dVar5;
  param_1[0x31] = (float)dVar6;
  fn_82520158(0xffffffff821b67cc,auStack_30,0);
  uVar4 = fn_8251F720(auStack_30,0);
  param_1[0x32] = uVar4;
  param_1[0x33] = (float)dVar5;
  param_1[0x34] = (float)dVar6;
  return param_1;
}

