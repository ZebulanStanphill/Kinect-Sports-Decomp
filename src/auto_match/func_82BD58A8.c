unsigned __int64 fn_82BD58A8(int param_1,int *param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  
  RtlEnterCriticalSection(param_1 + 0xf0);
  uVar1 = 0;
  *param_2 = 0;
  if (*(unsigned int *)(param_1 + 8) > 0) {
    puVar3 = (unsigned int *)(param_1 + 0x60);
    puVar2 = (unsigned __int64 *)(param_3 + -8);
    do {
      uVar4 = *(unsigned __int64 *)*puVar3;
      if ((uVar4 != 0) && ((uVar4 & 0xfbdf00ddeadbeef0) != 0xfbdf00ddeadbeef0)) {
        puVar2 = puVar2 + 1;
        *puVar2 = uVar4;
        *param_2 = *param_2 + 1;
      }
      uVar1 = uVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 < *(unsigned int *)(param_1 + 8));
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return 0;
}

