extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern int fn_82537D18();
extern int fn_82538598();
extern int fn_82F622A8();
extern int fn_82F691F0();


void fn_82538468(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [256];
  
  uVar2 = *param_1;
  uVar1 = (int)(param_1[1] - uVar2) / 0xc4;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar1) {
    fn_82537D18(auStack_110,param_1,param_2 * 0xc4 + (unsigned __int64)uVar2);
  }
  else if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
    lVar4 = param_2 - (__int64)(int)uVar1;
    if ((0x14e5e0aU - lVar4 & 0xffffffff) < (unsigned __int64)uVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = (int)uVar1 + lVar4;
    uVar1 = (int)(param_1[2] - uVar2) / 0xc4;
    if ((unsigned __int64)uVar1 < (uVar5 & 0xffffffff)) {
      uVar3 = 0;
      if ((unsigned __int64)uVar1 <= (0x14e5e0a - (unsigned __int64)(uVar1 >> 1) & 0xffffffff)) {
        uVar3 = (unsigned __int64)(uVar1 >> 1) + (__int64)(int)uVar1;
      }
      if ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar3 = uVar5;
      }
      fn_82538598(param_1,uVar3);
    }
    if (param_2 != (__int64)((int)(param_1[1] - *param_1) / 0xc4)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_100,0,0xc4);
    }
    param_1[1] = ((int)param_2 - (int)(param_1[1] - *param_1) / 0xc4) * 0xc4 + param_1[1];
  }
  return;
}

