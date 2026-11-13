extern int fn_8279FB38(int param_1);

float fn_827A0AA8(int param_1)
{
  unsigned int v;

  if ((*(unsigned char *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38(param_1);
    *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) & 0xfc;
  }
  v = *(unsigned int *)(param_1 + 0x100);
  if (v != 0) {
    return (float)v;
  }
  return 0.0f;
}
