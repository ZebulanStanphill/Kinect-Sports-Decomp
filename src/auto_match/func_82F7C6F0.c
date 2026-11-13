extern int free();


void fn_82F7C6F0(int *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    free(param_1[2]);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[3] = param_1[3] & 0xfffffbf7;
  }
  return;
}

