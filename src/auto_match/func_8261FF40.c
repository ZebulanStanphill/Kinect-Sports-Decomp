extern unsigned int lbl_82193D04;
extern unsigned int lbl_82195738;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B4D8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int fn_8261FF40(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  
  if (param_3 != 0) {
    fVar1 = ltcg_pool_0_0f;
    if (lbl_8326B4D8 == 0) {
      fVar1 = *(float *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x30);
    }
    if (param_4 == 1) {
      if ((lbl_82193D04 < fVar1) && (*(float *)(param_1 + 0x1d0) < lbl_82193D04)) {
        return 1;
      }
    }
    else if (param_4 == 2) {
      if ((fVar1 < lbl_82195738) && (lbl_82195738 < *(float *)(param_1 + 0x1d0))) {
        return 1;
      }
    }
    else {
      if (param_4 == 3) {
        return *(unsigned int *)(param_1 + 0x1d8);
      }
      if (param_4 == 4) {
        if (lbl_8326B4D8 == 0) {
          uVar2 = *(unsigned int *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x14) &
                  *(unsigned int *)(param_2 + 0x10);
        }
        else {
          uVar2 = 0;
        }
        return (unsigned int)(uVar2 != 0);
      }
      if (param_4 == 5) {
        if (lbl_8326B4D8 == 0) {
          uVar2 = *(unsigned int *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x14) &
                  *(unsigned int *)(param_2 + 0x10);
        }
        else {
          uVar2 = 0;
        }
        if (uVar2 == 0) {
          if (lbl_8326B4D8 == 0) {
            uVar2 = *(unsigned int *)(*(int *)(param_3 + 0x10) * 0x28 + param_3 + 0x14) &
                    *(unsigned int *)(param_2 + 0x14);
          }
          else {
            uVar2 = 0;
          }
          if (uVar2 == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

