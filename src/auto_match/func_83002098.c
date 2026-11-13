extern int fn_83005A08();


void fn_83002098(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  
  fn_83005A08();
  if (*(int *)(param_1 + 0x24) != 0) {
    *(float *)(param_2 + 4) = *(float *)(*(int *)(param_1 + 0x24) + 0x38) + *(float *)(param_2 + 4);
  }
  puVar1 = *(unsigned int **)(param_1 + 0x54);
  if (puVar1 != (unsigned int *)0x0) {
    for (piVar2 = (int *)*puVar1; (piVar2 != (int *)puVar1[1] && (*piVar2 != param_4));
        piVar2 = piVar2 + 2) {
    }
    piVar2 = (int *)(-(unsigned int)((int *)puVar1[1] != piVar2) & (unsigned int)(piVar2 + 1));
    if (piVar2 != (int *)0x0) {
      *(float *)(param_2 + 4) = *(float *)(*piVar2 + 0x38) + *(float *)(param_2 + 4);
    }
  }
  return;
}

