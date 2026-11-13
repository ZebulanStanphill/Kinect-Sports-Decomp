typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82559FF0();
extern unsigned int lbl_82195890;
extern unsigned int lbl_82195894;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_824AF6D0(int param_1)

{
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float afStack_20 [4];
  
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0x14) != 0) {
    vectorSubtractFloatingPoint(in_vs32,in_vs45);
    fn_82559FF0(afStack_20);
    if (*(int *)(*(int *)(param_1 + 0x3c) + 0x38) == 0) {
      if (afStack_20[0] < lbl_82195894) {
        return 1;
      }
    }
    else if (lbl_82195890 < afStack_20[0]) {
      return 1;
    }
  }
  return 0;
}

