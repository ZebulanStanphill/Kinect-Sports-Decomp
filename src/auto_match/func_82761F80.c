extern int fn_8267BED0();
extern int fn_82760DD0();

int fn_82761F80(int param_1)

{
  unsigned int uVar1;
  int auStack_20 [4];

  auStack_20[0] = 2;
  uVar1 = fn_8267BED0(param_1,0x6c,auStack_20);
  if (uVar1 != 0) {
    return fn_82760DD0(uVar1,param_1);
  }
  return 0;
}
