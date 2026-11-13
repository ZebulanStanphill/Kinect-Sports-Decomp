void fn_82A1FDC8(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  uVar1 = param_1[1];
  trapWord(6,(unsigned __int64)uVar1,0);
  uVar3 = (((((param_2 & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >> 8 ^ param_2) & 0xffffffff) >>
          8 ^ param_2;
  if (param_1[0xd] != 0) {
    RtlEnterCriticalSection(param_1 + 6);
  }
  iVar2 = (int)((uVar3 - (__int64)(int)((uVar3 & 0xffffffff) / (unsigned __int64)uVar1) *
                         (__int64)(int)uVar1 & 0xffffffff) << 2);
  piVar5 = *(int **)(iVar2 + *param_1);
  piVar6 = (int *)0x0;
  if (piVar5 != (int *)0x0) {
    do {
      piVar4 = piVar5;
      piVar5 = piVar4;
      if ((unsigned __int64)(unsigned int)piVar4[1] == (param_2 & 0xffffffff)) break;
      piVar5 = (int *)*piVar4;
      piVar6 = piVar4;
    } while (piVar5 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      if (piVar6 == (int *)0x0) {
        *(int *)(iVar2 + *param_1) = *piVar5;
      }
      else {
        *piVar6 = *piVar5;
      }
      if (param_1[0xe] != 0) {
        uVar1 = piVar5[2];
        piVar5[2] = (int)((unsigned __int64)uVar1 - 1);
        if ((unsigned __int64)uVar1 - 1 == 0) {
          *piVar5 = param_1[2];
          param_1[2] = (int)piVar5;
        }
      }
    }
  }
  if (param_1[0xd] != 0) {
    RtlLeaveCriticalSection(param_1 + 6);
  }
  return;
}

