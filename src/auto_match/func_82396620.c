extern int fn_8225F160();
extern int fn_822AA7E0();
extern int fn_822ABA88();
extern int fn_82359AC8();
extern int fn_823A0BD0();
extern int fn_824B7B48();
extern int fn_824B7CA0();
extern int fn_824B7DA8();
extern int fn_824B8548();
extern int fn_824BA378();
extern int fn_828EA5F8();
extern int fn_828EA840();
extern unsigned int lbl_83265988;


void fn_82396620(int param_1)

{
  float fVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar5;
  char cVar7;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  
  if ((*(int *)(param_1 + 0xa0) == 0) || (*(int *)(*(int *)(param_1 + 0xa0) + 0x40) != 1)) {
    piVar11 = *(int **)(param_1 + 8);
    lVar12 = 0;
    if ((piVar11[1] - *piVar11 & 0xfffffffcU) != 0) {
      iVar14 = 0;
      do {
        iVar5 = *piVar11;
        uVar13 = 0;
        if (*(int *)(*(int *)((*(int **)(iVar14 + iVar5))[4] * 4 + **(int **)(iVar14 + iVar5)) + 8)
            != 0) {
          do {
            iVar5 = fn_822ABA88(*(unsigned int *)
                                  ((*(int **)(iVar14 + iVar5))[4] * 4 + **(int **)(iVar14 + iVar5)),
                                 uVar13);
            if ((*(int *)(iVar5 + 0x24) != 0) && (iVar5 = *(int *)(iVar5 + 0x74), iVar5 != 0)) {
              cVar7 = fn_828EA5F8(iVar5);
              if (cVar7 != '\0') {
                fn_823A0BD0(param_1 + 0x8d4,iVar5,lVar12,uVar13);
                cVar7 = fn_828EA840(iVar5);
                if (cVar7 != '\0') {
                  if (*(int *)(param_1 + 0x178) == 1) {
                    piVar11 = *(int **)(**(int **)(param_1 + 8) + iVar14);
                    fVar1 = *(float *)(*(int *)(piVar11[4] * 4 + *piVar11) + 0x20);
                    uVar4 = fn_82359AC8(param_1);
                    fn_824B7CA0(iVar5,uVar4,(int)fVar1);
                    uVar4 = fn_824B8548();
                    uVar8 = 0;
                    uVar9 = 1;
LAB_8239686c:
                    uVar10 = 0;
                  }
                  else {
                    if (*(int *)(param_1 + 0x178) != 2) {
                      iVar6 = **(int **)(param_1 + 8);
                      uVar4 = fn_822AA7E0(*(unsigned int *)(iVar14 + iVar6));
                      uVar3 = (unsigned int)((unsigned __int64)LZCOUNT((int)lVar12) >> 3) & 4;
                      uVar9 = fn_822AA7E0(*(unsigned int *)(uVar3 + iVar6));
                      piVar11 = *(int **)(iVar14 + **(int **)(param_1 + 8));
                      piVar2 = *(int **)(**(int **)(param_1 + 8) + uVar3);
                      dVar16 = (double)*(float *)(*(int *)(piVar11[4] * 4 + *piVar11) + 0x20);
                      dVar15 = (double)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
                      if (iVar5 == lbl_83265988) {
                        iVar6 = fn_8225F160();
                        fn_824B7B48(iVar5,*(unsigned int *)(iVar6 + 0x14),uVar4,uVar9,
                                          (int)dVar16,(int)dVar15);
                      }
                      iVar6 = fn_8225F160();
                      uVar8 = *(unsigned int *)(iVar6 + 0x14);
                      uVar4 = fn_824B8548();
                      uVar9 = 0;
                      goto LAB_8239686c;
                    }
                    piVar11 = *(int **)(**(int **)(param_1 + 8) + iVar14);
                    fVar1 = *(float *)(*(int *)(piVar11[4] * 4 + *piVar11) + 0x20);
                    uVar4 = fn_82359AC8(param_1);
                    fn_824B7DA8(iVar5,uVar4,(int)fVar1);
                    uVar4 = fn_824B8548();
                    uVar8 = 0;
                    uVar9 = 0;
                    uVar10 = 1;
                  }
                  fn_824BA378(uVar4,iVar5,uVar8,uVar9,uVar10);
                }
              }
            }
            piVar11 = *(int **)(param_1 + 8);
            uVar13 = uVar13 + 1;
            iVar5 = *piVar11;
          } while ((uVar13 & 0xffffffff) <
                   (unsigned __int64)
                   *(unsigned int *)(*(int *)((*(int **)(iVar14 + iVar5))[4] * 4 +
                                     **(int **)(iVar14 + iVar5)) + 8));
        }
        lVar12 = lVar12 + 1;
        iVar14 = iVar14 + 4;
      } while ((int)lVar12 < piVar11[1] - *piVar11 >> 2);
    }
  }
  return;
}

