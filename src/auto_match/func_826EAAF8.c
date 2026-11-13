extern unsigned int *auStack_20;
extern int fn_8267BED0();
extern int fn_826EA6F8();


int fn_826EAAF8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int auStack_20 [2];

  auStack_20[0] = 2;
  uVar1 = fn_8267BED0(param_1,0x310,auStack_20);
  if (uVar1 != 0) {
    return fn_826EA6F8(uVar1,0,param_2,param_3);
  }
  return 0;
}
