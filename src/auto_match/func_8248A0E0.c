#define true 1
extern int fn_82F63CA0();


void fn_8248A0E0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  piVar2 = *(int **)(iVar1 + 0x50);
  while( true ) {
    if (piVar2 == *(int **)(iVar1 + 0x54)) {
      return;
    }
    if (*piVar2 == *(int *)(param_1 + 0xc)) break;
    piVar2 = piVar2 + 1;
  }
  fn_82F63CA0(piVar2,piVar2 + 1,(*(int *)(iVar1 + 0x54) - (int)(piVar2 + 1) >> 2) << 2);
  *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -4;
  return;
}

