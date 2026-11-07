typedef unsigned char byte;
typedef unsigned int uint;

extern int fn_8279FB38(int param_1);

float fn_827A0B18(int param_1)
{
  if ((*(byte *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38(param_1);
    *(byte *)(param_1 + 0x13f) = *(byte *)(param_1 + 0x13f) & 0xfc;
  }
  if (*(uint *)(param_1 + 0x104) != 0) {
    return (float)*(uint *)(param_1 + 0x104);
  }
  return 0.0f;
}
