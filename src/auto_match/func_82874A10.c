#define true 1


unsigned __int64 fn_82874A10(int param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 4);
  iVar1 = 0;
  while( true ) {
    if (pcVar2 == *(char **)(param_1 + 8)) {
      return 0xffffffffa0260000;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x70;
    iVar1 = iVar1 + 1;
  }
  *param_2 = iVar1;
  return 0x20260000;
}

