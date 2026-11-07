typedef unsigned int undefined4;

extern void fn_82639F78(unsigned int a, int b, unsigned int c, int d, int e, int f);
extern void fn_8263CBB0(unsigned int a, int b, unsigned int c, unsigned __int64 d);
extern void fn_82640680(unsigned int a, int b, int c, unsigned int d);
extern unsigned int lbl_8320A898;

void fn_825F2C68(int param_1)
{
  fn_82639F78(lbl_8320A898, 0, *(undefined4 *)(param_1 + 0x20), 0, 0x20, 1);
  fn_8263CBB0(lbl_8320A898, 0, *(undefined4 *)(param_1 + 0xc), 0x80000000ULL);
  fn_8263CBB0(lbl_8320A898, 1, *(undefined4 *)(param_1 + 0x10), 0x40000000ULL);
  fn_82640680(lbl_8320A898, 0xd, 0, *(undefined4 *)(param_1 + 0x14) * 4);
}
