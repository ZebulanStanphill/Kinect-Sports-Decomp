extern int fn_828F4C10();
extern int fn_828F4E08();
extern int fn_828F6790();
extern int fn_828F6890();
extern int fn_828FAB00();
extern int fn_828FAF58();
extern int fn_828FBB60();


unsigned __int64 fn_828F7470(int param_1)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x280);
  uVar3 = fn_828FBB60(*(unsigned int *)(param_1 + 0x278),*(unsigned int *)(param_1 + 0x2a0),piVar7
                           );
  if (-1 < (int)uVar3) {
    if (*piVar7 == 9) {
      pcVar6 = *(char **)(param_1 + 0x288);
      *(unsigned int *)(param_1 + 0x48) = 1;
      pcVar4 = "pack_matrix";
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F4C10(param_1);
        return uVar3;
      }
      pcVar4 = "warning";
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F4E08(param_1);
        return uVar3;
      }
      pcVar4 = "def";
      pcVar5 = pcVar6;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F6890(param_1);
        return uVar3;
      }
      pcVar5 = "ruledisable";
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar3 = fn_828F6790(param_1);
        return uVar3;
      }
      fn_828FAB00(param_1 + 0x18,piVar7,0xdf0,0xffffffff82029494);
      *(unsigned int *)(param_1 + 0x29c) = 0;
    }
    if ((*piVar7 != 0xc) && (*piVar7 != 0xd)) {
      fn_828FAF58(*(unsigned int *)(param_1 + 0x278),0);
    }
    uVar3 = 0;
  }
  *(unsigned int *)(param_1 + 0x4c) = 1;
  return uVar3;
}

