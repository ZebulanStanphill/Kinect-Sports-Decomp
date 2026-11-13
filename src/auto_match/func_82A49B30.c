extern unsigned int lbl_8315D960;


unsigned int fn_82A49B30(unsigned int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (8 < param_1) {
    return 0;
  }
  return *(unsigned int *)(&lbl_8315D960 + param_1 * 4);
}

