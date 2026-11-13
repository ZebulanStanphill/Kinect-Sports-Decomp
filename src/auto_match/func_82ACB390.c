extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82F68CC0();


void fn_82ACB390(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar4 = (param_2 & 0xffffffff) >> 2 & 0x3ffffffc;
  uVar5 = uVar4 + 4;
  uVar1 = (param_2 & 0xffffffff) >> 4;
  if ((unsigned int)param_1[3] < uVar5) {
    uVar2 = fn_82ABE9F0(*param_1,uVar5 * 4 & 0xfffffffc,0);
    fn_82F68CC0(uVar2,param_1[2],param_1[3] << 2);
    fn_82AC6808(*param_1,param_1[2],param_1[3] << 2,0);
    param_1[2] = (int)uVar2;
    param_1[3] = (int)uVar5;
  }
  if ((unsigned int)param_1[4] < uVar1) {
    param_1[4] = (int)uVar1;
  }
  lVar3 = 0;
  lVar6 = 4;
  do {
    if ((param_2 & 0xf & (unsigned __int64)(unsigned int)(1 << ((unsigned int)lVar3 & 0x3f))) != 0) {
      *(unsigned int *)((int)((uVar4 + lVar3 & 0xffffffff) << 2) + param_1[2]) = param_3;
    }
    lVar3 = lVar3 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

