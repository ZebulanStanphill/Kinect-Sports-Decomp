extern int fn_8268B330(int);
extern int fn_826FC250(int, int, int, int, unsigned int *, int, int);

int fn_826FC2F0(int param_1, unsigned int *param_2, int param_3, unsigned char param_4, int param_5)
{
  int mode;

  fn_8268B330(param_1 + 0xc);
  *(int *)(param_1 + 0x14) = 0;
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x30) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x58) = 0;
  *(unsigned char *)(param_1 + 0x60) = 0;
  *(int *)(param_1 + 0x70) = 0;
  if (param_4 != 0) {
    mode = 4;
  } else {
    mode = (int)((*param_2 & 0xfffffffc) + 8) == 0;
  }
  fn_826FC250(param_1, mode, 0, -1, param_2, param_3, param_5);
  return param_1;
}
