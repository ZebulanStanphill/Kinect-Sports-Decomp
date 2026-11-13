extern unsigned int *auStack_30;
extern int fn_82ABE870();
extern int fn_82B24700();
extern int fn_82B4B1D8();
extern int fn_82B4BEF8();


void fn_82B4FFC0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned char auStack_30 [24];
  
  fn_82B24700(auStack_30);
  fn_82B4B1D8(auStack_30,param_3);
  uVar1 = param_3 & 0xffffffff;
  while (uVar1 != 0) {
    uVar2 = fn_82ABE870(auStack_30);
    fn_82B4BEF8(param_1,uVar2);
    param_3 = param_3 - 1;
    uVar1 = param_3;
  }
  return;
}

