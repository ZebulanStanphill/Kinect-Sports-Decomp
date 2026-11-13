typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int ltcg_pool_0_0f;


bool fn_822D1320(double param_1,int param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  float fVar1;
  
  if (param_5 != 0) {
    if ((double)ltcg_pool_0_0f <= param_1) {
      return false;
    }
    return true;
  }
  if ((*(int *)(*(int *)(param_2 + 0x14) + 0x2c) == *(int *)(param_3 + 0x2c)) ||
     (*(int *)(*(int *)(param_2 + 0x14) + 0x310) != 0)) {
    if (param_1 < (double)ltcg_pool_0_0f) {
      return false;
    }
  }
  else {
    if (param_1 == (double)ltcg_pool_0_0f) {
      return *(int *)(param_3 + 0x2a4) != 0;
    }
    fVar1 = lbl_8218E8E8;
    if (param_1 < (double)ltcg_pool_0_0f) {
      fVar1 = lbl_821925C0;
    }
    if ((double)fVar1 < param_1) {
      return false;
    }
  }
  return true;
}

