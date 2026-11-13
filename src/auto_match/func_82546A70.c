typedef unsigned char bool;
extern int fn_82560690();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82195694;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B478;


unsigned __int64
fn_82546A70(unsigned int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  
  iVar6 = fn_82560690(0);
  uVar2 = ltcg_pool_0_0f;
  uVar5 = lbl_821CA460;
  uVar3 = lbl_82192734;
  if (iVar6 < 2) {
LAB_82546ca4:
    uVar2 = uVar5;
    *param_2 = uVar3;
    *param_3 = uVar2;
LAB_82546cac:
    *param_4 = uVar2;
    *param_5 = uVar3;
    return 1;
  }
  if (param_1 == 0) {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        *param_3 = lbl_821CA460;
LAB_82546bb8:
        *param_4 = uVar5;
        *param_2 = uVar3;
        *param_5 = uVar2;
        return 1;
      }
      if (iVar6 != 4) {
        return 0;
      }
      *param_3 = ltcg_pool_0_0f;
      *param_2 = uVar3;
      goto LAB_82546b98;
    }
    if (lbl_8326B478 != 0) {
      *param_3 = lbl_821CA460;
      uVar2 = lbl_82195694;
      goto LAB_82546bb8;
    }
    *param_3 = ltcg_pool_0_0f;
    uVar4 = uVar5;
  }
  else {
    if (param_1 != 1) {
      if (param_1 < 3) {
        if (iVar6 == 2) {
          return 0;
        }
        uVar4 = lbl_82192734;
        if (iVar6 != 3) {
joined_r0x82546b48:
          uVar5 = uVar2;
          uVar3 = uVar4;
          if (iVar6 != 4) {
            return 0;
          }
          goto LAB_82546ca4;
        }
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        if (iVar6 < 2) {
          return 0;
        }
        if (iVar6 < 4) {
          return 0;
        }
        if (iVar6 != 4) {
          return 0;
        }
      }
      *param_3 = lbl_821CA460;
      uVar3 = lbl_82192734;
      *param_2 = uVar2;
      goto LAB_82546cac;
    }
    if (iVar6 != 2) {
      uVar5 = ltcg_pool_0_0f;
      uVar2 = lbl_821CA460;
      uVar4 = ltcg_pool_0_0f;
      if (iVar6 != 3) goto joined_r0x82546b48;
      goto LAB_82546ca4;
    }
    bVar1 = lbl_8326B478 == 0;
    *param_3 = lbl_821CA460;
    uVar4 = lbl_82195694;
    uVar3 = ltcg_pool_0_0f;
    uVar2 = lbl_82192734;
    if (bVar1) goto LAB_82546bb8;
  }
  uVar2 = lbl_82192734;
  *param_2 = lbl_82192734;
  uVar5 = uVar4;
LAB_82546b98:
  *param_4 = uVar5;
  *param_5 = uVar2;
  return 1;
}

