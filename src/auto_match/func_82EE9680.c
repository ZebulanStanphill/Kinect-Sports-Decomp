extern unsigned int *auStack_20;
extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82EE9568();
extern int fn_82EE9F80();


int fn_82EE9680(int param_1,unsigned int *param_2)

{
  int uVar1;
  int uVar2;
  unsigned int uVar3;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 0;
  uVar2 = fn_82A28568(fn_82A2A360(),0,0x10b0);
  if ((unsigned int)uVar2 == 0) {
    uVar2 = 0x8007000e;
  }
  else {
    uVar3 = fn_82EE9568(uVar2,param_1,auStack_20);
    if ((int)auStack_20[0] < 0) {
      fn_82EE9F80();
      uVar2 = (int)auStack_20[0];
    }
    else {
      *param_2 = uVar3;
      uVar2 = 0;
    }
  }
  return uVar2;
}

