typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ACB180();
extern int fn_82ACB930();
extern int fn_82AF49A8();
extern int fn_82B16720();
extern int fn_82B16ED0();
extern int fn_82B1AA48();
extern int fn_82B1AAE8();
extern int fn_82B207C8();
extern int fn_82B20868();
extern int fn_82B208B8();
extern int fn_82B22FE0();
extern int fn_82B23E40();
extern int fn_82B24030();
extern int fn_82B24A40();
extern int fn_82B25038();
extern int fn_82B27340();
extern int fn_82B80EF8();
extern int fn_82B8A3E8();
extern unsigned int iStack_90;
extern unsigned int iStack_98;
extern unsigned int iStack_a0;
extern unsigned int iStack_a8;
extern unsigned int iStack_b0;
extern unsigned int iStack_b8;
extern unsigned int iStack_c0;
extern unsigned int iStack_c8;
extern unsigned int uStack_94;
extern unsigned int uStack_a4;
extern unsigned int uStack_b4;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


unsigned __int64 fn_82B27568(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  bool bVar5;
  int *piVar6;
  unsigned int *puVar8;
  char cVar14;
  int *piVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar7;
  char cVar15;
  int iVar12;
  unsigned int uVar13;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  int *piVar20;
  unsigned int *puVar21;
  double dVar22;
  double extraout_f1;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  struct { int first; unsigned int second; } stack_pair_c8;

  int iStack_c0;
  struct { int first; unsigned int second; } stack_pair_b8;

  int iStack_b0;
  struct { int first; unsigned int second; } stack_pair_a8;

  int iStack_a0;
  int iStack_98;
  unsigned int uStack_94;
  int iStack_90;

  uVar19 = 0;
LAB_82b2758c:
  do {
    iStack_90 = 0;
    uStack_94 = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
    iStack_98 = param_2;
LAB_82b275b4:
    do {
      if ((uStack_94 == 0) || (bVar5 = false, iStack_90 == *(int *)(uStack_94 + 8))) {
        bVar5 = true;
      }
      if (bVar5) {
        return uVar19;
      }
      puVar8 = (unsigned int *)fn_82ACB180(&iStack_98);
      piVar1 = (int *)*puVar8;
      fn_82B25038(param_1,piVar1);
      cVar14 = fn_82B20868(piVar1);
      if (cVar14 != '\0') {
        uVar16 = -(unsigned int)((piVar1[1] & 1U) == 0) & piVar1[1];
        if ((*(int *)(uVar16 + 0x18) == 4) &&
           (iVar10 = *(int *)(uVar16 + 0x10), (*(unsigned int *)(iVar10 + 8) & 0x3f80) == 0x480)) {
          piVar9 = (int *)fn_82B24A40(param_1,*(unsigned int *)(iVar10 + 0x2c),
                                        *(unsigned int *)(uVar16 + 0x14),param_3);
          fn_82B25038(param_1,piVar9);
          iStack_c0 = 0;
          stack_pair_c8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
          stack_pair_c8.first = param_2;
          while( true ) {
            if ((stack_pair_c8.second == 0) || (bVar5 = false, iStack_c0 == *(int *)(stack_pair_c8.second + 8))) {
              bVar5 = true;
            }
            if (bVar5) break;
            puVar8 = (unsigned int *)fn_82ACB180(&stack_pair_c8.first);
            piVar2 = (int *)*puVar8;
            if (piVar2 != piVar1) {
              fn_82B25038(param_1,piVar2);
              cVar14 = fn_82B24030(param_1,piVar2,piVar9,0);
              if (cVar14 != '\0') {
                fn_82B27340(param_1,param_3,piVar2,0,&uStack_d0);
                iVar10 = fn_82B1AAE8(param_1,0,param_3,uStack_d0);
                fn_82ACB930(param_2,piVar2);
                fn_82B207C8(piVar2);
                *piVar2 = *(int *)(param_1 + 0x3d0);
                *(int **)(param_1 + 0x3d0) = piVar2;
                *(int *)(uVar16 + 0x10) = iVar10;
                *(unsigned int *)(uVar16 + 0x18) = 0;
                *(unsigned int *)(uVar16 + 0x14) = 0;
                goto LAB_82b27754;
              }
            }
          }
          fn_82B207C8(piVar9);
          *piVar9 = *(int *)(param_1 + 0x3d0);
          *(int **)(param_1 + 0x3d0) = piVar9;
        }
      }
      cVar14 = fn_82B20868(piVar1);
      if (cVar14 != '\0') {
        uVar16 = -(unsigned int)((piVar1[1] & 1U) == 0) & piVar1[1];
        if ((*(int *)(uVar16 + 0x18) == 0) &&
           (iVar10 = *(int *)(uVar16 + 0x10), (*(unsigned int *)(iVar10 + 8) & 0x3f80) == 0x580)) {
          puVar8 = (unsigned int *)
                   fn_82B24A40(param_1,*(unsigned int *)(iVar10 + 0x2c),
                                 *(unsigned int *)(uVar16 + 0x14),param_3);
          fn_82B25038(param_1,puVar8);
          iStack_b0 = 0;
          stack_pair_b8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
          stack_pair_b8.first = param_2;
          while( true ) {
            if ((stack_pair_b8.second == 0) || (bVar5 = false, iStack_b0 == *(int *)(stack_pair_b8.second + 8))) {
              bVar5 = true;
            }
            if (bVar5) break;
            puVar11 = (unsigned int *)fn_82ACB180(&stack_pair_b8.first);
            piVar2 = (int *)*puVar11;
            if ((piVar2 != piVar1) && (cVar14 = fn_82B208B8(piVar2), cVar14 != '\0')) {
              uVar18 = piVar2[1];
              uVar17 = -(unsigned int)((uVar18 & 1) == 0) & uVar18;
              piVar20 = (int *)(uVar17 + 0x10);
              uVar18 = -(unsigned int)((uVar18 & 1) == 0) & uVar18;
              piVar9 = (int *)(uVar18 + 0x1c);
              if ((*(int *)(uVar17 + 0x18) == 0) &&
                 ((((iVar10 = *piVar20, (*(unsigned int *)(iVar10 + 8) & 0x3f80) == 0x300 &&
                    (uVar3 = **(unsigned int **)(iVar10 + 0x30),
                    uVar7 = fn_82AF49A8(*(unsigned short *)((*(unsigned int **)(iVar10 + 0x30))[3] + 0xe) >>
                                         (((uVar3 >> 5 & 0xff) >>
                                           ((*(unsigned int *)(uVar17 + 0x14) & 0x1f) << 1) & 3) << 2) & 0xf
                                         ,uVar3 & 0x1f), (uVar7 & 3) == 3)) &&
                   (*(int *)(uVar18 + 0x24) == 0)) &&
                  (iVar12 = *piVar9, (*(unsigned int *)(iVar12 + 8) & 0x3f80) == 0x300)))) {
                uVar17 = *(int *)(uVar18 + 0x20) << 1;
                uVar18 = **(unsigned int **)(iVar12 + 0x30);
                uVar7 = fn_82AF49A8(*(unsigned short *)((*(unsigned int **)(iVar12 + 0x30))[3] + 0xe) >>
                                     (((uVar18 >> 5 & 0xff) >> (uVar17 & 0x3e) & 3) << 2) & 0xf,
                                     uVar18 & 0x1f);
                if ((uVar7 & 3) == 3) {
                  puVar4 = *(unsigned int **)(iVar12 + 0x2c);
                  puVar21 = *(unsigned int **)(iVar10 + 0x2c);
                  if (((*puVar4 & 0x1f) == 0) && ((*(unsigned int *)(puVar4[3] + 8) & 0x3f80) == 0x480)) {
                    puVar11 = (unsigned int *)
                              fn_82B24A40(param_1,*(unsigned int *)(puVar4[3] + 0x2c),
                                            (*puVar4 >> 5 & 0xff) >> (uVar17 & 0x3e) & 3,param_3);
                    cVar14 = fn_82B24030(param_1,puVar8,puVar11,0);
                    piVar6 = piVar20;
                    if (cVar14 != '\0') {
                      piVar6 = piVar9;
                      piVar9 = piVar20;
                      puVar21 = puVar4;
                    }
                    piVar20 = piVar6;
                    fn_82B207C8(puVar11);
                    *puVar11 = *(unsigned int *)(param_1 + 0x3d0);
                    *(unsigned int **)(param_1 + 0x3d0) = puVar11;
                  }
                  if (((*puVar21 & 0x1f) == 0) && ((*(unsigned int *)(puVar21[3] + 8) & 0x3f80) == 0x480)) {
                    puVar11 = (unsigned int *)
                              fn_82B24A40(param_1,*(unsigned int *)(puVar21[3] + 0x2c),
                                            (*puVar21 >> 5 & 0xff) >> ((piVar20[1] & 0x1fU) << 1) &
                                            3,param_3);
                    cVar14 = fn_82B24030(param_1,puVar8,puVar11,0);
                    if (cVar14 != '\0') {
                      piVar9 = (int *)fn_82B24A40(param_1,*(unsigned int *)(*piVar9 + 0x2c),
                                                    piVar9[1],param_3);
                      cVar14 = fn_82B23E40(param_1,puVar8,piVar9);
                      if (cVar14 == '\0') {
                        fn_82B207C8(piVar9);
                        *piVar9 = *(int *)(param_1 + 0x3d0);
                        *(int **)(param_1 + 0x3d0) = piVar9;
                        goto LAB_82b27a8c;
                      }
                      fn_82B27340(param_1,param_3,puVar8,0,&uStack_cc);
                      iVar10 = fn_82B1AA48(param_1,0,param_3,uStack_cc);
                      fn_82ACB930(param_2,piVar2);
                      fn_82B207C8(piVar2);
                      *piVar2 = *(int *)(param_1 + 0x3d0);
                      *(int **)(param_1 + 0x3d0) = piVar2;
                      *(int *)(uVar16 + 0x10) = iVar10;
                      *(unsigned int *)(uVar16 + 0x18) = 0;
                      *(unsigned int *)(uVar16 + 0x14) = 0;
                      fn_82B207C8(puVar8);
                      *puVar8 = *(unsigned int *)(param_1 + 0x3d0);
                      *(unsigned int **)(param_1 + 0x3d0) = puVar8;
                      fn_82B207C8(puVar11);
                      *puVar11 = *(unsigned int *)(param_1 + 0x3d0);
                      *(unsigned int **)(param_1 + 0x3d0) = puVar11;
LAB_82b27754:
                      fn_82B207C8(piVar9);
                      *piVar9 = *(int *)(param_1 + 0x3d0);
                      goto LAB_82b27764;
                    }
LAB_82b27a8c:
                    fn_82B207C8(puVar11);
                    *puVar11 = *(unsigned int *)(param_1 + 0x3d0);
                    *(unsigned int **)(param_1 + 0x3d0) = puVar11;
                  }
                }
              }
            }
          }
          fn_82B207C8(puVar8);
          *puVar8 = *(unsigned int *)(param_1 + 0x3d0);
          *(unsigned int **)(param_1 + 0x3d0) = puVar8;
        }
      }
      cVar14 = fn_82B22FE0(param_1,piVar1);
      iStack_a0 = 0;
      stack_pair_a8.second = -(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4);
      stack_pair_a8.first = param_2;
LAB_82b27af8:
      if ((stack_pair_a8.second == 0) || (bVar5 = false, iStack_a0 == *(int *)(stack_pair_a8.second + 8))) {
        bVar5 = true;
      }
    } while (bVar5);
    puVar8 = (unsigned int *)fn_82ACB180(&stack_pair_a8.first);
    piVar9 = (int *)*puVar8;
    if (piVar9 == piVar1) goto LAB_82b275b4;
    cVar15 = fn_82B23E40(param_1,piVar1,piVar9);
    if (cVar15 == '\0') {
      if ((cVar14 != '\0') && (cVar15 = fn_82B22FE0(param_1,piVar9), cVar15 != '\0')) {
        uVar16 = -(unsigned int)((piVar1[1] & 1U) == 0) & piVar1[1];
        uVar18 = -(unsigned int)((piVar9[1] & 1U) == 0) & piVar9[1];
        dVar22 = (double)fn_82B80EF8(*(unsigned int *)(uVar16 + 0x10),
                                           *(unsigned int *)(uVar16 + 0x14),
                                           *(unsigned int *)(uVar16 + 0x18));
        fn_82B80EF8(*(unsigned int *)(uVar18 + 0x10),*(unsigned int *)(uVar18 + 0x14),
                          *(unsigned int *)(uVar18 + 0x18));
        iVar10 = fn_82B16ED0(*(unsigned int *)(uVar16 + 0x10),*(unsigned int *)(uVar16 + 0x14));
        iVar12 = fn_82B16ED0(*(unsigned int *)(uVar18 + 0x10),*(unsigned int *)(uVar18 + 0x14));
        if (iVar10 == iVar12) {
          fn_82B16720(extraout_f1 + dVar22);
          uVar13 = fn_82B8A3E8(param_1);
          *(unsigned int *)(uVar16 + 0x10) = uVar13;
          *(unsigned int *)(uVar16 + 0x14) = 0;
          *(unsigned int *)(uVar16 + 0x18) = 0;
          fn_82ACB930(param_2,piVar9);
          uVar19 = 1;
          goto LAB_82b2758c;
        }
      }
      goto LAB_82b27af8;
    }
    fn_82ACB930(param_2,piVar1);
    fn_82ACB930(param_2,piVar9);
    fn_82B207C8(piVar1);
    fn_82B207C8(piVar9);
    *piVar1 = *(unsigned int *)(param_1 + 0x3d0);
    *(int **)(param_1 + 0x3d0) = piVar1;
    *piVar9 = (int)piVar1;
LAB_82b27764:
    uVar19 = 1;
    *(int **)(param_1 + 0x3d0) = piVar9;
  } while( true );
}
