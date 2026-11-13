#define true 1
extern int fn_82BA05E8();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern int fn_82BC24F0();
extern int fn_82BC5538();
extern int fn_82BC59C8();
extern unsigned int uStack_a0;


void fn_82BB3490(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int *param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  unsigned char *puVar7;
  unsigned int *puVar8;
  char *pcVar9;
  int iVar10;
  unsigned int *puVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  int iVar18;
  unsigned int uStack_a0;
  
  uVar13 = (unsigned __int64)uStack_a0;
  *(unsigned int *)(param_3 + 4) = 0;
  *(unsigned int *)(param_4 + 4) = 0;
  *(unsigned int *)(param_5 + 4) = 0;
  *(unsigned int *)(param_6 + 4) = 0;
  *(unsigned int *)(param_7 + 4) = 0;
  iVar10 = 0;
  for (uVar14 = 1; uVar14 <= *(unsigned int *)(*(int *)(param_2 + 0x38) + 4); uVar14 = uVar14 + 1) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_2 + 0x38) + 8) + iVar10);
    iVar4 = fn_82BC59C8(iVar5,param_2);
    uVar1 = *(unsigned int *)(param_1 + 0x864);
    uVar13 = (unsigned __int64)uVar1;
    for (piVar12 = *(int **)(iVar5 + 0x1c); piVar12[2] != 0; piVar12 = (int *)piVar12[2]) {
      if ((((piVar12[0x39] & 1U) != 0) &&
          (iVar5 = (**(int (***)())(*piVar12 + 0x2c))(piVar12), iVar5 != 0)) &&
         ((iVar18 = *(int *)((iVar4 + 0x3a) * 4 + iVar5),
          *(int *)(iVar5 + 0x38) != *(int *)(iVar18 + 0x38) ||
          (*(int *)(iVar5 + 0x50) != *(int *)(iVar18 + 0x50))))) {
        if ((int)uVar1 < (int)*(unsigned int *)(iVar5 + 0x37c)) {
          uVar16 = (*(unsigned int *)(iVar5 + 0x37c) - uVar13) - 1;
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_7,*(unsigned int *)(param_7 + 4));
          *piVar6 = iVar5;
          uVar16 = (unsigned __int64)*(unsigned int *)(param_7 + 4) - 1;
          *(unsigned int *)(iVar5 + 0x37c) = (int)uVar16 + uVar1 + 1;
        }
        if ((int)uVar1 < (int)*(unsigned int *)(iVar18 + 0x37c)) {
          uVar17 = (*(unsigned int *)(iVar18 + 0x37c) - uVar13) - 1;
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_7,*(unsigned int *)(param_7 + 4));
          *piVar6 = iVar18;
          uVar17 = (unsigned __int64)*(unsigned int *)(param_7 + 4) - 1;
          *(unsigned int *)(iVar18 + 0x37c) = (int)uVar17 + uVar1 + 1;
        }
        iVar5 = (int)uVar16;
        piVar6 = (int *)fn_82BC0088(param_4,*(unsigned int *)(param_4 + 4));
        *piVar6 = (int)((uVar17 & 0xffffffff) << 0x10) + iVar5;
        iVar18 = (int)uVar17;
        if ((uVar17 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_5 + 4)) {
          piVar6 = (int *)(iVar18 * 4 + *(int *)(param_5 + 8));
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_5,uVar17);
        }
        *piVar6 = iVar18;
        if ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_5 + 4)) {
          piVar6 = (int *)(iVar5 * 4 + *(int *)(param_5 + 8));
        }
        else {
          piVar6 = (int *)fn_82BC0088(param_5,uVar16);
        }
        *piVar6 = iVar5;
        if ((uVar17 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_3 + 4)) {
          puVar7 = (unsigned char *)(iVar18 * 4 + *(int *)(param_3 + 8));
        }
        else {
          puVar7 = (unsigned char *)fn_82BC0088(param_3,uVar17);
        }
        *puVar7 = 1;
      }
    }
    iVar10 = iVar10 + 4;
  }
  uVar16 = (unsigned __int64)*(unsigned int *)(param_4 + 4) - 1;
  if (-1 < (__int64)uVar16) {
    lVar15 = (uVar16 & 0x3fffffff) << 2;
    do {
      if ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_4 + 4)) {
        puVar8 = (unsigned int *)(*(int *)(param_4 + 8) + (int)lVar15);
      }
      else {
        puVar8 = (unsigned int *)fn_82BC0088(param_4,uVar16);
      }
      uVar14 = *puVar8;
      if ((uVar14 & 0xffff) < *(unsigned int *)(param_3 + 4)) {
        pcVar9 = (char *)((uVar14 & 0xffff) * 4 + *(int *)(param_3 + 8));
      }
      else {
        pcVar9 = (char *)fn_82BC0088(param_3);
      }
      if (*pcVar9 != '\x01') {
        puVar8 = (unsigned int *)fn_82BC0088(param_6,*(unsigned int *)(param_6 + 4));
        *puVar8 = uVar14;
        fn_82BBFFC8(param_4,uVar16);
      }
      uVar16 = uVar16 - 1;
      lVar15 = lVar15 + -4;
    } while (-1 < (__int64)uVar16);
  }
  do {
    if (*(int *)(param_6 + 4) == 0) {
      if (*(int *)(param_4 + 4) == 0) {
        *(int *)(param_1 + 0x864) = *(int *)(param_1 + 0x864) + *(int *)(param_7 + 4);
        return;
      }
    }
    else {
      do {
        uVar16 = (unsigned __int64)*(unsigned int *)(param_6 + 4) - 1;
        if ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_6 + 4)) {
          puVar8 = (unsigned int *)((int)uVar16 * 4 + *(int *)(param_6 + 8));
        }
        else {
          puVar8 = (unsigned int *)fn_82BC0088(param_6,uVar16);
        }
        uVar14 = *puVar8;
        uVar1 = (int)uVar14 >> 0x10;
        uVar3 = uVar14 & 0xffff;
        fn_82BBFFC8(param_6,uVar16);
        if (uVar3 < *(unsigned int *)(param_7 + 4)) {
          piVar12 = (int *)((uVar14 & 0xffff) * 4 + *(int *)(param_7 + 8));
        }
        else {
          piVar12 = (int *)fn_82BC0088(param_7,uVar3);
        }
        uVar2 = *(unsigned int *)(*piVar12 + 0x38);
        if (uVar1 < *(unsigned int *)(param_5 + 4)) {
          puVar8 = (unsigned int *)(uVar1 * 4 + *(int *)(param_5 + 8));
        }
        else {
          puVar8 = (unsigned int *)fn_82BC0088(param_5,uVar1);
        }
        uVar14 = *puVar8;
        iVar10 = fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
        *(unsigned int *)(iVar10 + 0x50) = 0;
        *(unsigned int *)(iVar10 + 0x38) = uVar2;
        if (uVar14 < *(unsigned int *)(param_7 + 4)) {
          puVar11 = (unsigned int *)(uVar14 * 4 + *(int *)(param_7 + 8));
        }
        else {
          puVar11 = (unsigned int *)fn_82BC0088(param_7,uVar14);
        }
        fn_82BA05E8(iVar10,1,*puVar11);
        fn_82BC5538(param_2,iVar10);
        if (uVar1 < *(unsigned int *)(param_5 + 4)) {
          puVar8 = (unsigned int *)(uVar1 * 4 + *(int *)(param_5 + 8));
        }
        else {
          puVar8 = (unsigned int *)fn_82BC0088(param_5,uVar1);
        }
        *puVar8 = uVar3;
        uVar16 = (unsigned __int64)*(unsigned int *)(param_4 + 4) - 1;
        if (-1 < (__int64)uVar16) {
          lVar15 = (uVar16 & 0x3fffffff) << 2;
          do {
            if ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_4 + 4)) {
              puVar8 = (unsigned int *)(*(int *)(param_4 + 8) + (int)lVar15);
            }
            else {
              puVar8 = (unsigned int *)fn_82BC0088(param_4,uVar16);
            }
            uVar14 = *puVar8;
            if (uVar1 == (uVar14 & 0xffff)) {
              puVar8 = (unsigned int *)fn_82BC0088(param_6,*(unsigned int *)(param_6 + 4));
              *puVar8 = uVar14;
              fn_82BBFFC8(param_4,uVar16);
              break;
            }
            uVar16 = uVar16 - 1;
            lVar15 = lVar15 + -4;
          } while (-1 < (__int64)uVar16);
        }
      } while (*(int *)(param_6 + 4) != 0);
    }
    uVar16 = (unsigned __int64)*(unsigned int *)(param_4 + 4);
    if (uVar16 != 0) {
      uVar17 = uVar16 - 1;
      if ((uVar17 & 0xffffffff) < uVar16) {
        puVar8 = (unsigned int *)((int)uVar17 * 4 + *(int *)(param_4 + 8));
      }
      else {
        puVar8 = (unsigned int *)fn_82BC0088(param_4,uVar17);
      }
      uVar14 = *puVar8;
      uVar1 = uVar14 & 0xffff;
      fn_82BBFFC8(param_4,uVar17);
      iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x5f4) + 1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5f4) = iVar5;
      iVar10 = fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
      *(int *)(iVar10 + 0x38) = iVar5;
      *(unsigned int *)(iVar10 + 0x50) = 0;
      if (uVar1 < *(unsigned int *)(param_7 + 4)) {
        puVar11 = (unsigned int *)((uVar14 & 0xffff) * 4 + *(int *)(param_7 + 8));
      }
      else {
        puVar11 = (unsigned int *)fn_82BC0088(param_7,uVar1);
      }
      fn_82BA05E8(iVar10,1,*puVar11);
      fn_82BC5538(param_2,iVar10);
      iVar5 = (int)uVar13;
      if (iVar5 < *(int *)(iVar10 + 0x37c)) {
        iVar4 = (*(int *)(iVar10 + 0x37c) - iVar5) + -1;
      }
      else {
        piVar12 = (int *)fn_82BC0088(param_7,*(unsigned int *)(param_7 + 4));
        *piVar12 = iVar10;
        iVar4 = *(int *)(param_7 + 4) + -1;
        *(int *)(iVar10 + 0x37c) = iVar4 + iVar5 + 1;
      }
      if (uVar1 < *(unsigned int *)(param_5 + 4)) {
        piVar12 = (int *)((uVar14 & 0xffff) * 4 + *(int *)(param_5 + 8));
      }
      else {
        piVar12 = (int *)fn_82BC0088(param_5,uVar1);
      }
      *piVar12 = iVar4;
      puVar8 = (unsigned int *)fn_82BC0088(param_6,*(unsigned int *)(param_6 + 4));
      *puVar8 = uVar14;
      *param_8 = *param_8 + 1;
    }
  } while( true );
}

