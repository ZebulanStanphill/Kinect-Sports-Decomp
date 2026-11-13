unsigned __int64 fn_8289FA30(int *param_1,int *param_2)

{
  unsigned __int64 uVar1;
  
  if (*param_1 < *param_2) {
    return 1;
  }
  if (*param_1 <= *param_2) {
    uVar1 = 0;
    if (*(char *)(param_2 + 1) != '\0') {
      if (*(char *)(param_1 + 1) == '\0') {
        uVar1 = 1;
      }
      else {
        uVar1 = ((~(unsigned __int64)(unsigned int)(param_2[2] ^ param_1[2]) & 0xffffffff) >> 0x1f) +
                (unsigned __int64)((unsigned int)param_2[2] <= (unsigned int)param_1[2]) & 1;
      }
    }
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

