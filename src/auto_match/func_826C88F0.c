#define true 1


unsigned __int64 fn_826C88F0(int param_1)

{
  char cVar1;
  unsigned int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x34);
  while ((cVar1 == '\0' && (*(char *)(param_1 + 0x35) == '\0'))) {
    iVar2 = *(int *)(param_1 + 0x14);
    while( true ) {
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = (*(int (**)())(*(int *)(*(int *)(param_1 + 0x14) + 0x10) + 8))
                        (*(int *)(param_1 + 0x14) + 0x10);
      if (iVar3 == 0xb) break;
      iVar2 = *(int *)(iVar2 + 0x14);
    }
    cVar1 = *(char *)(iVar2 + 0x34);
    param_1 = iVar2;
  }
  return 1;
}

