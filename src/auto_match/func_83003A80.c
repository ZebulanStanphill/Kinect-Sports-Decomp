extern int fn_82F68B74();


unsigned __int64 fn_83003A80(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    piVar1 = (int *)(param_1 + 0x10);
    if ((*(unsigned char *)(param_1 + 0x3d) & 1) != 0) break;
    param_1 = *piVar1;
  } while (*piVar1 != 0);
  uVar2 = fn_82F68B74();
  return uVar2;
}

