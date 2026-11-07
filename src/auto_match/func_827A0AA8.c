typedef unsigned char byte;
typedef unsigned int uint;

extern int fn_8279FB38(int param_1);

float fn_827A0AA8(int param_1)
{
  uint v;

  if ((*(byte *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38(param_1);
    *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) & 0xfc;
  }
  v = *(uint *)(param_1 + 0x100);
  if (v != 0) {
    return (float)v;
  }
  return 0.0f;
}
