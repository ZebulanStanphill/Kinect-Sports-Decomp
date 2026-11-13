extern int fn_827EFC90();
extern unsigned int lbl_821902F0;
extern unsigned int lbl_821CA460;
extern unsigned int *lbl_832767EC;
extern unsigned int uRam8327f254;


void fn_82524E38(int param_1)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __int64 lVar9;
  int *piVar10;
  unsigned int uVar11;
  float *pfVar12;
  double dVar13;
  
  if (*(int *)(param_1 + 0x9c0) == 0) {
    puVar2 = (unsigned int *)**(int **)(param_1 + 0xa18);
    uVar3 = puVar2[1];
    iVar4 = *(int *)(*lbl_832767EC + 4);
    if (*puVar2 != 0) {
      uVar11 = 0;
      dVar13 = (double)lbl_821CA460;
      do {
        uVar5 = *(unsigned int *)(&lbl_821902F0 + uVar11 * 4);
        if ((((uVar11 == 0x1a) || (uVar11 == 0x1b)) || (uVar11 == 0x20)) ||
           (((uVar11 == 0x1d || (uVar11 == 0x1e)) || (uVar11 == 0x23)))) {
          pfVar12 = (float *)((uVar5 + 0x195) * 0x10 + param_1);
          iVar7 = uVar11 * 0x60 + uVar3;
          iVar6 = uVar5 * 0x10 + param_1;
          *pfVar12 = *(float *)(uVar11 * 0x60 + iVar4 + 0x50);
          *(unsigned int *)(iVar6 + 0x1954) = *(unsigned int *)(iVar7 + 0x54);
          fVar1 = *(float *)(iVar7 + 0x58);
          *(float *)(iVar6 + 0x1958) = fVar1;
        }
        else {
          iVar8 = uVar11 * 0x60 + uVar3;
          iVar7 = (uVar5 + 0x195) * 0x10;
          iVar6 = uVar5 * 0x10 + param_1;
          pfVar12 = (float *)(iVar7 + param_1);
          *(unsigned int *)(iVar7 + param_1) = *(unsigned int *)(iVar8 + 0x50);
          *(unsigned int *)(iVar6 + 0x1954) = *(unsigned int *)(uVar11 * 0x60 + iVar4 + 0x54);
          fVar1 = *(float *)(iVar8 + 0x58);
          *(float *)(iVar6 + 0x1958) = fVar1;
        }
        if (((((double)*pfVar12 != dVar13) || ((double)*(float *)(iVar6 + 0x1954) != dVar13)) ||
            ((double)fVar1 != dVar13)) &&
           ((*(int *)(param_1 + 0x319b8) == 0 ||
            (((((uVar11 != 0 && (uVar11 != 0xe)) && (uVar11 != 0x13)) &&
              ((uVar11 != 0x21 && (uVar11 != 0x24)))) && ((uVar11 != 1 && (uVar11 != 5)))))))) {
          if (*(int *)(param_1 + 0xb68) != 0) {
            fn_827EFC90(*(int *)(param_1 + 0xb68),uVar5 & 0xffff,uRam8327f254,pfVar12);
          }
          piVar10 = (int *)(param_1 + 0xb6c);
          lVar9 = 4;
          do {
            if (*piVar10 != 0) {
              fn_827EFC90(*piVar10,uVar5 & 0xffff,uRam8327f254,pfVar12);
            }
            lVar9 = lVar9 + -1;
            piVar10 = piVar10 + 1;
          } while (lVar9 != 0);
        }
        uVar11 = uVar11 + 1 & 0xffff;
      } while (uVar11 < *puVar2);
    }
  }
  return;
}

