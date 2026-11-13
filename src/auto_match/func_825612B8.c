extern unsigned int lbl_82192680;
extern unsigned int lbl_8219567C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int lbl_8326B478;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825612B8(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  iVar4 = (int)param_1;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = lbl_8326B430;
  uVar3 = lbl_8326B434;
  uVar5 = lbl_821CA460;
  uVar2 = lbl_82192680;
  param_3[3] = lbl_8326B434;
  uVar1 = ltcg_pool_0_0f;
  *param_4 = uVar2;
  param_3[4] = uVar5;
  param_3[5] = uVar1;
  if (param_2 != 2) {
    if (param_2 < 3) {
      return;
    }
    uVar5 = param_3[2];
    uVar1 = param_3[3];
    param_3[2] = uVar5 >> 1;
    param_3[3] = uVar1 >> 1;
    if (param_1 !=
        ((__int64)(iVar4 >> 1) + (unsigned __int64)(iVar4 < 0 && (param_1 & 1) != 0) & 0x7fffffff) << 1) {
      *param_3 = uVar5 >> 1;
    }
    if (iVar4 < 2) {
      return;
    }
    param_3[1] = uVar1 >> 1;
    return;
  }
  if (lbl_8326B478 != 0) {
    uVar5 = uVar3 >> 1;
    uVar5 = (uVar5 - (uVar5 - 1 & 0x1f)) + 0x1f;
    if (iVar4 == 0) {
      param_3[3] = uVar5;
    }
    else {
      param_3[1] = uVar5;
      param_3[3] = uVar3 - uVar5;
    }
    *param_4 = lbl_8219567C;
    return;
  }
  uVar5 = param_3[2] >> 1;
  uVar5 = (uVar5 - (uVar5 - 1 & 0x1f)) + 0x1f;
  if (iVar4 != 0) {
    *param_3 = uVar5;
    param_3[2] = param_3[2] - uVar5;
    return;
  }
  param_3[2] = uVar5;
  return;
}

