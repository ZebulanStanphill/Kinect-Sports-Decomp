extern int fn_82E50CB8(int);
extern int fn_82E50F10(int);
int fn_82E39EA0(int param_1,unsigned param_2)
{
  fn_82E50CB8(param_1 + 8);
  if ((*(unsigned *)(param_1 + 0x44) & 1) != (param_2 & 1)) {
    if (*(int *)(param_1 + 0x60) != 0) {
      fn_82E50F10(param_1 + 8);
      return 0xc00d36b2;
    }
    if ((param_2 & 1) != 0) {
      *(int *)(param_1 + 0x6c) = 0;
    }
  }
  *(unsigned *)(param_1 + 0x44) = param_2;
  fn_82E50F10(param_1 + 8);
  return 0;
}
