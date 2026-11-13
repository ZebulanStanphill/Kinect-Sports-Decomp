typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82559FF0();
extern unsigned int lbl_82191578;
extern unsigned int lbl_821956D4;
extern unsigned int lbl_8219587C;
extern unsigned int ltcg_pool_0_0f;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_824B0460(int param_1)

{
  float fVar1;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float afStack_20;
  
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0x14) != 0) {
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    afStack_20 = ltcg_pool_0_0f;
    fn_82559FF0(&afStack_20);
    fVar1 = *(float *)(*(int *)(param_1 + 0x3c) + 0x74);
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x34) == 0) {
      if (afStack_20 * lbl_821956D4 < lbl_8219587C - fVar1) {
        return 1;
      }
    }
    else if (fVar1 + lbl_82191578 < afStack_20 * lbl_821956D4) {
      return 1;
    }
  }
  return 0;
}

