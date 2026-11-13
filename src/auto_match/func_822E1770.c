extern int fn_822CF300();
extern int fn_822E13D0();
extern float lbl_821917B0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_822E1770(int param_1)

{
  fn_822E13D0();
  *(unsigned int *)(param_1 + 0x48) = 0;
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x24) == 0) {
    fn_822CF300(*(int *)(param_1 + 0x14),0);
  }
  *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x108);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x54) == 0xb) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(float *)(*(int *)(param_1 + 0x14) + 0x108) =
         ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821917B0 +
         lbl_821917B0;
  }
  return;
}

