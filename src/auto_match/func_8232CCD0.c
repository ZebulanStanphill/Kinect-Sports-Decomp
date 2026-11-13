extern int fn_8232C528();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8232CCD0(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 8) + 0x27c) == 0) {
    fn_8232C528(*(unsigned int *)(param_1 + 0xc),2);
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(int *)(param_1 + 0x38) =
         (int)((float)(__int64)((*(int *)(param_1 + 0x14) + 1) - *(int *)(param_1 + 0x10)) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
              (float)(__int64)*(int *)(param_1 + 0x10));
  }
  return;
}

