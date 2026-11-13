extern int fn_82E38BE0();


__int64 fn_82E34A88(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  if (uVar4 == 0) {
    uVar4 = 1;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x28);
  trapWord(6,uVar4,0);
  uVar1 = *(unsigned short *)(param_1 + 0xc);
  uVar3 = fn_82E38BE0(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 4),
                          *(int *)(param_1 + 8) << 3);
  return (uVar3 & 0x7fffffff) * 2 +
         ((__int64)(int)(((uVar2 + uVar4) - 1 & 0xffffffff) / uVar4) * (__int64)(int)(unsigned int)uVar1 &
         0x1fffffffU) * 8;
}

