typedef unsigned char bool;
extern int fn_82A381F0();
extern unsigned int iStack_44;


unsigned __int64 fn_82A383C0(unsigned int *param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  int iStack_44;
  unsigned int *apuStack_40 [16];
  
  uVar5 = 0;
  RtlEnterCriticalSection(param_1 + 5);
  puVar2 = (unsigned int *)fn_82A381F0(param_1,param_2,1);
  if (puVar2 == (unsigned int *)0x0) {
    uVar5 = 0xffffffffc000000f;
  }
  else {
    puVar6 = puVar2;
    if (puVar2[1] == -1) {
      puVar6 = (unsigned int *)(puVar2[4] * 0x58 + param_1[1]);
    }
    bVar1 = (unsigned __int64)(unsigned int)puVar6[0x15] - 1 == 0;
    puVar6[0x15] = (int)((unsigned __int64)(unsigned int)puVar6[0x15] - 1);
    if (bVar1) {
      NtClose(puVar2[5]);
      NtClose(*puVar2);
      uVar5 = (**(int (***)())(*(int *)*param_1 + 4))(puVar2[1]);
      apuStack_40[0] = puVar6;
    }
    uVar3 = (unsigned __int64)bVar1;
    if (puVar6 != puVar2) {
      uVar3 = uVar3 + 1;
      apuStack_40[bVar1] = puVar2;
    }
    if (uVar3 != 0) {
      piVar4 = &iStack_44;
      do {
        piVar4 = piVar4 + 1;
        *(unsigned int *)(((*piVar4 - param_1[1]) / 0x58) * 0x58 + param_1[1]) = 0xffffffff;
        param_1[3] = param_1[3] + -1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  RtlLeaveCriticalSection(param_1 + 5);
  return uVar5;
}

