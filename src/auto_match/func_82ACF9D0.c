typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_82AA65B0();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82ABE2E0();
extern int fn_82ACC558();
extern int fn_82ACDC28();
extern int fn_82ACFEF0();
extern int fn_82AD20C0();
extern int fn_82B81D80();
extern int fn_82B8AC10();
extern unsigned int lbl_820D7B2B;


void fn_82ACF9D0(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  char cVar7;
  unsigned __int64 uVar8;
  bool bVar10;
  unsigned __int64 uVar9;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int auStack_70 [28];
  
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    if ((*(unsigned int *)(uVar1 + 0x14) & 1) == 0) {
      uVar13 = *(unsigned int *)(uVar1 + 0x14);
      iVar6 = uVar1 + 0x10;
    }
    else {
      uVar13 = *(unsigned int *)(uVar1 + 0x1c);
      iVar6 = uVar1 + 0x18;
    }
    uVar13 = -(unsigned int)((uVar13 & 1) == 0) & uVar13;
    if (uVar13 != 0) {
LAB_82acfa30:
      do {
        *(unsigned int *)(uVar13 + 8) = *(unsigned int *)(uVar13 + 8) & 0xfbffffff;
        uVar13 = *(unsigned int *)((uVar13 & 0xfffffffe) + 0x28);
        if ((uVar13 & 1) == 0) {
          if (uVar13 != 0) goto LAB_82acfa30;
        }
        if (((iVar6 == uVar1 + 0x18) || (uVar13 = *(unsigned int *)(uVar1 + 0x1c), (uVar13 & 1) != 0)) ||
           (iVar6 = uVar1 + 0x18, uVar13 == 0)) break;
      } while( true );
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      return;
    }
    if ((*(unsigned int *)(uVar1 + 0x44) & 0x20000000) != 0) {
      for (uVar13 = *(unsigned int *)(uVar1 + 0x14); ((uVar13 & 1) == 0 && (uVar13 != 0));
          uVar13 = *(unsigned int *)((uVar13 & 0xfffffffe) + 0x28)) {
        if ((*(unsigned int *)(uVar13 + 8) & 0x1c000) != 0) {
          for (puVar15 = *(unsigned int **)(uVar13 + 4); puVar15 != (unsigned int *)0x0;
              puVar15 = (unsigned int *)puVar15[2]) {
            if ((*puVar15 & 0xe000000) != 0) {
              bVar10 = true;
              if ((*puVar15 >> 0x1e & 1) != 0) goto LAB_82acfb10;
              break;
            }
          }
          bVar10 = false;
LAB_82acfb10:
          if (!bVar10) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
        }
        if ((*(unsigned int *)(uVar13 + 0x10) >> 0x18 & 1) == 0) {
          *(unsigned int *)(uVar13 + 0x10) = *(unsigned int *)(uVar13 + 0x10) | 0x1000000;
          *(unsigned int *)(uVar13 + 0x14) = *(unsigned int *)(uVar13 + 0x14) | 0x1fff;
        }
      }
      uVar13 = 0;
      do {
        iVar6 = fn_82ABE250(param_1,0x14,0x21);
        fn_82ACC558(iVar6,param_1);
        cVar7 = fn_82ACDC28(param_1,uVar1,iVar6);
        if (cVar7 == '\0') break;
        uVar14 = *(unsigned int *)(param_1 + 0x31c);
        if ((uVar14 == 0) && (uVar14 = *(unsigned int *)(param_1 + 0x318), uVar14 == 0)) {
          uVar14 = 0x20;
        }
        if (*(unsigned int *)(iVar6 + 0x10) < uVar14) break;
        uVar13 = uVar13 + 1;
        iVar6 = 0;
      } while (uVar13 < 100);
      if (uVar13 == 100) {
        if (*(int *)(param_1 + 0x318) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdbe);
        }
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xded);
      }
      uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x318);
      uVar8 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x10);
      uVar11 = uVar9;
      if (uVar9 == 0) {
        uVar11 = 0x20;
      }
      if (uVar11 <= uVar8) {
        if (uVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0xdbe);
        }
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0xded);
      }
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
      uVar12 = uVar11;
      if ((uVar11 == 0) && (uVar12 = uVar9, uVar9 == 0)) {
        uVar12 = 0x20;
      }
      if (uVar12 <= uVar8) {
        if ((uVar11 == 0) && (uVar11 = uVar9, uVar9 == 0)) {
          uVar11 = 0x20;
        }
        fn_82AA65B0(param_1,0xe14,uVar11,uVar8 + 1);
      }
      puVar15 = (unsigned int *)(uVar1 + 0x18);
      if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
        uVar13 = *puVar15;
        puVar4 = (unsigned int *)0x0;
        do {
          while( true ) {
            uVar14 = uVar13 & 0xfffffffe;
            puVar5 = (unsigned int *)(uVar14 - 0x28);
            if (puVar5 == (unsigned int *)0x0) goto LAB_82acfe78;
            uVar13 = *(unsigned int *)(uVar14 - 0x20);
            *(unsigned int *)(uVar14 - 0x20) = uVar13 & 0xfbffffff;
            cVar7 = fn_82ABE2E0(puVar5);
            if (cVar7 == '\0') {
              uVar3 = *(unsigned int *)(uVar14 - 0x14) >> 0xd;
              if ((uVar3 & 0xf) != 0) {
                if ((uVar13 & 0x3f80) == 0x3700) {
                  uVar11 = 0;
                  puVar16 = puVar5;
                  while (puVar2 = (unsigned int *)*puVar16, puVar2 != (unsigned int *)0x0) {
                    if ((*puVar2 & 0xe000000) == 0) {
                      fn_82AD20C0(puVar5,puVar2,param_1);
                    }
                    else if (((~(unsigned __int64)*puVar2 & 0xffffffff) >> 0x1e & 1) != 0) {
                      uVar13 = puVar2[3];
                      uVar8 = fn_82ACFEF0(param_1,uVar3 & 0xfff,uVar11,puVar5,uVar13,auStack_70)
                      ;
                      *(unsigned int *)(uVar13 + 0x14) = *(unsigned int *)(uVar13 + 0x14) & 0xfe001fff;
                      fn_82B81D80(uVar13,uVar8,auStack_70[0]);
                      uVar11 = uVar8 & 0xf | uVar11;
                    }
                    if ((unsigned int *)*puVar16 == puVar2) {
                      puVar16 = puVar2 + 1;
                    }
                  }
                  puVar16 = (unsigned int *)(uVar14 - 0x24);
                  while (puVar2 = (unsigned int *)*puVar16, puVar2 != (unsigned int *)0x0) {
                    if (puVar2[4] != 0) {
                      if (((*puVar2 & 0x40000000) != 0) ||
                         (bVar10 = true, (*puVar2 & 0xe000000) != 0)) {
                        bVar10 = false;
                      }
                      if (bVar10) {
                        fn_82AD20C0(puVar2[4],puVar2,param_1);
                      }
                    }
                    if ((unsigned int *)*puVar16 == puVar2) {
                      puVar16 = puVar2 + 2;
                    }
                  }
                }
                *(unsigned int *)(uVar14 - 0x14) = *(unsigned int *)(uVar14 - 0x14) & 0xfe001fff;
                fn_82B81D80(puVar5,uVar3 & 0xfff,(&lbl_820D7B2B)[uVar3 & 0xf]);
              }
            }
            else {
              if ((((unsigned __int64)uVar13 & 0xfbffffff) >> 6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              fn_82B8AC10(param_1,puVar5,0,1);
            }
            if (puVar4 != (unsigned int *)0x0) break;
            if ((*(unsigned int *)(uVar1 + 0x1c) & 1) == 0) {
              puVar16 = (unsigned int *)((*puVar15 & 0xfffffffe) - 0x28);
            }
            else {
              puVar16 = (unsigned int *)0x0;
            }
            if (puVar5 == puVar16) {
LAB_82acfe0c:
              uVar13 = *(unsigned int *)(uVar14 - 4);
              puVar4 = puVar5;
              if ((uVar13 & 1) != 0) goto LAB_82acfe78;
            }
            else {
              if ((*(unsigned int *)(uVar1 + 0x1c) & 1) != 0) goto LAB_82acfe78;
              uVar13 = *puVar15;
            }
          }
          uVar13 = puVar4[9];
          if ((uVar13 & 1) == 0) {
            puVar16 = (unsigned int *)((uVar13 & 0xfffffffe) - 0x28);
          }
          else {
            puVar16 = (unsigned int *)0x0;
          }
          if (puVar5 == puVar16) goto LAB_82acfe0c;
        } while ((uVar13 & 1) == 0);
      }
    }
LAB_82acfe78:
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

