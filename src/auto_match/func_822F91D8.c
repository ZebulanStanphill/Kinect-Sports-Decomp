extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


double fn_822F91D8(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar5;
  __int64 lVar4;
  double dVar6;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x844);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x83c);
  uVar5 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  fVar1 = *(float *)((iVar2 + 0x23) * 4 + iVar3);
  lVar4 = (__int64)(int)uVar5 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = (int)lVar4;
  dVar6 = (double)((*(float *)((iVar2 + 0x28) * 4 + iVar3) - fVar1) *
                   ((float)(uVar5 & 0x7fffff | 0x3f800000) - lbl_821CA460) + fVar1);
  if (lVar4 < 1) {
    dVar6 = -dVar6;
  }
  return dVar6;
}

