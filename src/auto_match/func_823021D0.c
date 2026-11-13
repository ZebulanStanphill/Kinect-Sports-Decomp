extern unsigned int *auStack_a4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


__int64 fn_823021D0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int auStack_a4 [41];
  
  iVar4 = 0;
  iVar10 = param_2 * 0x10 + param_1;
  uVar9 = 0;
  uVar2 = *(int *)(iVar10 + 0x68) - *(int *)(iVar10 + 100) >> 6;
  if (uVar2 != 0) {
    param_1 = param_2 * 0x44 + param_1;
    puVar5 = (unsigned int *)(*(int *)(iVar10 + 100) + 0x38);
    puVar6 = (unsigned int *)(param_1 + 0xa4);
    puVar3 = puVar6 + *(int *)(param_1 + 0xe4);
    do {
      for (puVar8 = puVar6; (puVar8 != puVar3 && (*puVar8 != puVar5[-7])); puVar8 = puVar8 + 1) {
      }
      if (puVar8 == puVar3) {
        uVar1 = *puVar5;
        uVar7 = 0;
        if (uVar1 != 0) {
          puVar8 = auStack_a4 + iVar4;
          do {
            if (iVar4 == 0x20) break;
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 1;
            *puVar8 = uVar9;
            iVar4 = iVar4 + 1;
          } while (uVar7 < uVar1);
        }
      }
      uVar9 = uVar9 + 1;
      puVar5 = puVar5 + 0x10;
    } while (uVar9 < uVar2);
    if (iVar4 != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      return ((unsigned __int64)
              auStack_a4
              [(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                    (float)(__int64)iVar4) + 1] & 0x3ffffff) * 0x40 +
             (unsigned __int64)*(unsigned int *)(iVar10 + 100);
    }
  }
  return 0;
}

