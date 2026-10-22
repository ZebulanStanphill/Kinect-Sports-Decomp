typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char (*code)();
extern int fn_82A8C620();
extern int fn_82A8D250();

unsigned char fn_82A8E918(int *param_1,undefined4 *param_2)
{
  undefined1 auStack_40 [40];
  undefined1 auStack_70 [40];
  undefined1 auStack_80 [16];
  
  *param_2 = 0;
  if (!(*(code *)(*param_1 + 4))(param_1) ||
      !(*(code *)(*param_1 + 0x10))(param_1,auStack_70,0x28,auStack_80)) {
    return 0;
  }
  fn_82A8D250(auStack_40,auStack_70,0x28);
  fn_82A8C620(auStack_40,0x120,0x20,param_2);
  return 1;
}
