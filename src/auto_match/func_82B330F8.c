typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82ABE2E0();
extern int fn_82ABE650();
extern int fn_82AC64B8();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82AF04D0();
extern int fn_82B181A0();
extern int fn_82B18558();
extern int fn_82B28C98();
extern int fn_82B29200();
extern int fn_82B41D68();
extern int fn_82B44B88();
extern int fn_82B841E8();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8F1B0();
extern int fn_82B8F208();
extern int fn_82B8F328();
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


__int64 fn_82B330F8(int param_1,char param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  char cVar14;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned __int64 uVar6;
  int iVar12;
  int *piVar13;
  unsigned int *puVar15;
  int *piVar16;
  bool bVar18;
  int *piVar17;
  unsigned int uVar19;
  unsigned int uVar20;
  int *piVar21;
  __int64 lVar22;
  __int64 lVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  bool bVar26;
  unsigned int *puVar27;
  __int64 lVar28;
  unsigned int uVar29;
  unsigned int auStack_c0 [2];
  unsigned int uStack_b8;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned char uStack_a8;
  unsigned int auStack_a0 [2];
  unsigned int uStack_98;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned char uStack_88;
  
  lVar22 = 0;
LAB_82b33114:
  uVar20 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
  while ((uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4), (uVar20 & 1) == 0 && (uVar20 != 0))) {
    if (*(int *)(uVar20 + 0x34) == 0) {
      piVar21 = (int *)(uVar20 + 8);
      iVar12 = *(int *)(uVar20 + 8);
      while (iVar12 != 0) {
        fn_82B8F1B0(*(unsigned int *)(iVar12 + 4),uVar20,param_1);
        lVar22 = 1;
        if (*piVar21 == iVar12) {
          piVar21 = (int *)(iVar12 + 0xc);
        }
        iVar12 = *piVar21;
      }
    }
  }
  uVar20 = *(unsigned int *)(param_1 + 4);
LAB_82b33194:
  uVar20 = -(unsigned int)((uVar20 & 1) == 0) & uVar20;
  if (uVar20 != 0) {
    do {
      if ((*(unsigned int *)(uVar20 + 0x1c) & 1) == 0) {
        uVar19 = *(unsigned int *)(uVar20 + 0x1c);
        puVar27 = (unsigned int *)(uVar20 + 0x18);
      }
      else {
        uVar19 = *(unsigned int *)(uVar20 + 0x14);
        puVar27 = (unsigned int *)(uVar20 + 0x10);
      }
      if ((uVar19 & 1) == 0) {
        iVar12 = (*puVar27 & 0xfffffffe) - 0x28;
      }
      else {
        iVar12 = 0;
      }
LAB_82b331ec:
      if (iVar12 == 0) {
        iVar12 = *(int *)(uVar20 + 8);
        goto LAB_82b3327c;
      }
      fn_82AF04D0(iVar12,param_1);
      cVar14 = fn_82ABE2E0(iVar12);
      if (cVar14 == '\0') {
        if ((*(unsigned int *)(iVar12 + 0x24) & 1) == 0) goto LAB_82b33228;
        iVar12 = 0;
        goto LAB_82b33234;
      }
      fn_82B8AE98(param_1,iVar12);
    } while( true );
  }
  goto LAB_82b343c4;
