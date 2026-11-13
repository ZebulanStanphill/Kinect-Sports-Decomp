extern int fn_822ABA88();
extern int fn_823AB478();
extern int fn_824B78B0();
extern int fn_82512508();
extern int fn_828EA5F8();
extern int fn_828EA610();
extern unsigned int lbl_83265988;


void fn_82423BB8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char cVar8;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  
  iVar4 = lbl_83265988;
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((((iVar2 == 0) || (*(int *)(iVar2 + 0x40) != 1)) &&
      (iVar2 = *(int *)(param_1 + 4), lbl_83265988 != 0)) &&
     (((cVar8 = fn_828EA610(lbl_83265988), cVar8 == '\0' &&
       (cVar8 = fn_828EA5F8(iVar4), cVar8 != '\0')) &&
      (cVar8 = fn_82512508(iVar4), cVar8 != '\0')))) {
    uVar14 = 0;
    piVar3 = *(int **)**(unsigned int **)(*(int *)(param_1 + 8) + 8);
    iVar5 = *piVar3;
    if (piVar3[1] - iVar5 >> 2 != 0) {
      iVar15 = 0;
      do {
        uVar13 = 0;
        if (*(int *)(*(int *)(iVar15 + iVar5) + 8) != 0) {
          do {
            iVar5 = fn_822ABA88(*(unsigned int *)(iVar15 + iVar5),uVar13);
            iVar5 = *(int *)(iVar5 + 0x74);
            if (iVar5 != 0) {
              iVar6 = fn_823AB478(iVar5);
              iVar7 = fn_823AB478(iVar4);
              if (iVar6 == iVar7) {
                iVar4 = *(int *)(iVar2 + 8);
                uVar1 = (*(int *)(iVar2 + 0xc) - iVar4) / 0x1ac;
                uVar13 = (unsigned __int64)(int)uVar1;
                uVar12 = -(unsigned __int64)(uVar14 + 1 < uVar13) & uVar14 + 1;
                if (uVar1 < 2) {
                  uVar9 = 0;
                }
                else {
                  iVar2 = (int)uVar12;
                  uVar12 = uVar12 + 1;
                  uVar9 = *(unsigned int *)(iVar2 * 0x1ac + iVar4 + 0x30);
                }
                uVar12 = -(unsigned __int64)(uVar12 < uVar13) & uVar12;
                if (uVar1 < 3) {
                  uVar10 = 0;
                }
                else {
                  iVar2 = (int)uVar12;
                  uVar12 = uVar12 + 1;
                  uVar10 = *(unsigned int *)(iVar2 * 0x1ac + iVar4 + 0x30);
                }
                if (uVar1 < 4) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(unsigned int *)
                            ((-(unsigned int)(uVar12 < uVar13) & (unsigned int)uVar12) * 0x1ac + iVar4 + 0x30);
                }
                fn_824B78B0(iVar5,(*(int *)(*(int *)(param_1 + 4) + 0xc) -
                                      *(int *)(*(int *)(param_1 + 4) + 8)) / 0x1ac,
                                *(unsigned int *)((int)uVar14 * 0x1ac + iVar4 + 0x30),uVar9,uVar10,
                                uVar11);
                return;
              }
            }
            iVar5 = *piVar3;
            uVar13 = uVar13 + 1;
          } while ((uVar13 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(iVar15 + iVar5) + 8));
        }
        uVar14 = uVar14 + 1;
        iVar15 = iVar15 + 4;
      } while ((uVar14 & 0xffffffff) < (unsigned __int64)(unsigned int)(piVar3[1] - iVar5 >> 2));
    }
  }
  return;
}

