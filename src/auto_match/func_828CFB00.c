extern int fn_82CE0750();
extern int fn_82CE07B0();
extern int fn_82CE07C8();


void fn_828CFB00(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x84);
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = fn_82CE0750(1,param_1 + 0x48,param_1 + 0x4c,param_1 + 0x50,0,0,0,
                              *(unsigned int *)(param_1 + 0x88));
    if (iVar1 != 0) {
      if (*piVar2 != 0) {
        fn_82CE07C8();
        *piVar2 = 0;
      }
      *(unsigned int *)(param_1 + 0x7c) = 5;
      return;
    }
  }
  else {
    iVar1 = fn_82CE07B0(0,0,piVar2);
    if (iVar1 != 0) {
      if (*piVar2 != 0) {
        fn_82CE07C8();
        *piVar2 = 0;
      }
      *(unsigned int *)(param_1 + 0x7c) = 5;
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x7c) = 2;
  return;
}

