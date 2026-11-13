extern unsigned int *auStack_4c;
extern int fn_8277E998();
extern int fn_827808F8();
extern int fn_82780C88();
extern int fn_82781180();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_50;


void fn_82781BA0(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float *pfVar12;
  float *pfVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  double dVar16;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  *(unsigned int *)(param_1 + 0x184) = 0;
  *(unsigned int *)(param_1 + 0x194) = 0;
  *(unsigned int *)(param_1 + 0x1a4) = 0;
  *(unsigned int *)(param_1 + 0x1c4) = 0;
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1d0) = 0;
  iVar4 = *(int *)(*(int *)(((unsigned int)((param_2 & 0xffffffff) >> 4) & 0xffffffc) +
                           *(int *)(param_1 + 0x160)) + ((unsigned int)param_2 & 0x3f) * 0x18);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) && (*(int *)(*(int *)(iVar4 + 4) + 4) != 0)) {
    *(unsigned int *)(param_1 + 0x174) = 0;
    puVar15 = (unsigned int *)(param_1 + 0x174);
    fn_8277E998(puVar15,iVar4);
    iVar4 = *(int *)(iVar4 + 4);
    fn_8277E998(puVar15,iVar4);
    puVar14 = *(unsigned int **)(iVar4 + 4);
    if (puVar14[1] != 0) {
      dVar16 = (double)lbl_821AAD20;
      do {
        uVar11 = *puVar15;
        uVar3 = *puVar14;
        uVar10 = uVar3 >> 0x1e & 1;
        auStack_4c[0] =
             *(unsigned int *)(*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                      ((uVar11 - 1) * 4 & 0x3fc));
        uStack_50 = uVar3;
        if (uVar10 == (auStack_4c[0] >> 0x1e & 1)) {
          if (1 < *puVar15) {
            do {
              iVar4 = *(int *)(param_1 + 0x110);
              uVar11 = *puVar15 - 1;
              uVar10 = *puVar15 - 2;
              pfVar12 = (float *)(*(int *)(((uVar3 & 0xbfffffff) >> 8 & 0xfffffc) + iVar4) +
                                 (uVar3 & 0x3ff) * 8);
              uVar11 = *(unsigned int *)(*(int *)((uVar11 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar11 * 4 & 0x3fc));
              uVar10 = *(unsigned int *)(*(int *)((uVar10 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar10 * 4 & 0x3fc));
              iVar6 = (uVar10 & 0x3ff) * 8;
              iVar5 = *(int *)(((uVar10 & 0xbfffffff) >> 8 & 0xfffffc) + iVar4);
              pfVar13 = (float *)(*(int *)(((uVar11 & 0xbfffffff) >> 8 & 0xfffffc) + iVar4) +
                                 (uVar11 & 0x3ff) * 8);
              fVar1 = pfVar13[1];
              fVar2 = *pfVar13;
              if ((unsigned int)((double)((fVar1 - pfVar12[1]) * (*(float *)(iVar5 + iVar6) - fVar2) -
                                 (*(float *)(iVar5 + iVar6 + 4) - fVar1) * (fVar2 - *pfVar12)) <
                        dVar16) != (uVar11 >> 0x1e & 1)) break;
              uVar8 = uVar10;
              if ((uVar11 >> 0x1e & 1) != 0) {
                uVar8 = uVar11;
                uVar11 = uVar10;
              }
              fn_82781180(param_1,uVar3,uVar8,uVar11);
              if (*puVar15 != 0) {
                *puVar15 = *puVar15 - 1;
              }
            } while (1 < *puVar15);
          }
        }
        else {
          while (1 < uVar11) {
            uVar7 = *(unsigned int *)
                     (*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                     ((uVar11 - 1) * 4 & 0x3fc));
            if (*puVar15 != 0) {
              *puVar15 = *puVar15 - 1;
            }
            iVar4 = *(int *)(((unsigned int)(((unsigned __int64)*puVar15 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                            *(int *)(param_1 + 0x180));
            iVar5 = (int)(((unsigned __int64)*puVar15 - 1 & 0xff) << 2);
            if (uVar10 == 0) {
              uVar9 = *(unsigned int *)(iVar4 + iVar5);
            }
            else {
              uVar9 = uVar7;
              uVar7 = *(unsigned int *)(iVar4 + iVar5);
            }
            fn_82781180(param_1,uVar3,uVar7,uVar9);
            uVar11 = *puVar15;
          }
          if (*puVar15 != 0) {
            *puVar15 = *puVar15 - 1;
          }
          fn_8277E998(puVar15,auStack_4c);
        }
        fn_8277E998(puVar15,&uStack_50);
        puVar14 = (unsigned int *)puVar14[1];
      } while (puVar14[1] != 0);
    }
    uVar3 = *puVar14;
    while (1 < *puVar15) {
      uVar11 = *(unsigned int *)(*(int *)((*puVar15 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                        ((*puVar15 - 1) * 4 & 0x3fc));
      if (*puVar15 != 0) {
        *puVar15 = *puVar15 - 1;
      }
      iVar4 = *(int *)(((unsigned int)(((unsigned __int64)*puVar15 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                      *(int *)(param_1 + 0x180));
      iVar5 = (int)(((unsigned __int64)*puVar15 - 1 & 0xff) << 2);
      if ((uVar11 >> 0x1e & 1) == 0) {
        uVar10 = *(unsigned int *)(iVar4 + iVar5);
        uVar8 = uVar11;
      }
      else {
        uVar8 = *(unsigned int *)(iVar4 + iVar5);
        uVar10 = uVar11;
      }
      fn_82781180(param_1,uVar3,uVar10,uVar8);
    }
    if (((3 < *(unsigned int *)(param_1 + 0x194)) && (3 < *(unsigned int *)(param_1 + 0x1a4))) &&
       (1 < *(int *)(param_1 + 0x1c8))) {
      if (*(unsigned int *)(param_1 + 0x1c4) < *(unsigned int *)(param_1 + 0x184)) {
        *(unsigned int *)(param_1 + 0x184) = *(unsigned int *)(param_1 + 0x1c4);
      }
      iVar4 = *(int *)(param_1 + 0x1c8);
      if ((iVar4 == 3) || (iVar4 == 4)) {
        fn_827808F8(param_1);
      }
      else if (iVar4 == 2) {
        fn_82780C88(param_1);
      }
    }
  }
  return;
}

