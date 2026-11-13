typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BA0450();
extern int fn_82BA04B8();
extern int fn_82BA0540();
extern int fn_82BA05E8();
extern int fn_82BA06C8();
extern int fn_82BA3120();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern int fn_82BC2E88();
extern int fn_82BC43D8();
extern int fn_82BC55C8();


void fn_82BA3180(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  unsigned int *puVar5;
  int *piVar6;
  int iVar7;
  char cVar13;
  int iVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int *puVar17;
  
  *(int *)(param_1 + 0x864) = *(int *)(param_1 + 0x864) + 1;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x14);
  puVar17 = puVar5 + 1;
  *puVar5 = uVar1;
  if (puVar17 == (unsigned int *)0x0) {
    puVar17 = (unsigned int *)0x0;
  }
  else {
    fn_82BA03B8(puVar17,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  }
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x60) + 4);
  uVar15 = (unsigned __int64)uVar2;
  if (0 < (int)uVar2) {
    iVar14 = uVar2 << 2;
    uVar16 = uVar15;
    do {
      uVar16 = uVar16 - 1;
      iVar14 = iVar14 + -4;
      if (puVar17[1] != 0) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dee60,0xffffffff820deb50,0xb30);
      }
      iVar7 = *(int *)(param_1 + 0x60);
      if ((uVar16 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar7 + 4)) {
        piVar6 = (int *)(*(int *)(iVar7 + 8) + iVar14);
      }
      else {
        piVar6 = (int *)fn_82BC0088(iVar7,uVar16);
      }
      piVar6 = (int *)*piVar6;
      iVar7 = (**(int (***)())(*piVar6 + 8))(piVar6);
      if ((((1 < iVar7) || (iVar7 = (**(int (***)())(*piVar6 + 4))(piVar6), iVar7 == 0)) ||
          (((unsigned int)piVar6[0x39] >> 3 & 1) != 0)) ||
         (cVar13 = (**(int (***)())(*(int *)piVar6[0x3b] + 0x18))(), cVar13 != '\0')) goto LAB_82ba3738;
      piVar12 = (int *)piVar6[0x3b];
      cVar13 = fn_82BC2E88(piVar12,param_1);
      if ((cVar13 == '\0') ||
         (cVar13 = fn_82BA3120(piVar12,*(unsigned int *)(param_1 + 100)), cVar13 == '\0')) {
LAB_82ba34c4:
        iVar7 = piVar6[0x14];
        iVar8 = piVar6[0xe];
        while ((puVar17[1] != 0 && (piVar6 = *(int **)puVar17[2], piVar6 != (int *)0x0))) {
          fn_82BBFFC8(puVar17,0);
          cVar13 = fn_82BC2E88(piVar6,param_1);
          if (((cVar13 == '\0') ||
              (((cVar13 = fn_82BA3120(piVar6,*(unsigned int *)(param_1 + 100)), cVar13 == '\0' ||
                (piVar6[6] == 0x32)) || (piVar6[5] == 0)))) ||
             ((cVar13 = (**(int (***)())(*piVar6 + 0x18))(piVar6), cVar13 != '\0' || (piVar6[6] == 0x80)
              ))) {
            piVar11 = (int *)fn_82BC43D8(0x31,*(unsigned int *)(param_1 + 0xc));
            fn_82BA05E8(piVar11,1,piVar6);
            (**(int (***)())(*piVar11 + 100))(piVar11,param_1,iVar7,iVar8);
            fn_82BA0540(piVar11,*(unsigned int *)(param_1 + 100));
            cVar13 = fn_82BA3120(piVar6,*(unsigned int *)(param_1 + 100));
            piVar12 = *(int **)(param_1 + 100);
            if (cVar13 == '\0') {
              iVar10 = piVar12[0xed];
              piVar6 = piVar12;
            }
            else {
              iVar10 = piVar6[0xed];
              if (iVar10 == piVar12[0xed]) {
                iVar10 = *piVar6;
                piVar12 = piVar6;
                while ((cVar13 = (**(int (***)())(iVar10 + 0x28))(piVar12), piVar9 = piVar6,
                       cVar13 == '\0' && (piVar9 = piVar12, piVar12 != *(int **)(param_1 + 100)))) {
                  piVar12 = (int *)piVar12[2];
                  iVar10 = *piVar12;
                }
                iVar10 = piVar6[0xed];
                piVar6 = piVar9;
              }
            }
            fn_82BC55C8(iVar10,piVar6,piVar11);
          }
          else {
            iVar10 = (**(int (***)())(*piVar6 + 0x2c))(piVar6);
            if (iVar10 == 0) {
              if (((unsigned int)piVar6[0x39] >> 9 & 1) != 0) {
                iVar10 = fn_82BA0450(piVar6);
                if (*(int *)(iVar10 + 0x37c) != *(int *)(param_1 + 0x864)) {
                  *(int *)(iVar10 + 0x37c) = *(int *)(param_1 + 0x864);
                  piVar12 = (int *)fn_82BC0088(puVar17,puVar17[1]);
                  *piVar12 = iVar10;
                }
                fn_82BA04B8(piVar6);
              }
              (**(int (***)())(*piVar6 + 100))(piVar6,param_1,iVar7,iVar8);
              fn_82BA0540(piVar6,*(unsigned int *)(param_1 + 100));
            }
            else {
              iVar10 = 1;
              if (0 < piVar6[5]) {
                piVar12 = piVar6 + 0x3b;
                do {
                  iVar3 = *piVar12;
                  if (*(int *)(iVar3 + 0x37c) != *(int *)(param_1 + 0x864)) {
                    *(int *)(iVar3 + 0x37c) = *(int *)(param_1 + 0x864);
                    piVar11 = (int *)fn_82BC0088(puVar17,puVar17[1]);
                    *piVar11 = iVar3;
                  }
                  iVar10 = iVar10 + 1;
                  piVar12 = piVar12 + 1;
                } while (iVar10 <= piVar6[5]);
              }
              (**(int (***)())(*piVar6 + 0x60))(piVar6);
            }
          }
        }
      }
      else {
        iVar7 = (**(int (***)())(*piVar12 + 0x2c))(piVar12);
        if (iVar7 == 0) {
          if (((piVar12[6] == 0x32) || (piVar12[5] == 0)) ||
             ((cVar13 = (**(int (***)())(*piVar12 + 0x18))(piVar12), cVar13 != '\0' ||
              ((piVar12[6] == 0x80 || (((unsigned int)piVar12[0x39] >> 9 & 1) != 0)))))) goto LAB_82ba3738;
          fn_82BA06C8(param_1,piVar6);
          (**(int (***)())(*piVar6 + 0x60))(piVar6);
          if (piVar12[0xdf] != *(int *)(param_1 + 0x864)) {
            piVar12[0xdf] = *(int *)(param_1 + 0x864);
            piVar11 = (int *)fn_82BC0088(puVar17,puVar17[1]);
            *piVar11 = (int)piVar12;
          }
          goto LAB_82ba34c4;
        }
        bVar4 = true;
        iVar7 = 1;
        if (0 < piVar12[5]) {
          piVar11 = piVar12 + 0x3b;
          do {
            piVar9 = (int *)*piVar11;
            iVar8 = (**(int (***)())(*piVar9 + 0x2c))(piVar9);
            if (((((iVar8 != 0) ||
                  (cVar13 = fn_82BA3120(piVar9,*(unsigned int *)(param_1 + 100)), cVar13 == '\0'))
                 || (piVar9[6] == 0x32)) ||
                ((piVar9[5] == 0 || (cVar13 = (**(int (***)())(*piVar9 + 0x18))(piVar9), cVar13 != '\0')
                 ))) || (piVar9[6] == 0x80)) {
              bVar4 = false;
            }
            iVar7 = iVar7 + 1;
            piVar11 = piVar11 + 1;
          } while (iVar7 <= piVar12[5]);
        }
        if (bVar4) {
          iVar7 = 1;
          if (0 < piVar12[5]) {
            piVar11 = piVar12 + 0x3b;
            do {
              iVar8 = *piVar11;
              if (*(int *)(iVar8 + 0x37c) != *(int *)(param_1 + 0x864)) {
                *(int *)(iVar8 + 0x37c) = *(int *)(param_1 + 0x864);
                piVar9 = (int *)fn_82BC0088(puVar17,puVar17[1]);
                *piVar9 = iVar8;
              }
              iVar7 = iVar7 + 1;
              piVar11 = piVar11 + 1;
            } while (iVar7 <= piVar12[5]);
          }
          fn_82BA06C8(param_1,piVar6);
          (**(int (***)())(*piVar12 + 0x60))(piVar12);
          (**(int (***)())(*piVar6 + 0x60))(piVar6);
          goto LAB_82ba34c4;
        }
LAB_82ba3738:
        fn_82BA0540(piVar6,*(unsigned int *)(param_1 + 100));
      }
      uVar15 = uVar15 - 1;
    } while (0 < (__int64)uVar15);
  }
  return;
}

