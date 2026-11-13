void fn_82A43408(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  
  uVar1 = 0;
  uVar4 = 0;
  if (param_1[1] != 0) {
    uVar3 = param_1[2];
    do {
      uVar4 = 0;
      if (uVar3 != 0) {
        do {
          uVar2 = (__int64)(int)uVar4 * (__int64)(int)param_1[1] + uVar1;
          uVar4 = uVar4 + 1;
          *(float *)((int)((uVar2 + 3 & 0xffffffff) << 2) + param_1[6]) =
               *(float *)((int)((uVar2 & 0xffffffff) << 2) + param_1[5]) *
               *(float *)((int)((uVar1 & 0xffffffff) << 2) + param_1[3]) * (float)param_1[4];
          uVar3 = param_1[2];
        } while (uVar4 < uVar3);
      }
      uVar4 = param_1[1];
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < (unsigned __int64)uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x82a434b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*(int *)*param_1 + 8))
            ((int *)*param_1,0,param_2,param_1[6],
             ((__int64)(int)param_1[2] * (__int64)(int)uVar4 + 3U & 0x3fffffff) << 2);
  return;
}

