unsigned int fn_82CEA220(int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = param_1[2];
  if (0 < param_1[2]) {
    uVar2 = (__int64)(int)(param_2 >> 4) * -0x61c8864f & uVar3;
    uVar1 = *(unsigned int *)((int)(uVar2 << 3) + *param_1);
    while (uVar1 != 0xffffffff) {
      if (uVar1 == param_2) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & uVar3;
      uVar1 = *(unsigned int *)((int)(uVar2 << 3) + *param_1);
    }
  }
  return uVar3 + 1;
}

