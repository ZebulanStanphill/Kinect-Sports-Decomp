extern int fn_82FF5D28();


unsigned __int64 fn_8301B8C0(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  int *piVar2;
  
  uVar1 = 2;
  if ((unsigned int)(*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x24) >> 2) < 8) {
    for (piVar2 = *(int **)(param_2 + 0x24);
        (piVar2 != *(int **)(param_2 + 0x28) && (*piVar2 != param_3)); piVar2 = piVar2 + 1) {
    }
    if (((-(unsigned int)(*(int **)(param_2 + 0x28) != piVar2) & (unsigned int)piVar2) == 0) &&
       (piVar2 = (int *)fn_82FF5D28((unsigned int *)(param_2 + 0x24)), piVar2 != (int *)0x0)) {
      *piVar2 = param_3;
      uVar1 = 1;
      *(char *)(param_2 + 0x31) = *(char *)(param_2 + 0x31) + '\x01';
    }
    else {
      uVar1 = 0x28;
    }
  }
  return uVar1;
}

