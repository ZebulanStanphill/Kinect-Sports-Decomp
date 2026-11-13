unsigned __int64 fn_82FE5F78(int param_1,unsigned short param_2,unsigned int *param_3)

{
  if (param_3 != (unsigned int *)0x0) {
    if (param_2 == 0) {
      *(unsigned int *)(param_1 + 4) = *param_3;
      return 1;
    }
    if (param_2 == 1) {
      *(unsigned int *)(param_1 + 8) = *param_3;
      return 1;
    }
    if (param_2 < 3) {
      *(unsigned int *)(param_1 + 0xc) = *param_3;
      return 1;
    }
  }
  return 0x1f;
}

