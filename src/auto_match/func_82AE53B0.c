typedef unsigned int uint;
extern int fn_82ABDD90(int, uint, uint, uint);
uint fn_82AE53B0(char *param_1, int param_2)
{
  uint u = *(uint *)(param_1 + 8);
  return *(uint *)(param_1 - 8 + fn_82ABDD90(param_2, u >> 7 & 0x7f, u >> 0x13 & 7, u >> 0xe & 7)) >> 0xf & 0x3fff;
}
