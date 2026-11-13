extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156B8;
extern unsigned int lbl_832156BC;
extern unsigned int lbl_832156C0;


unsigned __int64 fn_829C7D00(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  if (lbl_83214FFC == 0) {
    return 0xffffffff8000ffff;
  }
  if (lbl_832156B8 == 1) {
    *param_1 = 1;
    param_1[1] = lbl_832156BC;
    param_1[2] = lbl_832156C0;
    return 0;
  }
  *param_1 = 0;
  param_1[1] = lbl_832156BC;
  param_1[2] = lbl_832156C0;
  return 0;
}

