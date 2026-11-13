typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829533F0();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern int memcpy();


__int64 fn_829A7050(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar9;
  int iVar10;
  __int64 lVar8;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int iVar13;
  bool bVar14;
  unsigned char *pbVar15;
  int iVar16;
  unsigned char *pbVar17;
  unsigned char *pbVar18;
  unsigned int uVar19;
  unsigned __int64 uVar20;
  int aiStack_60;
  
  puVar12 = (unsigned int *)param_1[0x41];
  uVar4 = *puVar12 & 0xfffff;
  if (uVar4 < 3) {
    return 0;
  }
  puVar9 = (unsigned int *)fn_829533F0(param_1,0x10000002,puVar12,0,2,1);
  if ((((puVar9 == (unsigned int *)0x0) &&
       (puVar9 = (unsigned int *)fn_829533F0(param_1,0x10000003,puVar12,0,2,1), puVar9 == (unsigned int *)0x0)
       ) && (puVar9 = (unsigned int *)fn_829533F0(param_1,0x10000004,puVar12,0,2,1),
            puVar9 == (unsigned int *)0x0)) ||
     (*(int *)(*(int *)(*(int *)puVar9[4] * 4 + param_1[5]) + 4) != param_1[0x21])) {
LAB_829a7250:
    if ((uVar4 == 3) && (0x1ff < *(unsigned short *)((int)param_1 + 0xca))) {
      puVar3 = (unsigned int *)param_1[0x41];
      pbVar18 = (unsigned char *)puVar3[2];
      pbVar17 = pbVar18 + 0xc;
      pbVar15 = pbVar18 + 0xc;
      do {
        bVar1 = *pbVar18;
        bVar2 = *pbVar17;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar18 = pbVar18 + 1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar18 != pbVar15);
      if ((((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
          (puVar11 = (unsigned int *)fn_829533F0(param_1,0x10700001,puVar3,0,2,1),
          puVar11 != (unsigned int *)0x0)) &&
         ((puVar12 = (unsigned int *)fn_829533F0(param_1,0x20500003,puVar11,&aiStack_60,2,1),
          puVar12 != (unsigned int *)0x0 ||
          (puVar12 = (unsigned int *)fn_829533F0(param_1,0x20500004,puVar11,&aiStack_60,2,1),
          puVar12 != (unsigned int *)0x0)))) {
        pbVar18 = (unsigned char *)puVar3[2];
        uVar4 = *puVar12;
        iVar10 = param_1[5];
        uVar6 = uVar4 & 0xfffff;
        iVar7 = (uVar4 & 0xfffff) * 4;
        pbVar17 = (unsigned char *)(iVar7 + puVar12[2]);
        pbVar15 = pbVar17 + 0xc;
        iVar13 = *(int *)(*(int *)pbVar18 * 4 + iVar10);
        iVar5 = *(int *)(*(int *)puVar12[4] * 4 + iVar10);
        do {
          bVar1 = *pbVar17;
          bVar2 = *pbVar18;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar17 = pbVar17 + 1;
          pbVar18 = pbVar18 + 1;
        } while (pbVar17 != pbVar15);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          uVar19 = 0;
          if ((uVar4 & 0xfffff) != 0) {
            iVar16 = 0;
            do {
              if (*(unsigned int *)(*(int *)(*(int *)(iVar16 + (int)puVar12[4]) * 4 + iVar10) + 0x10) !=
                  uVar19) {
                return 0;
              }
              uVar19 = uVar19 + 1;
              iVar16 = iVar16 + 4;
            } while (uVar19 < uVar6);
          }
          if ((*(int *)(iVar13 + 4) != *(int *)(iVar5 + 4)) ||
             (*(int *)(iVar13 + 0xc) != *(int *)(iVar5 + 0xc))) {
            iVar10 = fn_82963998(0x74);
            if (iVar10 == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = fn_829632A0();
            }
            if (iVar10 == 0) {
              return -0x7ff8fff2;
            }
            lVar8 = fn_82963A30(iVar10,uVar6 | 0x70200000,uVar6,uVar6,0);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
            lVar8 = fn_829632F0(iVar10,puVar12);
            if ((int)lVar8 < 0) {
              return lVar8;
            }
            memcpy(*(unsigned int *)(iVar10 + 0x10),puVar12[4],iVar7);
            memcpy(*(unsigned int *)(iVar10 + 8),iVar7 + puVar12[2],iVar7);
            iVar13 = (**(int (***)())(*param_1 + 0x20))(param_1,iVar10,0);
            if (iVar13 == 0) {
              *puVar3 = 0;
              *puVar11 = 0;
              *puVar12 = 0;
              iVar13 = (**(int (***)())(*param_1 + 0x34))(param_1,iVar10,aiStack_60);
              if (iVar13 == 0) {
                iVar13 = *(int *)(aiStack_60 * 4 + param_1[6]);
                if (iVar13 != 0) {
                  fn_82BA02A8(iVar13);
                  fn_829639F0(iVar13);
                }
                *(int *)(aiStack_60 * 4 + param_1[6]) = iVar10;
                return 0;
              }
              *puVar3 = 0x50000003;
              *puVar11 = 0x10700001;
              *puVar12 = uVar6 | 0x20500000;
            }
            fn_82BA02A8(iVar10);
            fn_829639F0(iVar10);
          }
        }
      }
    }
  }
  else {
    bVar14 = true;
    uVar20 = (unsigned __int64)*puVar9 & 0xfffff;
    if ((*puVar9 & 0xfffff) != 0) {
      iVar10 = 0;
      do {
        if ((*(int *)(iVar10 + puVar9[2]) != *(int *)puVar12[4]) ||
           ((*(unsigned int *)(*(int *)(*(int *)(iVar10 + puVar9[2]) * 4 + param_1[5]) + 0x34) & 0x1ffe00)
            != 0)) {
          bVar14 = false;
        }
        iVar10 = iVar10 + 4;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      if (!bVar14) goto LAB_829a7250;
    }
    iVar10 = fn_82963998(0x74);
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = fn_829632A0();
    }
    if (iVar10 == 0) {
      return -0x7ff8fff2;
    }
    lVar8 = fn_82963A30(iVar10,uVar4 | 0x50000000,puVar12[1],puVar9[3],0);
    if ((lVar8 < 0) || (lVar8 = fn_829632F0(iVar10,puVar12), lVar8 < 0)) {
      fn_82BA02A8(iVar10);
      fn_829639F0(iVar10);
      return lVar8;
    }
    memcpy(*(unsigned int *)(iVar10 + 0x10),puVar9[4],*(int *)(iVar10 + 0xc) << 2);
    memcpy(*(unsigned int *)(iVar10 + 8),puVar12[2],*(int *)(iVar10 + 4) << 2);
    *puVar9 = 0;
    iVar13 = param_1[0x41];
    if (iVar13 != 0) {
      fn_82BA02A8(iVar13);
      fn_829639F0(iVar13);
    }
    *(int *)(param_1[0x40] * 4 + param_1[6]) = iVar10;
    param_1[0x41] = iVar10;
  }
  return 0;
}

