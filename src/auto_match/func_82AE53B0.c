extern int fn_82ABDD90(int, unsigned int, unsigned int, unsigned int);
unsigned int fn_82AE53B0(char *param_1, int param_2)
{
  unsigned int u = *(unsigned int *)(param_1 + 8);
  return *(unsigned int *)(param_1 - 8 + fn_82ABDD90(param_2, u >> 7 & 0x7f, u >> 0x13 & 7, u >> 0xe & 7)) >> 0xf & 0x3fff;
}
