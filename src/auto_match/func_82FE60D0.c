extern float lbl_82006848;

int fn_82FE60D0(int param_1,int param_2)
{
  float fVar1;
  unsigned int uVar2;
  int uStack_c;

  if (*(short *)(param_1 + 0x14) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4) + *(float *)(param_1 + 0x10);
    if (fVar1 < lbl_82006848) {
      fVar1 = lbl_82006848;
    }
    uVar2 = *(int *)(param_1 + 8) * param_2;
    uStack_c = (int)(unsigned int)((float)*(unsigned int *)(param_1 + 4) * fVar1);
    if (uVar2 >= (unsigned int)(uStack_c * *(int *)(param_1 + 8) * (int)*(short *)(param_1 + 0x14))) {
      return 2;
    }
    *(unsigned int *)(param_1 + 0xc) = uVar2;
  }
  return 1;
}
