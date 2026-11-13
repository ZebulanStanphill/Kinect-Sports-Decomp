extern int fn_82397F88();
extern unsigned int lbl_831CD254;
extern unsigned int lbl_831CD258;
extern float lbl_831CD25C;
extern unsigned int lbl_831CD260;


void fn_822E54B0(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x1a8) + 4);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x1a8) + 8);
    *(unsigned int *)(param_1 + 0x100) = lbl_831CD254;
    uVar3 = lbl_831CD258;
    *(float *)(param_1 + 0x108) = fVar1 * *(float *)(param_1 + 0x2d0);
    *(unsigned int *)(param_1 + 0x10c) = uVar2;
  }
  else {
    iVar4 = fn_82397F88(*(unsigned int *)(param_1 + 0x1bc));
    uVar2 = lbl_831CD260;
    if (iVar4 == 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x2d0) * lbl_831CD25C;
    *(unsigned int *)(param_1 + 0x100) = lbl_831CD254;
    uVar3 = lbl_831CD258;
    *(float *)(param_1 + 0x108) = fVar1;
    *(unsigned int *)(param_1 + 0x10c) = uVar2;
  }
  *(unsigned int *)(param_1 + 0x104) = uVar3;
  return;
}

