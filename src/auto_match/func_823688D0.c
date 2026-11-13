extern int fn_82250A18();
extern int fn_82359AC8();
extern int fn_823CC7A0();
extern int fn_824B8348();
extern int fn_824B8440();
extern int fn_824B8548();
extern int fn_824BB8C8();
extern int fn_828EA5F8();
extern int fn_828EA840();
extern unsigned int lbl_82005748;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_98;


void fn_823688D0(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  char cVar9;
  unsigned __int64 uVar8;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  int aiStack_a0 [2];
  unsigned __int64 uStack_98;
  
  if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
    iVar15 = 0;
    if (((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) & 0xfffffffcU) != 0) {
      iVar14 = 0;
      dVar16 = (double)lbl_82005748;
      do {
        aiStack_a0[0] = 0;
        aiStack_a0[1] = 0;
        piVar5 = *(int **)(iVar14 + *(int *)(param_1 + 0x20));
        piVar13 = (int *)*piVar5;
        uVar6 = piVar5[1] - (int)piVar13 >> 2;
        lVar12 = (__int64)(int)uVar6;
        if (lVar12 != 0) {
          if (1 < uVar6) {
            aiStack_a0[1] = piVar13[1];
          }
          aiStack_a0[0] = *piVar13;
        }
        if (0 < (int)uVar6) {
          piVar13 = aiStack_a0;
          do {
            iVar3 = *(int *)(*piVar13 + 0x34);
            if (iVar3 != 0) {
              cVar9 = fn_828EA5F8(iVar3);
              if (cVar9 != '\0') {
                cVar9 = fn_828EA840(iVar3);
                if (*(int *)(param_1 + 0x4c0) == 0) {
                  if (lbl_832975B0 == 0) {
                    fn_82250A18();
                  }
                    /* WARNING: Subroutine does not return */
                  fn_823CC7A0();
                }
                cVar1 = *(char *)(*(int *)(param_1 + 0x4c0) + 0x148);
                if (cVar1 == '\x01') {
                  uVar6 = *(unsigned int *)(*(int *)(param_1 + 0xe20) + 0x94);
                  fVar2 = *(float *)(*(int *)(param_1 + 0xe20) + 0x98);
                  if (*(unsigned int *)(*(int *)(iVar3 + 0x100) + 0x8c4) < uVar6) {
                    *(unsigned int *)(*(int *)(iVar3 + 0x100) + 0x8c4) = uVar6;
                  }
                  uStack_98 = (unsigned __int64)((double)fVar2 * dVar16);
                  uVar7 = uStack_98;
                  if ((unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x100) + 0x8c8) <
                      (uStack_98 & 0xffffffff)) {
                    *(int *)(*(int *)(iVar3 + 0x100) + 0x8c8) = (((unsigned __int64)(uStack_98) >> 32) & 0xFFFFFFFF);
                  }
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8cc) =
                       *(int *)(*(int *)(iVar3 + 0x100) + 0x8cc) + 1;
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8d0) =
                       (((unsigned __int64)(uStack_98) >> 32) & 0xFFFFFFFF) + *(int *)(*(int *)(iVar3 + 0x100) + 0x8d0);
                  uStack_98 = uVar7;
                  if (cVar9 != '\0') {
                    uVar4 = *(unsigned int *)(*(int *)(param_1 + 0xe20) + 0x94);
                    uVar8 = fn_82359AC8(param_1);
                    fn_824B8440(iVar3,uVar8,uVar4);
                    uVar8 = fn_824B8548();
                    uVar10 = 0;
                    uVar11 = 1;
LAB_82368bd4:
                    fn_824BB8C8(uVar8,iVar3,0,uVar10,uVar11);
                  }
                }
                else if (cVar1 == '\x02') {
                  uVar6 = *(unsigned int *)(*(int *)(param_1 + 0xe20) + 0x94);
                  fVar2 = *(float *)(*(int *)(param_1 + 0xe20) + 0x98);
                  if (*(unsigned int *)(*(int *)(iVar3 + 0x100) + 0x8b8) < uVar6) {
                    *(unsigned int *)(*(int *)(iVar3 + 0x100) + 0x8b8) = uVar6;
                  }
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8bc) =
                       *(int *)(*(int *)(iVar3 + 0x100) + 0x8bc) + 1;
                  uStack_98 = (unsigned __int64)((double)fVar2 * dVar16);
                  *(int *)(*(int *)(iVar3 + 0x100) + 0x8c0) =
                       (int)uStack_98 + *(int *)(*(int *)(iVar3 + 0x100) + 0x8c0);
                  if (cVar9 != '\0') {
                    uVar4 = *(unsigned int *)(*(int *)(param_1 + 0xe20) + 0x94);
                    uVar8 = fn_82359AC8(param_1);
                    fn_824B8348(iVar3,uVar8,uVar4);
                    uVar8 = fn_824B8548();
                    uVar10 = 1;
                    uVar11 = 0;
                    goto LAB_82368bd4;
                  }
                }
              }
            }
            lVar12 = lVar12 + -1;
            piVar13 = piVar13 + 1;
          } while (lVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        iVar14 = iVar14 + 4;
      } while (iVar15 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
    }
  }
  return;
}

