unsigned __int64 fn_82EF3A68(int param_1,__int64 *param_2,__int64 *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    pcVar2 = *(char **)(param_1 + 0x48);
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x54) + 0x28;
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar4 = (unsigned __int64)(unsigned int)((int)pcVar3 - (int)pcVar2) + lVar4;
    }
    pcVar2 = *(char **)(param_1 + 0x4c);
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar4 = (unsigned __int64)(unsigned int)((int)pcVar3 - (int)pcVar2) + lVar4;
    }
    pcVar2 = *(char **)(param_1 + 0x58);
    pcVar3 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      lVar4 = (unsigned __int64)(unsigned int)((int)pcVar3 - (int)pcVar2) + lVar4;
    }
    if (param_2 != (__int64 *)0x0) {
      *param_2 = lVar4;
    }
    if (param_3 != (__int64 *)0x0) {
      *param_3 = lVar4;
    }
    *(__int64 *)(param_1 + 0x20) = lVar4;
    return 0;
  }
  return 0xffffffffc00d36b6;
}

