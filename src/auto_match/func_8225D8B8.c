#define true 1
extern int fn_82F63CA0();


void fn_8225D8B8(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x14)) {
      return;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  fn_82F63CA0(piVar1,piVar1 + 1,(*(int *)(param_1 + 0x14) - (int)(piVar1 + 1) >> 2) << 2);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
  return;
}

