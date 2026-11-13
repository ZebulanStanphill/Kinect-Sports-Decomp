#define true 1
extern unsigned int *auStack_84;
extern unsigned int fStack_90;
extern int fn_82522D98();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uRamfffffffc;


unsigned __int64 fn_825E76B8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  int aiStack_c8 [14];
  float fStack_90;
  unsigned int auStack_84 [33];
  
  uVar6 = (unsigned __int64)*param_1;
  puVar4 = param_1 + 2;
  puVar5 = puVar4;
  if (-1 < (int)*param_1) {
    lVar7 = (uVar6 + 0x12 & 0x3fffffff) << 2;
    do {
      iVar10 = (int)lVar7;
      if (*(unsigned int **)(iVar10 + (int)puVar5) != puVar4) {
        puVar2 = *(unsigned int **)(iVar10 + (int)puVar5);
        do {
          if ((int)*param_2 <= (int)*puVar2) break;
          puVar8 = (unsigned int *)(iVar10 + (int)puVar2);
          puVar5 = puVar2;
          puVar2 = (unsigned int *)*puVar8;
        } while ((unsigned int *)*puVar8 != puVar4);
      }
      *(unsigned int **)((int)aiStack_c8 + iVar10) = puVar5;
      uVar6 = uVar6 - 1;
      lVar7 = lVar7 + -4;
    } while (-1 < (__int64)uVar6);
  }
  puVar5 = (unsigned int *)puVar5[0x12];
  if ((puVar5 == puVar4) || (*puVar5 != *param_2)) {
    uVar11 = 0;
    while( true ) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_90 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      if ((lbl_8218E8E8 <= fStack_90 - lbl_821CA460) || (0xf < (int)uVar11)) break;
      uVar11 = uVar11 + 1;
    }
    if ((int)*param_1 < (int)uVar11) {
      iVar10 = *param_1 + 1;
      if (iVar10 <= (int)uVar11) {
        iVar9 = (uVar11 - iVar10) + 1;
        puVar8 = auStack_84 + iVar10;
        do {
          puVar8 = puVar8 + 1;
          *puVar8 = puVar4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *param_1 = uVar11;
    }
    uVar1 = param_1[0x25];
    if (*(int *)(uVar1 + 0xc) < 1) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(uVar1 + 0xc) + -1;
      *(int *)(uVar1 + 0xc) = iVar10;
      iVar10 = *(int *)(iVar10 * 4 + *(int *)(uVar1 + 0x10));
    }
    if (iVar10 != -4) {
      *(unsigned int *)(iVar10 + 0x40) = 4;
                    /* WARNING: Subroutine does not return */
      fn_82522D98(0x10);
    }
    uRamfffffffc = *param_2;
    if (-1 < (int)uVar11) {
      iVar10 = uVar11 + 1;
      iVar9 = 0x48;
      do {
        puVar8 = (unsigned int *)(*(int *)((int)aiStack_c8 + iVar9) + iVar9);
        *(unsigned int *)(iVar9 + -4) = *puVar8;
        iVar9 = iVar9 + 4;
        *puVar8 = 0xfffffffc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    uVar3 = 1;
    param_1[1] = param_1[1] + 1;
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5 = puVar5 + 1;
    uVar3 = 0;
  }
  *param_3 = puVar5;
  return uVar3;
}

