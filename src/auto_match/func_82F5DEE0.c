extern int fn_82F68CC0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82005748;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82028800;
extern unsigned int lbl_8207A328;
extern unsigned int lbl_82167C94;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F5DEE0(unsigned int *param_1,unsigned __int64 param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  float fVar4;
  unsigned int uVar5;
  float fVar6;
  unsigned int uVar7;
  
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 2;
  param_1[4] = 2;
  fn_82F68CC0(param_1 + 5,param_2,0x2c);
  fn_82F68CC0(param_1 + 0x10,param_2,0x2c);
  fVar6 = lbl_821AAD20;
  fVar1 = lbl_82028800;
  fVar4 = lbl_8200BF40;
  fVar2 = lbl_82028800;
  if (lbl_8200BF40 < (float)param_1[7]) {
    fVar2 = lbl_821AAD20;
  }
  param_1[0x12] = fVar2;
  fVar2 = fVar1;
  if (fVar4 < (float)param_1[8]) {
    fVar2 = fVar6;
  }
  param_1[0x13] = fVar2;
  if (fVar4 < (float)param_1[9]) {
    fVar1 = fVar6;
  }
  param_1[0x14] = fVar1;
  uVar7 = lbl_820145BC;
  if (fVar6 < (float)param_1[0xb]) {
    uVar7 = lbl_82167C94;
  }
  param_1[0x16] = uVar7;
  uVar7 = lbl_8207A328;
  if (lbl_82005748 < (float)param_1[6]) {
    uVar7 = lbl_82002AE0;
  }
  param_1[0x11] = uVar7;
  if ((param_1[10] == 0) || (uVar7 = 0, param_1[0x15] == 1)) {
    uVar7 = 3;
  }
  param_1[0x15] = uVar7;
  uVar5 = lbl_82186E74;
  uVar7 = lbl_82002C2C;
  fVar1 = lbl_82002C28;
  uVar3 = lbl_82002C2C;
  if ((float)param_1[0xc] < lbl_82002C28) {
    uVar3 = lbl_82186E74;
  }
  param_1[0x17] = uVar3;
  uVar3 = uVar7;
  if ((float)param_1[0xd] < fVar1) {
    uVar3 = uVar5;
  }
  param_1[0x18] = uVar3;
  uVar3 = uVar7;
  if ((float)param_1[0xe] < fVar1) {
    uVar3 = uVar5;
  }
  param_1[0x19] = uVar3;
  if ((float)param_1[0xf] < fVar1) {
    uVar7 = uVar5;
  }
  param_1[0x1a] = uVar7;
  param_1[0x10] = 0;
  return;
}

