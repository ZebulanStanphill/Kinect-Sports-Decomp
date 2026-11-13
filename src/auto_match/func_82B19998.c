#define true 1
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82B16C28();


unsigned char fn_82B19998(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  char cVar10;
  unsigned int uVar11;
  unsigned char bVar12;
  int *piVar13;
  
  piVar1 = *(int **)(param_2 + 4);
  bVar12 = 1;
  while( true ) {
    if ((((unsigned int)piVar1 & 1) != 0) || (piVar1 == (int *)0x0)) {
      if (bVar12 != 0) {
        uVar11 = *(unsigned int *)(param_3 + 4);
        if ((uVar11 & 1) == 0) {
          bVar12 = -((*(unsigned int *)(param_2 + 4) & 1) == 0) & bVar12;
        }
        if (((uVar11 & 1) == 0) && (uVar11 != 0)) {
          while ((*(unsigned int *)(uVar11 + 8) & 0x20000000) != 0) {
            uVar11 = *(unsigned int *)((uVar11 & 0xfffffffe) + 0x28);
            if ((uVar11 & 1) != 0) {
              return bVar12;
            }
            if (uVar11 == 0) {
              return bVar12;
            }
          }
          bVar12 = 0;
        }
      }
      return bVar12;
    }
    piVar2 = *(int **)(param_3 + 4);
    bVar12 = -(((unsigned int)piVar2 & 1) == 0) & bVar12;
    if ((((unsigned int)piVar2 & 1) == 0) && (piVar2 != (int *)0x0)) break;
LAB_82b19bf4:
    piVar1 = *(int **)(((unsigned int)piVar1 & 0xfffffffe) + 0x28);
  }
  do {
    uVar11 = piVar2[2];
    if ((uVar11 & 0x20000000) == 0) {
      uVar3 = piVar1[2];
      uVar8 = uVar3 >> 7 & 0x7f;
      if ((((uVar8 == (uVar11 >> 7 & 0x7f)) && (((uVar3 ^ uVar11) >> 0x19 & 1) == 0)) &&
          (uVar7 = uVar3 >> 5 & 1, uVar7 == (uVar11 >> 5 & 1))) &&
         ((((uVar3 ^ uVar11) & 0x380000) == 0 && (((piVar2[5] ^ piVar1[5]) & 1U) == 0)))) {
        if ((uVar8 == 0x75) &&
           ((iVar9 = fn_82ABDD90(param_1,0x75,0,0),
            (*(unsigned int *)((int)piVar1 + iVar9 + -0x10) & 7) != 0 ||
            ((*(unsigned int *)((int)piVar2 + iVar9 + -0x10) & 7) != 0)))) {
          bVar12 = 0;
        }
        else {
          if (uVar7 != 0) {
            for (puVar4 = (unsigned int *)piVar1[1];
                (puVar4 != (unsigned int *)0x0 && ((puVar4[4] == 0 || ((*puVar4 & 0xe000000) == 0))));
                puVar4 = (unsigned int *)puVar4[2]) {
            }
            for (puVar5 = (unsigned int *)piVar2[1];
                (puVar5 != (unsigned int *)0x0 && ((puVar5[4] == 0 || ((*puVar5 & 0xe000000) == 0))));
                puVar5 = (unsigned int *)puVar5[2]) {
            }
            if ((puVar4 == (unsigned int *)0x0) || (puVar5 == (unsigned int *)0x0)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            if (((*puVar5 ^ *puVar4) & 0x1ffe000) != 0) goto LAB_82b19bac;
          }
          piVar13 = piVar2 + 0xb;
          for (uVar11 = 0; uVar11 < ((unsigned int)piVar1[2] >> 0x13 & 7); uVar11 = uVar11 + 1) {
            iVar9 = *(int *)(((int)piVar1 - (int)piVar2) + (int)piVar13);
            cVar10 = fn_82B16C28(param_1,iVar9,*piVar13);
            if (cVar10 == '\0') {
              bVar12 = 0;
              if (iVar9 != 0) goto LAB_82b19bac;
              break;
            }
            piVar13 = piVar13 + 1;
          }
          for (iVar9 = *piVar1; iVar9 != 0; iVar9 = *(int *)(iVar9 + 4)) {
            iVar6 = *piVar2;
            while( true ) {
              if (iVar6 == 0) {
                bVar12 = 0;
                goto LAB_82b19bac;
              }
              cVar10 = fn_82B16C28(param_1,iVar9,iVar6);
              if (cVar10 != '\0') break;
              iVar6 = *(int *)(iVar6 + 4);
            }
          }
          piVar1[8] = (int)piVar2;
          piVar1[2] = piVar1[2] | 0x20000000;
          piVar2[8] = (int)piVar1;
          piVar2[2] = piVar2[2] | 0x20000000;
        }
        goto LAB_82b19bf4;
      }
    }
LAB_82b19bac:
    piVar2 = *(int **)(((unsigned int)piVar2 & 0xfffffffe) + 0x28);
    if ((((unsigned int)piVar2 & 1) != 0) || (piVar2 == (int *)0x0)) goto LAB_82b19bf4;
  } while( true );
}

