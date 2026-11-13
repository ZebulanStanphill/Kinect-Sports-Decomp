#define true 1
extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_830D8E88();


unsigned __int64 fn_830C6850(int *param_1,unsigned int *param_2,int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char uVar7;
  short sVar8;
  int *piVar9;
  unsigned __int64 *puVar10;
  unsigned char *pbVar11;
  __int64 *plVar12;
  unsigned int uVar14;
  int iVar15;
  unsigned __int64 uVar13;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  char cVar22;
  int iVar24;
  unsigned __int64 uVar23;
  int iVar25;
  
  cVar22 = *(char *)((int)param_1 + 0x1d);
  uVar21 = (unsigned int)*(unsigned char *)((int)param_1 + 0x22);
  uVar17 = (unsigned __int64)*(unsigned char *)((int)param_2 + 5);
  uVar20 = *param_2 >> 0x14 & 3;
  if (cVar22 != '\0') {
    uVar21 = *param_2 >> 0x18 & 7;
  }
  uVar18 = 0;
  uVar23 = 0;
  do {
    uVar19 = uVar23;
    if ((uVar17 & 1) == 0) {
      *(unsigned char *)((int)param_2 + uVar18 + 8) = 0;
    }
    else {
      if (((*param_2 & 0x10000000) != 0) && (cVar22 == '\0')) {
        piVar9 = (int *)param_1[0x98];
        puVar10 = (unsigned __int64 *)*param_1;
        if (piVar9 == (int *)0x0) {
          iVar24 = 0;
          *(unsigned int *)((int)puVar10 + 0x14) = 3;
        }
        else {
          iVar15 = *piVar9;
          sVar8 = *(short *)((int)((*puVar10 >> (0x40 - (unsigned __int64)*(unsigned char *)(piVar9 + 2) & 0x7f) &
                                   0xffffffff) << 1) + iVar15);
          uVar23 = (unsigned __int64)sVar8;
          if (sVar8 < 0) {
            fn_82C4E470(puVar10);
            do {
              uVar13 = *puVar10;
              fn_82C4E470(puVar10,1);
              sVar8 = *(short *)((int)(((uVar23 - ((__int64)uVar13 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar15);
              uVar23 = (unsigned __int64)sVar8;
              iVar24 = (int)sVar8;
            } while (sVar8 < 0);
          }
          else {
            iVar15 = *(int *)(puVar10 + 1);
            iVar24 = (int)(uVar23 & 0xf);
            *puVar10 = *puVar10 << (uVar23 & 0xf);
            *(int *)(puVar10 + 1) = iVar15 - iVar24;
            if (iVar15 < iVar24) {
              do {
                pbVar11 = *(unsigned char **)((int)puVar10 + 0xc);
                if (pbVar11 < (unsigned char *)(*(int *)(puVar10 + 2) - 4U)) {
                  bVar6 = *pbVar11;
                  bVar1 = pbVar11[1];
                  bVar2 = pbVar11[2];
                  bVar3 = pbVar11[3];
                  bVar4 = pbVar11[4];
                  bVar5 = pbVar11[5];
                  iVar15 = *(int *)(puVar10 + 1);
                  *(unsigned char **)((int)puVar10 + 0xc) = pbVar11 + 6;
                  *(int *)(puVar10 + 1) = iVar15 + 0x30;
                  *puVar10 = ((((((unsigned __int64)bVar6 * 0x100 + (unsigned __int64)bVar1) * 0x100 +
                                (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                              (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                             ((__int64)-iVar15 & 0x7fU)) + *puVar10;
                  goto LAB_830c69c8;
                }
                iVar15 = fn_82C4E3B0(puVar10);
              } while (iVar15 == 1);
              iVar24 = (int)sVar8 >> 4;
            }
            else {
LAB_830c69c8:
              iVar24 = (int)sVar8 >> 4;
            }
          }
        }
        if (*(int *)(*param_1 + 0x14) != 0) {
          return 1;
        }
        uVar21 = (unsigned int)*(unsigned char *)((int)param_1 + iVar24 + 0x2ac);
        uVar20 = (unsigned int)*(unsigned char *)((int)param_1 + iVar24 + 0x2b4);
      }
      *(char *)((int)param_2 + uVar18 + 8) = (char)uVar21;
      if (uVar21 == 0) {
        iVar15 = *(int *)(param_3 + 0x14);
        uVar14 = fn_830D8E88(param_1,param_1[0x65],*(unsigned char *)(param_1 + 0x28),iVar15);
        if (uVar14 == 0xffffffff) {
          **(unsigned char **)(param_3 + 0x18) = 0;
          return 0xffffffffffffffff;
        }
        uVar19 = uVar19 | 1;
        cVar22 = '\0';
        *(unsigned int *)(param_3 + 0x14) = (uVar14 & 0x7f) * 2 + iVar15;
        **(unsigned char **)(param_3 + 0x18) = (char)uVar14;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1;
      }
      else {
        if (uVar21 == 4) {
          puVar10 = (unsigned __int64 *)*param_1;
          iVar15 = *(int *)param_1[0x99];
          sVar8 = *(short *)((int)((*puVar10 >> 0x3a) << 1) + iVar15);
          uVar23 = (unsigned __int64)sVar8;
          if (sVar8 < 0) {
            fn_82C4E470(puVar10,6);
            do {
              uVar13 = *puVar10;
              fn_82C4E470(puVar10,1);
              sVar8 = *(short *)((int)(((uVar23 - ((__int64)uVar13 >> 0x3f)) + 0x8000 & 0xffffffff)
                                      << 1) + iVar15);
              uVar23 = (unsigned __int64)sVar8;
              iVar24 = (int)sVar8;
            } while (sVar8 < 0);
          }
          else {
            iVar15 = *(int *)(puVar10 + 1);
            iVar24 = (int)(uVar23 & 0xf);
            *puVar10 = *puVar10 << (uVar23 & 0xf);
            *(int *)(puVar10 + 1) = iVar15 - iVar24;
            if (iVar15 < iVar24) {
              do {
                pbVar11 = *(unsigned char **)((int)puVar10 + 0xc);
                if (pbVar11 < (unsigned char *)(*(int *)(puVar10 + 2) - 4U)) {
                  bVar6 = *pbVar11;
                  bVar1 = pbVar11[1];
                  bVar2 = pbVar11[2];
                  bVar3 = pbVar11[3];
                  bVar4 = pbVar11[4];
                  bVar5 = pbVar11[5];
                  iVar15 = *(int *)(puVar10 + 1);
                  *(unsigned char **)((int)puVar10 + 0xc) = pbVar11 + 6;
                  *(int *)(puVar10 + 1) = iVar15 + 0x30;
                  *puVar10 = ((((((unsigned __int64)bVar1 + (unsigned __int64)bVar6 * 0x100) * 0x100 +
                                (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3) * 0x100 +
                              (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5 <<
                             ((__int64)-iVar15 & 0x7fU)) + *puVar10;
                  goto LAB_830c6b6c;
                }
                iVar15 = fn_82C4E3B0(puVar10);
              } while (iVar15 == 1);
              iVar24 = (int)sVar8 >> 4;
            }
            else {
LAB_830c6b6c:
              iVar24 = (int)sVar8 >> 4;
            }
          }
          uVar14 = iVar24 + 1;
          if (*(int *)(*param_1 + 0x14) != 0) {
            return 1;
          }
        }
        else {
          uVar14 = uVar20;
          if ((cVar22 == '\0') && ((*param_2 & 0x10000000) == 0)) {
            plVar12 = (__int64 *)*param_1;
            lVar16 = *plVar12;
            uVar14 = *(unsigned int *)(plVar12 + 1);
            *plVar12 = lVar16 << 1;
            *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar14 - 1);
            if ((__int64)((unsigned __int64)uVar14 - 1) < 0) {
              fn_82C4E5E8();
            }
            if (lVar16 < 0) {
              plVar12 = (__int64 *)*param_1;
              lVar16 = *plVar12;
              uVar14 = *(unsigned int *)(plVar12 + 1);
              *plVar12 = lVar16 << 1;
              *(int *)(plVar12 + 1) = (int)((unsigned __int64)uVar14 - 1);
              if ((__int64)((unsigned __int64)uVar14 - 1) < 0) {
                fn_82C4E5E8();
              }
              uVar14 = 1 - (int)(lVar16 >> 0x3f);
            }
            else {
              uVar14 = 3;
            }
          }
        }
        bVar6 = *(unsigned char *)((int)param_1 + uVar14 + 0x140);
        uVar19 = (__int64)(int)(uVar21 << 4 | uVar14) | uVar19;
        if (bVar6 == 0) {
          return 1;
        }
        iVar15 = param_1[0x65];
        iVar24 = *(int *)(param_3 + 0x18);
        iVar25 = 0;
        uVar23 = (unsigned __int64)*(unsigned int *)(param_3 + 0x14);
        uVar7 = *(unsigned char *)((int)param_1 + uVar21 + 0xa0);
        if (bVar6 != 0) {
          do {
            uVar13 = fn_830D8E88(param_1,iVar15,uVar7,uVar23);
            if ((int)uVar13 == -1) {
              *(unsigned char *)(iVar25 + iVar24) = 0;
            }
            else {
              *(char *)(iVar25 + iVar24) = (char)uVar13;
              uVar23 = (uVar13 & 0x7f) * 2 + uVar23;
            }
            iVar25 = iVar25 + 1;
          } while (iVar25 < (int)(unsigned int)bVar6);
        }
        if ((int)uVar23 == -1) {
          return 1;
        }
        *(int *)(param_3 + 0x14) = (int)uVar23;
        cVar22 = '\0';
        *(unsigned int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + (unsigned int)bVar6;
      }
    }
    uVar18 = uVar18 + 1;
    uVar17 = uVar17 >> 1;
    uVar23 = uVar19 << 8;
    if (5 < uVar18) {
      *(unsigned __int64 *)(*(int *)(param_3 + 4) * 8 + param_1[0x148]) =
           ((unsigned __int64)*(unsigned char *)(param_2 + 1) << 8 | (unsigned __int64)(*param_2 >> 2) & 0xc0 |
           (unsigned __int64)*(unsigned char *)((int)param_2 + 5)) << 0x30 | uVar19 & 0xffffffffffffff;
      return 0;
    }
  } while( true );
}

