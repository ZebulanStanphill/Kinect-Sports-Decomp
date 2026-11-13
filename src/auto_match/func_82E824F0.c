extern int fn_82EFF5A8();
extern int fn_82F00008();


unsigned __int64 fn_82E824F0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x1dac);
  if ((iVar1 == 0) || (iVar1 == 5)) {
    *(unsigned int *)(param_1 + 0x1db0) = 0;
    fn_82EFF5A8(param_1,*(unsigned int *)(param_1 + 0x1f00));
  }
  else if (iVar1 == 2) {
    *(unsigned int *)(param_1 + 0x1db0) = 0;
    fn_82F00008();
  }
  if ((*(int *)(param_1 + 0x1dac) == 2) || (*(int *)(param_1 + 0x1dac) == 3)) {
    pcVar2 = *(char **)(param_1 + 0x1da8);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 == '\\')) {
      *(char **)(param_1 + 0x1da8) = pcVar2 + 1;
    }
    *(unsigned int *)(param_1 + 0x1dc8) = 0;
  }
  return 0;
}

