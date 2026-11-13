void fn_826341A0(unsigned char param_1,unsigned char param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int *param_5,
                  unsigned int *param_6)

{
  unsigned int uVar1;
  
  if (param_1 != '\0') {
    return;
  }
  if (param_2 != '\0') {
    return;
  }
  if ((*param_5 & 0x8000) != 0) {
    uVar1 = *param_5 & 0x3f;
    if (uVar1 <= 3) {
      uVar1 = *param_6 & 0xfffffff0 | (1 << uVar1 | *param_6) & 0xf;
    }
    else {
      if (uVar1 != 0x3d) goto code_r0x826341f4;
      uVar1 = *param_6 | 0x10;
    }
    *param_6 = uVar1;
  }
code_r0x826341f4:
  if (((*(unsigned char *)(param_5 + 2) & 0x1f) < 0x18) || (0x1b < (*(unsigned char *)(param_5 + 2) & 0x1f))) {
    if (*param_5 >> 0x1a < 0x23) {
      return;
    }
    if (0x27 < *param_5 >> 0x1a) {
      return;
    }
  }
  *param_6 = *param_6 | 0x20;
  return;
}

