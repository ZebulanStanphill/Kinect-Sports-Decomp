extern unsigned int *auStack_1060;
extern unsigned int *auStack_1860;
extern unsigned int *auStack_2060;
extern unsigned int *auStack_2860;
extern unsigned int *auStack_3060;
extern unsigned int *auStack_3080;
extern unsigned int *auStack_860;
extern int fn_82250A18();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82292268();
extern int fn_82299AC8();
extern int fn_8229A000();
extern int fn_8229F758();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_8242C1B8();
extern int fn_8242C410();
extern int fn_824329A8();
extern int fn_824356C8();
extern int fn_82436CB8();
extern int fn_82437130();
extern int fn_824395F8();
extern int fn_8243D2D8();
extern int fn_824FBFB0();
extern int fn_824FC060();
extern int fn_82508078();
extern int fn_82526C70();
extern int fn_82560708();
extern int fn_82573530();
extern int fn_82672C20();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82193AF0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CECD0;
extern unsigned int lbl_831CECD4;
extern unsigned int lbl_8328D41C;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_3098;
extern unsigned int uStack_309c;
extern unsigned int uStack_30a0;


void fn_8244F3B0(int param_1,unsigned __int64 param_2,int param_3)

{
  char cVar1;
  unsigned int *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned char *puVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int iVar15;
  __int64 lVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int *piVar20;
  unsigned int uVar21;
  double dVar22;
  unsigned int uStack_30a0;
  unsigned int uStack_309c;
  unsigned char uStack_3098;
  __int64 lStack_3090;
  __int64 lStack_3088;
  unsigned char auStack_3080 [32];
  unsigned char auStack_3060 [2048];
  unsigned char auStack_2860 [2048];
  unsigned char auStack_2060 [2048];
  unsigned char auStack_1860 [2048];
  unsigned char auStack_1060 [2048];
  unsigned char auStack_860 [2144];
  
  fn_824356C8();
  if (param_3 == 2) {
    dVar22 = (double)ltcg_pool_0_0f;
    fn_8229F758(dVar22,dVar22,dVar22,
                      *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
    iVar5 = fn_82560708();
    if (iVar5 != 0) {
      fn_8229F758(dVar22,dVar22,dVar22,
                        *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc));
    }
    fn_82436CB8(param_1);
    fn_82292268(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd4));
    iVar5 = fn_82560708();
    if (iVar5 != 0) {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(unsigned int *)(iVar5 + 0x54));
      fn_8229A000(*(unsigned int *)(iVar5 + 0x60));
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_8229A000(*(unsigned int *)(iVar5 + 0x50));
      fn_8229A000(*(unsigned int *)(iVar5 + 0x5c));
    }
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(unsigned int *)(iVar5 + 0x4c));
    fn_8229A000(*(unsigned int *)(iVar5 + 0x58));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    if ((*(int **)(param_1 + 0x40))[0x52] == 0) {
      iVar5 = **(int **)(param_1 + 0x40);
      iVar6 = *(int *)(iVar5 + 0xa0);
      if ((iVar6 == 0) || (*(int *)(iVar6 + 0x40) != 1)) {
        uVar7 = *(unsigned int *)(iVar5 + 0xa4);
        uVar9 = fn_82437130(param_1,0xffffffff821ba064);
        fn_82508078(uVar7,uVar9,0);
      }
    }
    *(unsigned char *)(*(int *)(param_1 + 0x44) + 0xe0) = 0;
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
  }
  if (param_3 == 7) {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(**(unsigned int **)(param_1 + 0x40));
  }
  if (param_3 == 8) {
    fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba084,0,0);
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(unsigned int *)(iVar5 + 0x4c));
    fn_8229A000(*(unsigned int *)(iVar5 + 0x58));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    iVar5 = fn_82560708();
    if (iVar5 == 0) {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar5 + 0x1c),auStack_860,0x400,lbl_831CECD0);
      uVar7 = *(unsigned int *)(iVar5 + 0x68);
      puVar10 = auStack_860;
    }
    else {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar5 + 0x1c),auStack_2860,0x400,lbl_831CECD0)
      ;
      fn_82299AC8(*(unsigned int *)(iVar5 + 0x6c),auStack_2860);
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar5 + 0x1c),auStack_1860,0x400,lbl_831CECD0)
      ;
      uVar7 = *(unsigned int *)(iVar5 + 0x70);
      puVar10 = auStack_1860;
    }
    fn_82299AC8(uVar7,puVar10);
    *(unsigned char *)(*(int *)(param_1 + 0x44) + 5) = 1;
    if (*(int *)(*(int *)(param_1 + 0x44) + 0x74) != 0) {
      fn_824FC060(*(unsigned int *)(*(int *)(param_1 + 0x44) + 0x74));
    }
    *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x90) + 0x510) = 1;
  }
  else if (param_3 == 9) {
    fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba094,0,0);
    fn_824329A8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,4);
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
    fn_8229A000(*(unsigned int *)(iVar5 + 0x4c));
    fn_8229A000(*(unsigned int *)(iVar5 + 0x58));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    iVar5 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar5 = fn_82250A18();
    }
    cVar1 = *(char *)(iVar5 + 4);
    puVar2 = *(unsigned int **)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0xc);
    uStack_30a0 = 0;
    uStack_309c = 0;
    fn_82273CD8(&uStack_30a0,2);
    uStack_3098 = cVar1 == '\0';
    fn_82672C20(*puVar2,0xffffffff821ab9b8,&uStack_30a0,1);
    fn_82273C88(&uStack_30a0);
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x6c));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68));
    iVar5 = fn_82560708();
    if (iVar5 == 0) {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar5 + 0x1c),auStack_1060,0x400,lbl_831CECD4);
      uVar7 = *(unsigned int *)(iVar5 + 0x68);
      puVar10 = auStack_1060;
    }
    else {
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar5 + 0x1c),auStack_3060,0x400,lbl_831CECD4);
      fn_82299AC8(*(unsigned int *)(iVar5 + 0x6c),auStack_3060);
      iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0xd4);
      fn_82358FD8(*(unsigned int *)(iVar5 + 0x1c),auStack_2060,0x400,lbl_831CECD4);
      uVar7 = *(unsigned int *)(iVar5 + 0x70);
      puVar10 = auStack_2060;
    }
    fn_82299AC8(uVar7,puVar10);
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(unsigned int *)(iVar5 + 0x68) = *(unsigned int *)(iVar5 + 0x68) | 0x80;
    if (*(int *)(*(int *)(param_1 + 0x40) + 0x114) == 1) {
      fn_824395F8((double)ltcg_pool_0_0f,
                        (unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x1c,2,0);
    }
    if (*(int *)(*(int *)(param_1 + 0x44) + 0x74) != 0) {
      fn_824FBFB0();
      iVar5 = fn_82573530((unsigned __int64)
                                *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x74) + 0x8c0) + 0x128
                                ,0xffffffff821ba148);
      if (iVar5 != 0) {
        *(unsigned int *)(iVar5 + 400) = 1;
      }
    }
    *(unsigned char *)(*(int *)(param_1 + 0x44) + 5) = 1;
  }
  else if (param_3 == 10) {
    fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba0a4,0,0);
    iVar5 = lbl_8328D41C;
    uVar12 = 0xffffffffffffffff;
    iVar8 = -1;
    iVar6 = 1000000;
    uVar21 = 0;
    uVar17 = *(unsigned int *)(param_1 + 0x44);
    uVar18 = (unsigned __int64)uVar17;
    lVar11 = uVar18 + 200;
    if (*(int *)(uVar17 + 0xcc) - *(int *)(uVar17 + 200) >> 3 != 0) {
      lVar14 = 0;
      iVar19 = **(int **)(**(int **)(param_1 + 0x40) + 8);
      do {
        iVar15 = *(int *)lVar11 + (int)lVar14;
        uVar17 = *(unsigned int *)(*(int *)lVar11 + (int)lVar14);
        uVar13 = (unsigned __int64)uVar17;
        piVar20 = *(int **)(uVar17 * 4 + iVar19);
        iVar8 = fn_822ABA88(*(unsigned int *)(piVar20[4] * 4 + *piVar20),0);
        if (((*(int *)(iVar8 + 0x24) != 0) && (iVar8 = *(int *)(iVar15 + 4), iVar8 < iVar6)) &&
           (iVar5 < iVar8)) {
          uVar12 = uVar13;
          iVar6 = iVar8;
        }
        iVar8 = (int)uVar12;
        uVar21 = uVar21 + 1;
        lVar14 = lVar14 + 8;
      } while (uVar21 < (unsigned int)(((int *)lVar11)[1] - *(int *)lVar11 >> 3));
    }
    fVar4 = lbl_82193AF0;
    fVar3 = lbl_82005748;
    uVar17 = 0;
    if (((int *)lVar11)[1] - *(int *)lVar11 >> 3 != 0) {
      iVar19 = 0;
      do {
        piVar20 = (int *)(*(int *)lVar11 + iVar19);
        iVar15 = piVar20[1];
        if ((*piVar20 != iVar8) && (iVar5 < iVar15)) {
          lStack_3088 = (__int64)iVar6;
          iVar15 = (int)(ABS((float)(__int64)iVar15 * fVar4 - (float)lStack_3088 * fVar4) * fVar3);
          lStack_3090 = (__int64)iVar15;
          if (iVar15 < *(int *)((int)uVar18 + 0xb4)) {
            *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x170) = 0;
            iVar5 = lbl_8328D41C;
          }
        }
        uVar21 = *(unsigned int *)(param_1 + 0x44);
        uVar18 = (unsigned __int64)uVar21;
        uVar17 = uVar17 + 1;
        iVar19 = iVar19 + 8;
        lVar11 = uVar18 + 200;
      } while (uVar17 < (unsigned int)(*(int *)(uVar21 + 0xcc) - *(int *)(uVar21 + 200) >> 3));
    }
    *(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0xb8) = iVar8;
    iVar5 = *(int *)(**(int **)(param_1 + 0x40) + 0x174);
    *(unsigned int *)(iVar5 + 0x68) = *(unsigned int *)(iVar5 + 0x68) | 0x4000;
    fn_823598B0(**(unsigned int **)(param_1 + 0x40),0);
    fn_82359928(**(unsigned int **)(param_1 + 0x40),0);
  }
  else if (param_3 == 0xc) {
    fn_8243D2D8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 8,
                      0xffffffff821ba0bc,0,0);
    *(float *)(*(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 100) + 8) = ltcg_pool_0_0f;
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 100));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x6c));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x70));
    fn_8229A000(*(unsigned int *)(*(int *)(**(int **)(param_1 + 0x40) + 0xd4) + 0x68));
    fn_824329A8((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x60,5);
    lVar11 = 0;
    uVar12 = (unsigned __int64)**(unsigned int **)(param_1 + 0x40);
    iVar5 = fn_8242C410(uVar12);
    if (0 < iVar5) {
      lVar14 = 0;
      lVar16 = 0;
      iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 0xb8);
      do {
        piVar20 = *(int **)(**(int **)((int)uVar12 + 8) + (int)lVar16);
        iVar6 = fn_822ABA88(*(unsigned int *)(piVar20[4] * 4 + *piVar20),0);
        if (*(int *)((int)lVar14 + iVar5 + 4) != 0) {
          iVar5 = *(int *)(param_1 + 0x40);
          uVar18 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x154) - (unsigned __int64)*(unsigned int *)(iVar5 + 0x148);
          if (uVar18 == (__int64)(int)((uVar18 & 0xffffffff) / (unsigned __int64)*(unsigned int *)(iVar5 + 0x15c))
                        * (__int64)(int)*(unsigned int *)(iVar5 + 0x15c)) {
            fn_82526C70(auStack_3080,0x20,0xffffffff821ba0d4,
                              (unsigned __int64)*(unsigned char *)(*(int *)(iVar6 + 0x1a0) + 0x44) + 1);
            uVar7 = *(unsigned int *)(**(int **)(param_1 + 0x40) + 0xa4);
            uVar9 = fn_82437130(param_1,auStack_3080);
          }
          else {
            uVar7 = *(unsigned int *)((int)uVar12 + 0xa4);
            uVar9 = 0xffffffff821ba0ec;
          }
          goto LAB_8244f5cc;
        }
        lVar11 = lVar11 + 1;
        lVar16 = lVar16 + 4;
        lVar14 = lVar14 + 0x18;
        iVar6 = fn_8242C410(uVar12);
      } while ((int)lVar11 < iVar6);
    }
  }
  else if (param_3 == 0x12) {
    uVar9 = 0xffffffff821b9f50;
    uVar7 = *(unsigned int *)(**(int **)(param_1 + 0x40) + 0xa4);
LAB_8244f5cc:
    fn_82508078(uVar7,uVar9,0);
  }
  return;
}

