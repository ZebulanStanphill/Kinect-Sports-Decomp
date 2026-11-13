typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82BA0FD8();
extern int fn_82BA4058();
extern int fn_82BBFE28();


void fn_82BB68B0(int *param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  unsigned int uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char cVar11;
  unsigned int uVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  
  iVar10 = *(int *)(param_1[1] + 0x88);
  uVar2 = *(unsigned int *)(*(int *)(*(int *)(param_1[1] + 0xc) + 0x550) + 4);
  iVar18 = *(int *)(iVar10 + 8);
  while (iVar18 != 0) {
    uVar7 = fn_82BA0FD8(uVar2,*(unsigned int *)(*param_1 + 0x5b0));
    *(unsigned int *)(iVar10 + 0x68) = uVar7;
    uVar7 = fn_82BA0FD8(uVar2,*(unsigned int *)(*param_1 + 0x5b0));
    piVar9 = *(int **)(iVar10 + 0x1c);
    *(unsigned int *)(iVar10 + 100) = uVar7;
    for (; piVar9[2] != 0; piVar9 = (int *)piVar9[2]) {
      if (((piVar9[0x39] & 1U) != 0) && (iVar18 = 1, 0 < piVar9[5])) {
        iVar19 = 0;
        piVar17 = piVar9 + 0x3b;
        do {
          iVar4 = *piVar17;
          if ((*(unsigned int *)(iVar4 + 0xe4) >> 6 & 1) != 0) {
            iVar8 = (**(int (***)())(*piVar9 + 0x2c))(piVar9);
            if (iVar8 == 0) {
              iVar8 = *(int *)(iVar10 + 100);
              iVar15 = ((*(unsigned int *)(iVar4 + 0x38) >> 5) + 2) * 4;
              uVar12 = 1 << (*(unsigned int *)(iVar4 + 0x38) & 0x1f) | *(unsigned int *)(iVar15 + iVar8);
            }
            else {
              if (iVar18 - 1U < *(unsigned int *)(*(int *)(iVar10 + 0x3c) + 4)) {
                piVar16 = (int *)(*(int *)(*(int *)(iVar10 + 0x3c) + 8) + iVar19);
              }
              else {
                piVar16 = (int *)0x0;
              }
              iVar8 = *(int *)(*piVar16 + 100);
              iVar15 = ((*(unsigned int *)(iVar4 + 0x38) >> 5) + 2) * 4;
              uVar12 = 1 << (*(unsigned int *)(iVar4 + 0x38) & 0x1f) | *(unsigned int *)(iVar15 + iVar8);
            }
            *(unsigned int *)(iVar15 + iVar8) = uVar12;
          }
          iVar18 = iVar18 + 1;
          piVar17 = piVar17 + 1;
          iVar19 = iVar19 + 4;
        } while (iVar18 <= piVar9[5]);
      }
    }
    iVar10 = *(int *)(iVar10 + 8);
    iVar18 = *(int *)(iVar10 + 8);
  }
  piVar9 = (int *)fn_82BA4058(param_1[1]);
  do {
    bVar6 = false;
    iVar18 = 1;
    iVar10 = fn_82BBFE28((unsigned __int64)(unsigned int)param_1[1] + 0x80);
    piVar17 = piVar9;
    if (0 < iVar10) {
      do {
        piVar16 = (int *)piVar17[1];
        cVar11 = (**(int (***)())(*piVar16 + 8))(piVar16);
        if (cVar11 == '\0') {
          puVar3 = (unsigned int *)piVar16[0x1a];
          uVar12 = 0;
          if (*puVar3 != 0) {
            puVar13 = puVar3 + 1;
            do {
              uVar12 = uVar12 + 1;
              puVar13 = puVar13 + 1;
              *puVar13 = 0;
            } while (uVar12 < *puVar3);
          }
          bVar5 = true;
          iVar10 = 0;
          iVar19 = 0;
          uVar12 = 1;
          while( true ) {
            bVar1 = uVar12 <= *(unsigned int *)(piVar16[0xe] + 4);
            if (bVar1) {
              iVar10 = *(int *)(*(int *)(piVar16[0xe] + 8) + iVar19);
            }
            uVar14 = 0;
            if (!bVar1) break;
            iVar4 = *(int *)(iVar10 + 100);
            if (bVar5) {
              puVar3 = (unsigned int *)piVar16[0x1a];
              if (*puVar3 != 0) {
                puVar13 = puVar3 + 2;
                do {
                  uVar14 = uVar14 + 1;
                  *puVar13 = *(unsigned int *)((iVar4 - (int)puVar3) + (int)puVar13);
                  puVar13 = puVar13 + 1;
                } while (uVar14 < *puVar3);
              }
              bVar5 = false;
            }
            else {
              puVar3 = (unsigned int *)piVar16[0x1a];
              if (*puVar3 != 0) {
                puVar13 = puVar3 + 2;
                do {
                  uVar14 = uVar14 + 1;
                  *puVar13 = *(unsigned int *)((iVar4 - (int)puVar3) + (int)puVar13) | *puVar13;
                  puVar13 = puVar13 + 1;
                } while (uVar14 < *puVar3);
              }
            }
            uVar12 = uVar12 + 1;
            iVar19 = iVar19 + 4;
          }
          puVar3 = (unsigned int *)piVar16[0x19];
          if (*puVar3 != 0) {
            iVar10 = 8;
            do {
              if ((*(unsigned int *)(piVar16[0x1a] + iVar10) | *(unsigned int *)((int)puVar3 + iVar10)) !=
                  *(unsigned int *)((int)puVar3 + iVar10)) {
                bVar5 = false;
                goto LAB_82bb6ba0;
              }
              uVar14 = uVar14 + 1;
              iVar10 = iVar10 + 4;
            } while (uVar14 < *puVar3);
          }
          bVar5 = true;
LAB_82bb6ba0:
          if (!bVar5) {
            bVar6 = true;
            iVar10 = piVar16[0x1a];
            uVar12 = 0;
            if (*puVar3 != 0) {
              puVar13 = puVar3 + 2;
              do {
                uVar12 = uVar12 + 1;
                *puVar13 = *(unsigned int *)((iVar10 - (int)puVar3) + (int)puVar13) | *puVar13;
                puVar13 = puVar13 + 1;
              } while (uVar12 < *puVar3);
            }
          }
        }
        iVar18 = iVar18 + 1;
        iVar10 = fn_82BBFE28((unsigned __int64)(unsigned int)param_1[1] + 0x80);
        piVar17 = piVar17 + 1;
      } while (iVar18 <= iVar10);
    }
    if (!bVar6) {
      return;
    }
  } while( true );
}

