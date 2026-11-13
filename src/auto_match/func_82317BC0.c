extern int fn_822C3FA8();
extern int fn_82317AB0();
extern unsigned int iStack_84;
extern unsigned int iStack_c4;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_a4;


unsigned __int64 fn_82317BC0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 *param_4)

{
  float fVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar3;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  int iStack_c4;
  int aiStack_c0 [7];
  unsigned int uStack_a4;
  int aiStack_a0 [7];
  int iStack_84;
  int aiStack_80 [32];
  
  if ((param_3 & 0xffffffff) == 0) {
    puVar2 = (unsigned int *)(in_r0 + (int)param_4 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    *(unsigned int *)(param_4 + 2) = 0;
    *(unsigned int *)((int)param_4 + 0x14) = 0;
    *(unsigned int *)(param_4 + 3) = 0xffffffff;
    *(unsigned int *)((int)param_4 + 0x1c) = 0;
    return 0;
  }
  uVar9 = 0;
  uVar11 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    puVar10 = &uStack_a4;
    do {
      iVar4 = fn_822C3FA8((double)lbl_82191FC8,*(unsigned int *)(param_1 + 0xc),
                                *(unsigned int *)(param_1 + 0x1c));
      if (iVar4 == 0) {
        puVar10 = puVar10 + 1;
        *puVar10 = uVar11;
        uVar9 = uVar9 + 1;
      }
      uVar11 = uVar11 + 1;
    } while ((unsigned __int64)uVar11 < (param_3 & 0xffffffff));
  }
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x1ec) == 0) {
    uVar3 = fn_82317AB0(param_1,param_2,param_3,aiStack_c0,7);
  }
  else {
    uVar3 = param_3;
    if ((param_3 & 0xffffffff) != 0) {
      piVar5 = &iStack_c4;
      uVar12 = param_3;
      iVar4 = 0;
      do {
        piVar5 = piVar5 + 1;
        *piVar5 = iVar4;
        uVar12 = uVar12 - 1;
        iVar4 = iVar4 + 1;
      } while (uVar12 != 0);
    }
  }
  iVar4 = 0;
  if ((uVar3 & 0xffffffff) != 0) {
    piVar6 = aiStack_c0;
    piVar5 = &iStack_84;
    uVar12 = uVar3;
    do {
      uVar11 = 0;
      if (uVar9 != 0) {
        piVar8 = aiStack_a0;
        do {
          if (*piVar6 == *piVar8) {
            piVar5 = piVar5 + 1;
            *piVar5 = *piVar6;
            iVar4 = iVar4 + 1;
            break;
          }
          uVar11 = uVar11 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar11 < uVar9);
      }
      piVar6 = piVar6 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (iVar4 != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      iVar4 = aiStack_80
              [(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                    (float)(__int64)iVar4)];
      goto LAB_82317e84;
    }
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar11 = lbl_83265A28 & 0x7fffff;
  if (uVar9 == 0) {
    if ((uVar3 & 0xffffffff) == 0) {
      iVar4 = (int)(((float)(uVar11 | 0x3f800000) - lbl_821CA460) * (float)(__int64)(int)param_3);
      goto LAB_82317e84;
    }
    piVar5 = aiStack_c0;
    fVar1 = ((float)(uVar11 | 0x3f800000) - lbl_821CA460) * (float)(__int64)(int)uVar3;
  }
  else {
    piVar5 = aiStack_a0;
    fVar1 = ((float)(uVar11 | 0x3f800000) - lbl_821CA460) * (float)(__int64)(int)uVar9;
  }
  iVar4 = piVar5[(int)fVar1];
LAB_82317e84:
  iVar7 = iVar4 * 0x20 + param_2;
  *param_4 = *(unsigned __int64 *)(iVar4 * 0x20 + param_2);
  param_4[1] = *(unsigned __int64 *)(iVar7 + 8);
  param_4[2] = *(unsigned __int64 *)(iVar7 + 0x10);
  param_4[3] = *(unsigned __int64 *)(iVar7 + 0x18);
  return 1;
}

