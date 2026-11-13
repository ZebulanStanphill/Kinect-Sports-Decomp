extern unsigned int lbl_821CA460;
extern unsigned int lbl_831CC9A8;
extern unsigned int lbl_831CC9AC;
extern unsigned int lbl_831CC9B0;
extern unsigned int lbl_83265A28;


double fn_822FAB78(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x844);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x83c);
  fVar1 = *(float *)((iVar5 + 0x28) * 4 + iVar2);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar3 = lbl_831CC9AC;
  if (lbl_831CC9AC - fVar1 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)((iVar5 + 0x23) * 4 + iVar2);
  fVar4 = lbl_831CC9A8;
  if (lbl_831CC9A8 - fVar1 < 0.0) {
    fVar4 = fVar1;
  }
  dVar6 = (double)((fVar3 - fVar4) * ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460)
                  + fVar4);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (lbl_831CC9B0 < *(float *)(param_1 + 0x1c)) goto LAB_822fac4c;
  }
  else if (*(float *)(param_1 + 0x1c) < -lbl_831CC9B0) {
LAB_822fac4c:
    iVar5 = 1;
    goto LAB_822fac30;
  }
  iVar5 = 0;
LAB_822fac30:
  if (*(int *)(param_1 + 0x18) != iVar5) {
    dVar6 = -dVar6;
  }
  return dVar6;
}

