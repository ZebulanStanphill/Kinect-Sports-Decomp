__int64 fn_82D454D0(int param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc0);
  if (uVar1 != 0) {
    uVar4 = param_2 >> (*(unsigned int *)(param_1 + 0x1c) & 0x3f);
    uVar3 = (unsigned __int64)uVar4;
    param_2 = *(unsigned int *)(param_1 + 0x24) & param_2;
    if (uVar3 == 0) {
      return (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0xc4) *
             (__int64)*(int *)(*(int *)(param_1 + 0x6c) + param_2 * 0x10 + 8) + uVar1;
    }
    if (uVar4 != (1 << (0x20 - *(unsigned int *)(param_1 + 0x1c) & 0x3f)) - 1U) {
      uVar2 = (unsigned __int64)
              *(unsigned short *)
               ((int)((uVar3 + ((unsigned __int64)uVar4 & 0x3fffffff) * 4 & 0xffffffff) << 4) +
                *(int *)(param_1 + 0x78) + -0xc);
      if (uVar2 == 0xffff) {
        uVar2 = uVar3 - 1;
      }
      uVar3 = (unsigned __int64)*(unsigned char *)(param_1 + 0x2d) - 1;
      uVar4 = *(unsigned int *)((int)((uVar2 + (uVar2 & 0x3fffffff) * 4 & 0xffffffff) << 4) +
                        *(int *)(param_1 + 0x78) + 0x40);
      if ((uVar3 & 0xffffffff) < 4) {
        if ((int)uVar3 != 0) {
          if ((unsigned __int64)*(unsigned char *)(param_1 + 0x2d) != 2) {
            if (uVar3 == 2) {
              return (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0xc4) *
                     (__int64)
                     (int)(unsigned int)*(unsigned short *)
                                 ((int)(((unsigned __int64)uVar4 + (unsigned __int64)param_2 & 0xffffffff) << 1) +
                                 *(int *)(param_1 + 0x3c)) + uVar1;
            }
            return (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0xc4) *
                   (__int64)
                   *(int *)((int)(((unsigned __int64)uVar4 + (unsigned __int64)param_2 & 0xffffffff) << 2) +
                           *(int *)(param_1 + 0x30)) + uVar1;
          }
          uVar4 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x48) + uVar4 + param_2);
        }
        return (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0xc4) * (__int64)(int)uVar4 + uVar1;
      }
    }
  }
  return 0;
}

