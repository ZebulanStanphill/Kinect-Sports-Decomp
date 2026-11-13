extern int fn_82A37B80();


void fn_82A37BC8(int param_1,unsigned int param_2)

{
  int *piVar1;
  
  if (*(unsigned int *)(param_1 + 0xc) > 0) {
    fn_82A37B80();
    for (piVar1 = *(int **)(param_1 + 4); (piVar1 != *(int **)(param_1 + 8) && (*piVar1 != param_2))
        ; piVar1 = piVar1 + *(unsigned short *)(piVar1 + 1)) {
    }
    if (piVar1 != *(int **)(param_1 + 8)) {
      *piVar1 = 0;
    }
    RtlLeaveCriticalSection(param_1 + 0x10);
  }
  return;
}