LAB_82b3327c:
  if (iVar12 == 0) goto LAB_82b3394c;
  iVar11 = *(int *)(iVar12 + 4);
  if ((*(unsigned int *)(((int)(((unsigned __int64)*(unsigned int *)(uVar20 + 0x30) & 0x7ffff) >> 5) + 1) * 4 +
                *(int *)(iVar11 + 0x28)) & 1 << (*(unsigned int *)(uVar20 + 0x30) & 0x1f)) == 0) {
    iVar12 = *(int *)(iVar12 + 0xc);
    goto LAB_82b3327c;
  }
  fn_82B28C98(param_1,uVar20,0x10);
  bVar26 = false;
  puVar7 = (unsigned int *)fn_82ABE250(param_1,8,0x26);
  puVar27 = puVar7 + 1;
  puVar7[1] = (unsigned int)puVar7 | 1;
  *puVar7 = (unsigned int)puVar27 | 1;
  iVar12 = 0;
  uVar24 = 0;
  for (uVar19 = *(unsigned int *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
      uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4)) {
    if ((*(unsigned int *)(uVar19 + 0x30) >> 0x1e & 1) != 0) {
      if ((*(unsigned int *)(uVar19 + 0x14) & 1) == 0) {
        uVar29 = *(unsigned int *)(uVar19 + 0x14);
        iVar8 = uVar19 + 0x10;
      }
      else if ((*(unsigned int *)(uVar19 + 0x1c) & 1) == 0) {
        uVar29 = *(unsigned int *)(uVar19 + 0x1c);
        iVar8 = uVar19 + 0x18;
      }
      else {
        uVar29 = *(unsigned int *)(uVar19 + 0x24);
        iVar8 = uVar19 + 0x20;
      }
      uVar29 = -(unsigned int)((uVar29 & 1) == 0) & uVar29;
      do {
        if (uVar29 == 0) break;
        do {
          uVar1 = *(unsigned int *)(uVar29 + 8);
          if ((((uVar1 >> 0x19 & 1) == 0) && ((uVar1 >> 5 & 1) == 0)) &&
             ((uVar1 & 0x3f80) != 0x2980)) {
            for (iVar9 = *(int *)(uVar29 + 4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 8)) {
              if ((*(int *)(iVar9 + 0x10) != 0) &&
                 ((*(unsigned int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x1c) + 0x30) >> 0x1e & 1) == 0))
              goto LAB_82b333c4;
            }
          }
          else {
LAB_82b333c4:
            *(unsigned int *)(uVar29 + 8) = uVar1 | 0x20000000;
            if ((*puVar27 & 1) == 0) {
              uVar1 = *puVar7 & 0xfffffffe;
              iVar9 = uVar1 - 4;
              if ((iVar9 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
              goto LAB_82b333fc;
            }
            else {
LAB_82b333fc:
              iVar9 = fn_82AD6090(puVar7,1);
            }
            iVar10 = *(int *)(iVar9 + 8);
            bVar26 = true;
            *(int *)(iVar9 + 8) = iVar10 + 1;
            *(unsigned int *)((iVar10 + 4) * 4 + iVar9) = uVar29;
          }
          uVar29 = *(unsigned int *)((uVar29 & 0xfffffffe) + 0x28);
        } while (((uVar29 & 1) == 0) && (uVar29 != 0));
        iVar9 = uVar19 + 0x20;
        if (iVar8 == iVar9) break;
        if ((iVar8 == uVar19 + 0x18) || ((*(unsigned int *)(uVar19 + 0x1c) & 1) != 0)) {
          uVar29 = *(unsigned int *)(uVar19 + 0x24);
        }
        else {
          uVar29 = *(unsigned int *)(uVar19 + 0x1c);
          iVar9 = uVar19 + 0x18;
        }
        iVar8 = iVar9;
      } while ((uVar29 & 1) == 0);
      for (piVar21 = *(int **)(uVar19 + 0xc); piVar21 != (int *)0x0; piVar21 = (int *)piVar21[2]) {
        if (((*(unsigned int *)(*piVar21 + 0x30) >> 0x1e & 1) == 0) &&
           ((*(unsigned int *)(*piVar21 + 0x30) >> 0x13 & 1) == 0)) {
          iVar12 = iVar12 + 1;
          uVar24 = uVar19;
        }
      }
    }
  }
  if ((bVar26) || (bVar26 = false, iVar12 != 1)) {
    bVar26 = true;
    for (uVar19 = *(unsigned int *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
        uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4)) {
      if (((*(unsigned int *)(uVar19 + 0x30) >> 0x1e & 1) != 0) && ((*(unsigned int *)(uVar19 + 0x24) & 1) == 0)) {
        uVar29 = *(unsigned int *)(uVar19 + 0x20) & 0xfffffffe;
        if (uVar29 - 0x28 != 0) {
          uVar1 = *(unsigned int *)(uVar29 - 0x20) >> 7 & 0x7f;
          if ((((uVar1 == 0x56) || (uVar1 == 0x57)) || (uVar1 == 0x59)) ||
             (((uVar1 == 0x5a || (uVar1 == 0x54)) || (bVar18 = false, uVar1 == 0x55)))) {
            bVar18 = true;
          }
          if ((bVar18) || (uVar1 == 0x58)) {
            *(unsigned int *)(uVar29 - 0x20) = *(unsigned int *)(uVar29 - 0x20) | 0x20000000;
            if ((*puVar27 & 1) == 0) {
              uVar1 = *puVar7 & 0xfffffffe;
              iVar8 = uVar1 - 4;
              if ((iVar8 == 0) || (*(unsigned int *)(uVar1 + 8) < *(int *)(uVar1 + 4) + 1U))
              goto LAB_82b335b0;
            }
            else {
LAB_82b335b0:
              iVar8 = fn_82AD6090(puVar7,1);
            }
            iVar9 = *(int *)(iVar8 + 8);
            *(int *)(iVar8 + 8) = iVar9 + 1;
            *(unsigned int *)((iVar9 + 4) * 4 + iVar8) = uVar29 - 0x28;
          }
        }
      }
    }
  }
  while (((*puVar27 & 1) == 0 && (*puVar27 != 0))) {
    puVar5 = (unsigned int *)(*puVar7 & 0xfffffffe);
    puVar15 = puVar5 + -1;
    uVar19 = puVar5[1] - 1;
    piVar21 = (int *)puVar15[puVar5[1] + 3];
    puVar5[1] = uVar19;
    if (uVar19 == 0) {
      *(unsigned int *)(*puVar5 & 0xfffffffe) = *puVar15;
      *(unsigned int *)(*puVar15 & 0xfffffffe) = *puVar5;
      fn_82AA6648(puVar7,puVar15,((unsigned __int64)puVar5[2] + 4 & 0x3fffffff) << 2);
    }
    for (iVar8 = *(int *)(piVar21[7] + 8); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0xc)) {
      iVar9 = *(int *)(iVar8 + 4);
      if (((*(unsigned int *)(iVar9 + 0x30) >> 0x1e & 1) != 0) && ((*(unsigned int *)(iVar9 + 0x24) & 1) == 0)) {
        uVar19 = *(unsigned int *)(iVar9 + 0x20) & 0xfffffffe;
        if (uVar19 - 0x28 != 0) {
          uVar29 = *(unsigned int *)(uVar19 - 0x20);
          uVar1 = uVar29 >> 7 & 0x7f;
          if ((uVar1 < 0x53) || (bVar18 = true, 0x5f < uVar1)) {
            bVar18 = false;
          }
          if ((bVar18) && ((uVar29 & 0x20000000) == 0)) {
            *(unsigned int *)(uVar19 - 0x20) = uVar29 | 0x20000000;
            if ((*puVar27 & 1) == 0) {
              uVar29 = *puVar7 & 0xfffffffe;
              iVar9 = uVar29 - 4;
              if ((iVar9 == 0) || (*(unsigned int *)(uVar29 + 8) < *(int *)(uVar29 + 4) + 1U))
              goto LAB_82b33708;
            }
            else {
LAB_82b33708:
              iVar9 = fn_82AD6090(puVar7,1);
            }
            iVar10 = *(int *)(iVar9 + 8);
            *(int *)(iVar9 + 8) = iVar10 + 1;
            *(unsigned int *)((iVar10 + 4) * 4 + iVar9) = uVar19 - 0x28;
          }
        }
      }
    }
    for (iVar8 = *piVar21; iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
      iVar9 = *(int *)(iVar8 + 0xc);
      if (((*(unsigned int *)(iVar9 + 8) & 0x20000000) == 0) &&
         ((*(unsigned int *)(*(int *)(iVar9 + 0x1c) + 0x30) >> 0x1e & 1) != 0)) {
        *(unsigned int *)(iVar9 + 8) = *(unsigned int *)(iVar9 + 8) | 0x20000000;
        if ((*puVar27 & 1) == 0) {
          uVar19 = *puVar7 & 0xfffffffe;
          iVar10 = uVar19 - 4;
          if ((iVar10 == 0) || (*(unsigned int *)(uVar19 + 8) < *(int *)(uVar19 + 4) + 1U))
          goto LAB_82b33798;
        }
        else {
LAB_82b33798:
          iVar10 = fn_82AD6090(puVar7,1);
        }
        iVar2 = *(int *)(iVar10 + 8);
        *(int *)(iVar10 + 8) = iVar2 + 1;
        *(int *)((iVar2 + 4) * 4 + iVar10) = iVar9;
      }
    }
  }
  *puVar7 = *(unsigned int *)(param_1 + 0x3d0);
  *(unsigned int **)(param_1 + 0x3d0) = puVar7;
  if ((bVar26) || (iVar12 != 1)) {
    uVar19 = *(unsigned int *)(param_1 + 0x28);
    bVar26 = false;
    uVar24 = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 0x28) = uVar19 | 0x1000;
    for (; ((uVar24 & 1) == 0 && (uVar24 != 0)); uVar24 = *(unsigned int *)((uVar24 & 0xfffffffe) + 4)) {
      if ((*(unsigned int *)(uVar24 + 0x30) >> 0x1e & 1) != 0) {
        *(unsigned int *)(uVar24 + 0x30) = *(unsigned int *)(uVar24 + 0x30) & 0xbfffffff;
        if ((*(unsigned int *)(uVar24 + 0x24) & 1) == 0) {
          uVar29 = *(unsigned int *)(uVar24 + 0x24);
          puVar27 = (unsigned int *)(uVar24 + 0x20);
        }
        else if ((*(unsigned int *)(uVar24 + 0x1c) & 1) == 0) {
          uVar29 = *(unsigned int *)(uVar24 + 0x1c);
          puVar27 = (unsigned int *)(uVar24 + 0x18);
        }
        else {
          uVar29 = *(unsigned int *)(uVar24 + 0x14);
          puVar27 = (unsigned int *)(uVar24 + 0x10);
        }
        if ((uVar29 & 1) == 0) goto LAB_82b33908;
        iVar12 = 0;
        puVar7 = puVar27;
        while (iVar12 != 0) {
          do {
            if ((*(unsigned int *)(iVar12 + 8) & 0x20000000) == 0) {
              fn_82B181A0(iVar12,param_1);
              fn_82B8AC10(param_1,iVar12,0,1);
              bVar26 = true;
            }
            else {
              *(unsigned int *)(iVar12 + 8) = *(unsigned int *)(iVar12 + 8) & 0xdfffffff;
            }
          } while (((*(unsigned int *)(iVar12 + 0x24) & 1) == 0) &&
                  (iVar12 = (*(unsigned int *)(iVar12 + 0x24) & 0xfffffffe) - 0x28, iVar12 != 0));
          puVar27 = (unsigned int *)(uVar24 + 0x10);
          if (puVar7 == puVar27) break;
          if ((puVar7 == (unsigned int *)(uVar24 + 0x18)) || ((*(unsigned int *)(uVar24 + 0x1c) & 1) != 0)) {
            uVar29 = *(unsigned int *)(uVar24 + 0x14);
          }
          else {
            uVar29 = *(unsigned int *)(uVar24 + 0x1c);
            puVar27 = (unsigned int *)(uVar24 + 0x18);
          }
          if ((uVar29 & 1) != 0) break;
LAB_82b33908:
          puVar7 = puVar27;
          iVar12 = (*puVar27 & 0xfffffffe) - 0x28;
        }
      }
    }
    fn_82ABE650(param_1,uVar19 >> 0xc & 1);
    if (bVar26) goto LAB_82b33114;
