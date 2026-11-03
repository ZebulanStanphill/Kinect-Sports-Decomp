extern int fn_8268B330();
extern int fn_826FC250();

int fn_826FC420(int param_1, int param_2, unsigned *param_3, int param_4, unsigned char param_5, int param_6)
{
  unsigned k;
  fn_8268B330(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = 0;
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x58) = 0;
  *(unsigned char *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x70) = 0;
  if (param_5 != 0) {
    k = 4;
  } else {
    k = (((*param_3 & ~3u) + 8) == 0);
  }
  fn_826FC250(param_1, k | 2, 0, param_2, param_3, param_4, param_6);
  return param_1;
}
