typedef unsigned int uint;
extern int fn_829DC6A8();
extern int fn_829DD510();
extern int fn_829DDEE8();

int fn_829DFF40(int param_1)
{
  if (*(uint *)(param_1 + 0x11f10) >= *(uint *)(fn_829DC6A8() + 0x38) &&
      *(uint *)(param_1 + 0x8260) >= *(uint *)(fn_829DDEE8() + 0x20) &&
      *(uint *)(param_1 + 0x10) >= *(uint *)(fn_829DD510() + 0x18)) {
    return 1;
  }
  return 0;
}
