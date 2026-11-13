extern int fn_82FF5D28();


unsigned __int64 fn_82FF5B50(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  uVar1 = 0x1c;
  for (piVar2 = *(int **)(param_2 + 0x28);
      (piVar2 != *(int **)(param_2 + 0x2c) && (*piVar2 != param_3)); piVar2 = piVar2 + 1) {
  }
  if ((-(unsigned int)(*(int **)(param_2 + 0x2c) != piVar2) & (unsigned int)piVar2) == 0) {
    if ((*(char *)(param_2 + 0x39) == -1) ||
       (piVar2 = (int *)fn_82FF5D28(param_2 + 0x28), piVar2 == (int *)0x0)) {
      uVar1 = 0x1b;
    }
    else {
      *piVar2 = param_3;
      uVar1 = 1;
      *(char *)(param_2 + 0x39) = *(char *)(param_2 + 0x39) + '\x01';
    }
  }
  return uVar1;
}

