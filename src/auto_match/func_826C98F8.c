#define true 1


unsigned __int64 fn_826C98F8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x1a8) < 0) && ((*(unsigned int *)(param_1 + 0x8c) >> 4 & 1) != 0)) {
    iVar4 = *(int *)(param_1 + 0x1b0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x6c);
    }
    if (iVar4 != 0) {
      cVar1 = *(char *)(iVar4 + 0x34);
      while ((cVar1 == '\0' && (*(char *)(iVar4 + 0x35) == '\0'))) {
        iVar2 = *(int *)(iVar4 + 0x14);
        while( true ) {
          if (iVar2 == 0) {
            return 0;
          }
          iVar3 = (**(int (***)())(*(int *)(*(int *)(iVar4 + 0x14) + 0x10) + 8))
                            (*(int *)(iVar4 + 0x14) + 0x10);
          if (iVar3 == 0xb) break;
          iVar2 = *(int *)(iVar2 + 0x14);
        }
        cVar1 = *(char *)(iVar2 + 0x34);
        iVar4 = iVar2;
      }
      return 1;
    }
  }
  return 0;
}

