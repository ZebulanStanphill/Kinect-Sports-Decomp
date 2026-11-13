extern int fn_8267C838();
extern int fn_8267C950();
extern int fn_8267C9A0();
extern int fn_8267CD28();
extern int fn_8267EE78();
extern int fn_82A1E650();
extern int fn_82A2A618();
extern int fn_82A2A790();


unsigned __int64 fn_8267CDA8(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = 0;
  uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_2 + 0x10) + 8);
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  else {
    RtlEnterCriticalSection(param_1);
    puVar2 = (unsigned int *)fn_8267CD28(param_1);
    if (*(int *)(param_1 + 0x24) == 0) {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *(unsigned int **)(param_1 + 0x20) = puVar2;
    }
    else {
      puVar2[2] = *(int *)(param_1 + 0x24);
      *(unsigned int **)(*(int *)(param_1 + 0x24) + 4) = puVar2;
      puVar2[1] = 0;
    }
    *(unsigned int **)(param_1 + 0x24) = puVar2;
    RtlLeaveCriticalSection(param_1);
    iVar3 = *(int *)(param_2 + 0x10);
    *(unsigned int *)(iVar3 + 8) = 0;
    uVar1 = uVar6;
    if (*(char *)(iVar3 + 4) == '\0') {
      fn_82A2A618(**(unsigned int **)(param_2 + 0x10),1,0);
    }
    else {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        fn_82A2A790(**(unsigned int **)(param_2 + 0x10));
      }
    }
    fn_8267EE78(param_2);
    uVar4 = 0xffffffffffffffff;
    if ((int)param_3 != -1) {
      uVar4 = param_3;
    }
    iVar3 = fn_82A1E650(*puVar2,uVar4);
    RtlEnterCriticalSection(param_1);
    if ((iVar3 == 0) || (iVar3 == 0x80)) {
      uVar5 = 1;
    }
    else {
      fn_8267C9A0(param_1,puVar2);
    }
    fn_8267C950(param_1,puVar2);
    RtlLeaveCriticalSection(param_1);
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      fn_8267C838(*(unsigned int *)(param_2 + 0x10));
    }
  }
  return uVar5;
}

