extern float lbl_82195590;
extern unsigned int lbl_82195598;
extern float lbl_821955A0;
extern unsigned int lbl_831E4E38;


unsigned __int64 fn_822CEEC8(int param_1)

{
  double dVar1;
  
  dVar1 = (double)(*(float *)(*(int *)((*(int **)(param_1 + 0x1c))[4] * 4 +
                                      **(int **)(param_1 + 0x1c)) + 0x14) * lbl_82195590);
  if ((float)((dVar1 - (double)(__int64)(dVar1 - lbl_82195598)) * lbl_821955A0) < lbl_831E4E38) {
    return 1;
  }
  return 0;
}

