extern void fn_82758A28(void *a);
extern void fn_827AF4D0(void *a);

char *fn_8279C4B8(char *param_1)
{
  fn_827AF4D0(param_1);
  fn_82758A28(param_1 + 0x1c);
  *(unsigned short *)(param_1 + 0xac) = 0;
  *(float *)(param_1 + 0xa4) = -1.0f;
  *(float *)(param_1 + 0xa8) = -1.0f;
  return param_1;
}
