unsigned char fn_82CABDF8(int param_1,int param_2,int param_3)

{
  if (param_2 < 2) {
    if (1 < param_3) {
      return 1;
    }
  }
  else if (1 < param_3) {
    return *(unsigned char *)(*(int *)(param_1 + 0xc) + param_2 + -1) & 3;
  }
  return 2;
}

