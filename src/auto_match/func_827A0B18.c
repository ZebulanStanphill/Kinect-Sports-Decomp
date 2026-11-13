extern int fn_8279FB38(int param_1);

float fn_827A0B18(int param_1)
{
  if ((*(unsigned char *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38(param_1);
    *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) & 0xfc;
  }
  if (*(unsigned int *)(param_1 + 0x104) != 0) {
    return (float)*(unsigned int *)(param_1 + 0x104);
  }
  return 0.0f;
}
