extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_8228AFF8(int param_1,unsigned int *param_2)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int uVar5;
  
  iVar1 = 0;
  lVar3 = (__int64)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar4 = (int)lVar3;
  if (lVar3 < 1) {
    for (piVar2 = *(int **)(param_1 + 0x1228); (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)(-(unsigned int)(piVar2[1] != 0) & (unsigned int)(piVar2 + 1))) {
      iVar1 = iVar1 + 1;
    }
    lbl_83265A28 = iVar4 * 0x19660d + 0x3c6ef35f;
    uVar5 = *(unsigned int *)
             ((int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                   (float)(__int64)iVar1) * 4 + *(int *)(param_1 + 0x1228));
  }
  else {
    for (piVar2 = *(int **)(param_1 + 0x1224); (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)(-(unsigned int)(piVar2[1] != 0) & (unsigned int)(piVar2 + 1))) {
      iVar1 = iVar1 + 1;
    }
    lbl_83265A28 = iVar4 * 0x19660d + 0x3c6ef35f;
    uVar5 = *(unsigned int *)
             ((int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                   (float)(__int64)iVar1) * 4 + *(int *)(param_1 + 0x1224));
  }
  *param_2 = uVar5;
  return;
}

