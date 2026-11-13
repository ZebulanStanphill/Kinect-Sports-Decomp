#define true 1


unsigned int * fn_82A1FEB8(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar1 = param_1[1];
  trapWord(6,(unsigned __int64)uVar1,0);
  uVar3 = (((((param_2 & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >>
          8 ^ param_2;
  if (param_1[0xd] != 0) {
    RtlEnterCriticalSection(param_1 + 6);
  }
  puVar2 = *(unsigned int **)
            ((int)((uVar3 - (__int64)(int)((uVar3 & 0xffffffff) / (unsigned __int64)uVar1) *
                            (__int64)(int)uVar1 & 0xffffffff) << 2) + *param_1);
  while( true ) {
    if (puVar2 == (unsigned int *)0x0) {
      if (param_1[0xd] != 0) {
        RtlLeaveCriticalSection(param_1 + 6);
      }
      return (unsigned int *)0x0;
    }
    if ((unsigned __int64)(unsigned int)puVar2[1] == (param_2 & 0xffffffff)) break;
    puVar2 = (unsigned int *)*puVar2;
  }
  if (param_1[0xe] != 0) {
    puVar2[2] = puVar2[2] + 1;
  }
  if (param_1[0xd] != 0) {
    RtlLeaveCriticalSection(param_1 + 6);
  }
  if (param_1[0xe] != 0) {
    return puVar2 + 3;
  }
  return puVar2 + 2;
}

