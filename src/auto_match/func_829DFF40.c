extern int fn_829DC6A8();
extern int fn_829DD510();
extern int fn_829DDEE8();

int fn_829DFF40(int param_1)
{
  if (*(unsigned int *)(param_1 + 0x11f10) >= *(unsigned int *)(fn_829DC6A8() + 0x38) &&
      *(unsigned int *)(param_1 + 0x8260) >= *(unsigned int *)(fn_829DDEE8() + 0x20) &&
      *(unsigned int *)(param_1 + 0x10) >= *(unsigned int *)(fn_829DD510() + 0x18)) {
    return 1;
  }
  return 0;
}
