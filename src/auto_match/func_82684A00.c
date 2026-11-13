extern int fn_8267BED0();
extern int fn_826E7308();

int fn_82684A00(int param_1,int param_2)

{
  unsigned int uVar1;
  int auStack_20 [4];

  auStack_20[0] = 2;
  uVar1 = fn_8267BED0(param_1,0xc,auStack_20);
  if (uVar1 != 0) {
    return fn_826E7308(uVar1,param_2);
  }
  return 0;
}
