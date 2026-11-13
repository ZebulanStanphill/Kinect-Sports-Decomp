void fn_82D06258(unsigned char *param_1,float *input)

{
  float *param_2 = input;
  int iVar1;
  union { float f; unsigned u; } v;
  
  iVar1 = 0;
  do {
    v.f = *param_2;
    if ((v.u & 0x7f800000) == 0x7f800000) {
      *param_1 = 0;
      return;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  } while (iVar1 < 0x10);
  *param_1 = 1;
  return;
}