LAB_82b3394c:
    uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4);
    goto LAB_82b33194;
  }
  piVar21 = *(int **)(uVar24 + 0xc);
  while( true ) {
    if (piVar21 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
    iVar12 = *piVar21;
    if ((*(unsigned int *)(iVar12 + 0x30) >> 0x1e & 1) == 0) break;
    piVar21 = (int *)piVar21[2];
  }
  if ((((*(unsigned int *)(iVar11 + 0x24) & 1) == 0) &&
      (uVar19 = *(unsigned int *)(iVar11 + 0x20) & 0xfffffffe, uVar19 != 0x28)) &&
     ((*(unsigned int *)(uVar19 - 0x20) & 0x3f80) == 0x2a80)) {
    iVar11 = fn_82ABDD90(param_1,0x55,0,0);
    iVar8 = *(int *)(iVar11 + (uVar19 - 0x3c));
    iVar11 = *(int *)(iVar8 + 0x1c);
    puVar7 = (unsigned int *)(iVar11 + 0xc);
    puVar27 = *(unsigned int **)(iVar11 + 0xc);
    while (puVar27 != (unsigned int *)0x0) {
      if (*puVar27 != uVar20) {
        fn_82B8F1B0(iVar11,*puVar27,param_1);
      }
      if ((unsigned int *)*puVar7 == puVar27) {
        puVar7 = puVar27 + 2;
      }
      puVar27 = (unsigned int *)*puVar7;
    }
    fn_82B8AC10(param_1,iVar8,0,1);
  }
  uVar19 = *(unsigned int *)(param_1 + 0x28);
  uVar24 = *(unsigned int *)(param_1 + 4);
  lVar28 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 1;
  *(unsigned int *)(param_1 + 0x28) = uVar19 | 0x1000;
  uVar25 = (unsigned int)lVar28;
  *(unsigned int *)(param_1 + 0x6c) = uVar25;
  for (; ((uVar24 & 1) == 0 && (uVar24 != 0)); uVar24 = *(unsigned int *)((uVar24 & 0xfffffffe) + 4)) {
    if (((*(unsigned int *)(uVar24 + 0x30) >> 0x1e & 1) != 0) && (uVar24 != uVar20)) {
      *(unsigned int *)(uVar24 + 0x2c) = uVar25;
    }
  }
  piVar21 = (int *)(uVar20 + 0xc);
  puVar3 = *(unsigned int **)(uVar20 + 0xc);
  while (puVar3 != (unsigned int *)0x0) {
    fn_82B8F1B0(uVar20,*puVar3);
    if ((unsigned int *)*piVar21 == puVar3) {
      piVar21 = puVar3 + 2;
    }
    puVar3 = (unsigned int *)*piVar21;
  }
  fn_82B8F328(uVar20,iVar12,param_1);
  fn_82B18558(param_1,lVar28);
  puVar27 = (unsigned int *)(uVar20 + 0x20);
  if ((*(unsigned int *)(uVar20 + 0x24) & 1) == 0) {
    uVar24 = *puVar27;
    iVar12 = 0;
    do {
      while( true ) {
        uVar29 = uVar24 & 0xfffffffe;
        iVar11 = uVar29 - 0x28;
        if (iVar11 == 0) goto LAB_82b33bd8;
        piVar21 = (int *)(uVar29 - 0x24);
        while (iVar8 = *piVar21, iVar8 != 0) {
          if (*(int *)(iVar8 + 0x10) != 0) {
            fn_82AD20C0(*(int *)(iVar8 + 0x10),iVar8,param_1);
          }
          if (*piVar21 == iVar8) {
            piVar21 = (int *)(iVar8 + 8);
          }
        }
        fn_82B8AC10(param_1,iVar11,0,1);
        if (iVar12 != 0) break;
        if ((*(unsigned int *)(uVar20 + 0x24) & 1) == 0) {
          iVar8 = (*puVar27 & 0xfffffffe) - 0x28;
        }
        else {
          iVar8 = 0;
        }
        if (iVar11 == iVar8) {
LAB_82b33b6c:
          uVar24 = *(unsigned int *)(uVar29 - 4);
          iVar12 = iVar11;
          if ((uVar24 & 1) != 0) goto LAB_82b33bd8;
        }
        else {
          if ((*(unsigned int *)(uVar20 + 0x24) & 1) != 0) goto LAB_82b33bd8;
          uVar24 = *puVar27;
        }
      }
      uVar24 = *(unsigned int *)(iVar12 + 0x24);
      if ((uVar24 & 1) == 0) {
        iVar8 = (uVar24 & 0xfffffffe) - 0x28;
      }
      else {
        iVar8 = 0;
      }
      if (iVar11 == iVar8) goto LAB_82b33b6c;
    } while ((uVar24 & 1) == 0);
  }
LAB_82b33bd8:
  puVar27 = (unsigned int *)(uVar20 + 0x18);
  if ((*(unsigned int *)(uVar20 + 0x1c) & 1) == 0) {
    uVar24 = *puVar27;
    iVar12 = 0;
    do {
      while( true ) {
        uVar29 = uVar24 & 0xfffffffe;
        iVar11 = uVar29 - 0x28;
        if (iVar11 == 0) goto LAB_82b33ce8;
        piVar21 = (int *)(uVar29 - 0x24);
        while (iVar8 = *piVar21, iVar8 != 0) {
          if (*(int *)(iVar8 + 0x10) != 0) {
            fn_82AD20C0(*(int *)(iVar8 + 0x10),iVar8,param_1);
          }
          if (*piVar21 == iVar8) {
            piVar21 = (int *)(iVar8 + 8);
          }
        }
        fn_82B8AC10(param_1,iVar11,0,1);
        if (iVar12 != 0) break;
        if ((*(unsigned int *)(uVar20 + 0x1c) & 1) == 0) {
          iVar8 = (*puVar27 & 0xfffffffe) - 0x28;
        }
        else {
          iVar8 = 0;
        }
        if (iVar11 == iVar8) {
LAB_82b33c7c:
          uVar24 = *(unsigned int *)(uVar29 - 4);
          iVar12 = iVar11;
          if ((uVar24 & 1) != 0) goto LAB_82b33ce8;
        }
        else {
          if ((*(unsigned int *)(uVar20 + 0x1c) & 1) != 0) goto LAB_82b33ce8;
          uVar24 = *puVar27;
        }
      }
      uVar24 = *(unsigned int *)(iVar12 + 0x24);
      if ((uVar24 & 1) == 0) {
        iVar8 = (uVar24 & 0xfffffffe) - 0x28;
      }
      else {
        iVar8 = 0;
      }
      if (iVar11 == iVar8) goto LAB_82b33c7c;
    } while ((uVar24 & 1) == 0);
  }
LAB_82b33ce8:
  uVar29 = 0;
  uVar24 = *(unsigned int *)(uVar20 + 0x14);
joined_r0x82b33cf8:
  uVar1 = uVar24;
  if ((uVar1 & 1) == 0) {
    do {
      if (uVar1 == 0) break;
      piVar21 = (int *)(uVar1 + 4);
      while (iVar12 = *piVar21, iVar12 != 0) {
        iVar11 = *(int *)(iVar12 + 0x10);
        if ((iVar11 != 0) && ((*(unsigned int *)(*(int *)(iVar11 + 0x1c) + 0x30) >> 0x1e & 1) != 0)) {
          fn_82AD20C0(iVar11,iVar12,param_1);
        }
        if (*piVar21 == iVar12) {
          piVar21 = (int *)(iVar12 + 8);
        }
      }
      if (*(int *)(uVar1 + 4) == 0) {
        fn_82B8AC10(param_1,uVar1,0,1);
      }
      if (uVar29 == 0) {
        uVar24 = *(unsigned int *)(uVar20 + 0x14);
        if (uVar1 != (-(unsigned int)((uVar24 & 1) == 0) & uVar24)) goto joined_r0x82b33cf8;
LAB_82b33dc4:
        uVar24 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28);
        uVar29 = uVar1;
      }
      else {
        uVar24 = *(unsigned int *)((uVar29 & 0xfffffffe) + 0x28);
        if (uVar1 == (-(unsigned int)((uVar24 & 1) == 0) & uVar24)) goto LAB_82b33dc4;
      }
      uVar1 = uVar24;
      if ((uVar1 & 1) != 0) break;
    } while( true );
  }
  fn_82ABE650(param_1,uVar19 >> 0xc & 1);
  for (uVar19 = *(unsigned int *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
      uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4)) {
    if ((*(unsigned int *)(uVar19 + 0x30) >> 0x1e & 1) != 0) {
      *(unsigned int *)(uVar19 + 0x30) = *(unsigned int *)(uVar19 + 0x30) & 0xbfffffff;
    }
  }
  if (param_2 != '\0') {
    fn_82B29200(param_1,uVar20);
  }
  fn_82B44B88(param_1);
  uVar20 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
  while ((uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4), (uVar20 & 1) == 0 && (uVar20 != 0))) {
    for (piVar21 = *(int **)(uVar20 + 0x14); (((unsigned int)piVar21 & 1) == 0 && (piVar21 != (int *)0x0));
        piVar21 = *(int **)(((unsigned int)piVar21 & 0xfffffffe) + 0x28)) {
      piVar13 = piVar21;
      if ((piVar21[2] & 0x3f80U) == 0x3800) {
        while (iVar12 = *piVar13, iVar12 != 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_b8 = 0;
          uStack_ac = 0;
          auStack_c0[0] = uVar20;
          fn_82B8F208(auStack_c0,*(unsigned int *)(uVar20 + 8));
          uVar6 = fn_82AC64B8(auStack_c0);
          if (uVar6 == 0) {
LAB_82b33f14:
            fn_82AD20C0(piVar21,iVar12,param_1);
          }
          else {
            do {
              iVar11 = fn_82B41D68(param_1,piVar21,uVar6,0,1);
              if (iVar11 == iVar12) break;
              uVar6 = fn_82AC64B8(auStack_c0);
            } while (uVar6 != 0);
            if ((uVar6 & 0xffffffff) == 0) goto LAB_82b33f14;
          }
          if (*piVar13 == iVar12) {
            piVar13 = (int *)(iVar12 + 4);
          }
        }
      }
    }
  }
  goto LAB_82b33114;
LAB_82b33228:
  iVar12 = (*(unsigned int *)(iVar12 + 0x24) & 0xfffffffe) - 0x28;
  if (iVar12 == 0) {
LAB_82b33234:
    puVar7 = (unsigned int *)(uVar20 + 0x10);
    if (puVar27 != puVar7) {
      puVar27 = puVar7;
      if ((*(unsigned int *)(uVar20 + 0x14) & 1) == 0) {
        iVar12 = (*puVar7 & 0xfffffffe) - 0x28;
      }
      else {
        iVar12 = 0;
      }
    }
  }
  goto LAB_82b331ec;
LAB_82b343c4:
  bVar26 = false;
  lVar28 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 1;
  uVar25 = (unsigned int)lVar28;
  *(unsigned int *)(param_1 + 0x6c) = uVar25;
  uVar20 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
  while ((uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4), (uVar20 & 1) == 0 && (uVar20 != 0))) {
    if ((*(int *)(uVar20 + 8) == 0) || (*(int *)(*(int *)(uVar20 + 8) + 4) == 0)) {
      *(unsigned int *)(uVar20 + 0x2c) = uVar25;
      bVar26 = true;
    }
  }
  lVar23 = lVar22;
  if (bVar26) {
    lVar23 = 0;
    lVar22 = 1;
    do {
      fn_82B18558(param_1,lVar28);
      bVar26 = false;
      fn_82B44B88(param_1);
      uVar20 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
LAB_82b34244:
      uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4);
      if (((uVar20 & 1) == 0) && (uVar20 != 0)) {
LAB_82b34000:
        uVar19 = *(unsigned int *)(uVar20 + 0x14);
        do {
          piVar21 = (int *)(-(unsigned int)((uVar19 & 1) == 0) & uVar19);
          if (piVar21 == (int *)0x0) goto LAB_82b34244;
          if ((piVar21[2] & 0x3f80U) == 0x3800) {
            bVar18 = false;
            piVar13 = piVar21;
            while (iVar12 = *piVar13, iVar12 != 0) {
              uStack_90 = 0;
              uStack_88 = 0;
              uStack_8c = 0;
              uStack_98 = 0;
              auStack_a0[0] = uVar20;
              fn_82B8F208(auStack_a0,*(unsigned int *)(uVar20 + 8));
              uVar6 = fn_82AC64B8(auStack_a0);
              if (uVar6 == 0) {
LAB_82b340a8:
                uVar4 = *(unsigned int *)(iVar12 + 0xc);
                fn_82AD20C0(piVar21,iVar12,param_1);
                cVar14 = fn_82ABE2E0(uVar4);
                if (cVar14 != '\0') {
                  fn_82B8AE98(param_1,uVar4);
                  bVar18 = true;
                }
              }
              else {
                do {
                  iVar11 = fn_82B41D68(param_1,piVar21,uVar6,0,1);
                  if (iVar11 == iVar12) break;
                  uVar6 = fn_82AC64B8(auStack_a0);
                } while (uVar6 != 0);
                if ((uVar6 & 0xffffffff) == 0) goto LAB_82b340a8;
              }
              if (*piVar13 == iVar12) {
                piVar13 = (int *)(iVar12 + 4);
              }
            }
            if (*piVar21 == 0) {
              iVar12 = fn_82ABDD90(param_1,0x70,0,1);
              puVar7 = (unsigned int *)((int)piVar21 + iVar12 + -8);
              piVar13 = (int *)fn_82B841E8(param_1,piVar21[7],0,0x74,0,1);
              uVar19 = (unsigned int)piVar13 & 0xfffffffe;
              puVar27 = (unsigned int *)(((unsigned int)piVar21 & 0xfffffffe) + 0x24);
              *(unsigned int *)(uVar19 + 0x24) = *puVar27;
              *(unsigned int *)(*puVar27 & 0xfffffffe) = uVar19;
              *(unsigned int *)(uVar19 + 0x28) = (unsigned int)piVar21 & 0xfffffffe;
              *puVar27 = uVar19 + 0x28;
              iVar12 = fn_82ABDD90(param_1,0x74,0,1);
              piVar16 = piVar21 + 1;
              puVar27 = (unsigned int *)((int)piVar13 + iVar12 + -4);
              uVar19 = *puVar27;
              uVar24 = *puVar7 & 0x7fff;
              *puVar27 = uVar19 & 0xffff8000 | uVar24;
              *puVar27 = *puVar7 & 0x1fff8000 | uVar19 & 0xe0000000 | uVar24;
              while (iVar12 = *piVar16, iVar12 != 0) {
                if (*(int *)(iVar12 + 0x10) != 0) {
                  piVar17 = (int *)(*(int *)(iVar12 + 0xc) + 4);
                  for (iVar11 = *piVar17; iVar11 != iVar12; iVar11 = *(int *)(iVar11 + 8)) {
                    piVar17 = (int *)(iVar11 + 8);
                  }
                  *piVar17 = *(int *)(iVar12 + 8);
                  *(int *)(iVar12 + 8) = piVar13[1];
                  piVar13[1] = iVar12;
                  *(int **)(iVar12 + 0xc) = piVar13;
                }
                if (*piVar16 == iVar12) {
                  piVar16 = (int *)(iVar12 + 8);
                }
              }
              fn_82B8AC10(param_1,piVar21,0,1);
              piVar21 = piVar13;
            }
            if (bVar18) goto LAB_82b34000;
          }
          uVar19 = *(unsigned int *)(((unsigned int)piVar21 & 0xfffffffe) + 0x28);
        } while( true );
      }
      uVar20 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
      while ((uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4), (uVar20 & 1) == 0 && (uVar20 != 0))) {
        if (*(int *)(uVar20 + 0x34) == 0) {
          *(unsigned int *)(uVar20 + 0x2c) = uVar25;
          bVar26 = true;
        }
      }
    } while (bVar26);
  }
  if ((*(unsigned int *)(param_1 + 0x28) & 0x400) == 0) {
LAB_82b343ec:
    do {
      uVar20 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4);
      do {
        uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4);
        uVar20 = -(unsigned int)((uVar20 & 1) == 0) & uVar20;
        if (uVar20 == 0) {
          if (lVar23 != 0) {
            fn_82B44B88(param_1);
          }
          return lVar22;
        }
      } while (((((*(unsigned int *)(uVar20 + 0x30) >> 0x13 & 1) != 0) ||
                ((*(unsigned int *)(uVar20 + 0x30) >> 0x14 & 1) != 0)) || (param_2 == '\0')) ||
              (cVar14 = fn_82B29200(param_1,uVar20), cVar14 == '\0'));
      lVar22 = 1;
      lVar23 = 1;
    } while( true );
  }
  bVar26 = false;
  for (uVar20 = *(unsigned int *)(param_1 + 4); ((uVar20 & 1) == 0 && (uVar20 != 0));
      uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 4)) {
    if ((*(unsigned int *)(uVar20 + 0x30) >> 0x13 & 1) != 0) {
      piVar21 = (int *)(*(int *)(uVar20 + 0x74) + 0x10);
      if (*piVar21 != 0) {
        for (; piVar21 != (int *)0x0; piVar21 = (int *)piVar21[1]) {
          if (((*(unsigned int *)(*piVar21 + 0x30) >> 0x16 & 1) == 0) &&
             ((*(unsigned int *)(*piVar21 + 0x30) >> 0x14 & 1) != 0)) goto LAB_82b3439c;
        }
      }
      for (iVar12 = *(int *)(uVar20 + 8); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0xc)) {
        iVar11 = *(int *)(iVar12 + 4);
        if ((*(unsigned int *)(iVar11 + 0x24) & 1) == 0) {
          lVar28 = ((unsigned __int64)*(unsigned int *)(iVar11 + 0x20) & 0xfffffffe) - 0x28;
        }
        else {
          lVar28 = 0;
        }
        fn_82B8AC10(param_1,lVar28,0,1);
        for (puVar27 = *(unsigned int **)(iVar11 + 0xc); puVar27 != (unsigned int *)0x0;
            puVar27 = (unsigned int *)puVar27[2]) {
          if (*puVar27 != uVar20) {
            fn_82B8F1B0(iVar11,*puVar27,param_1);
            break;
          }
        }
      }
      bVar26 = true;
      *(unsigned int *)(uVar20 + 0x30) = *(unsigned int *)(uVar20 + 0x30) & 0xfff7ffff;
    }
LAB_82b3439c:;}
  if (!bVar26) goto LAB_82b343ec;
  lVar22 = 1;
  goto LAB_82b343c4;
}

