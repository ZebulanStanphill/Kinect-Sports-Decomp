#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_825275B0();
extern int fn_82630B08();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822B9440(int *param_1)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned __int64 in_r0;
  unsigned int uVar7;
  unsigned int *puVar8;
  int iVar9;
  __int64 lVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  piVar11 = param_1 + 4;
  piVar12 = param_1 + 0x24;
  lVar10 = 2;
  piVar13 = piVar11;
  do {
    if (*piVar13 != 0) {
      *piVar12 = *piVar13;
      *(unsigned short *)(piVar12 + 1) = *(unsigned short *)(piVar13 + 2);
      iVar2 = *piVar12;
      if (*(int *)(*(int *)(*param_1 + 0x8c0) + 0x90) != 0) {
        uVar7 = 0;
        piVar14 = piVar11;
LAB_822b94b0:
        if (*piVar14 != iVar2) break;
        *(unsigned int *)(iVar2 + 0x1b4) = 0;
        lVar15 = 2;
        puVar8 = (unsigned int *)(iVar2 + 0x1dc);
        *(unsigned char *)(param_1 + (uVar7 + 1) * 0x10) = 1;
        do {
          puVar3 = puVar8 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar3 & 0xfffffffd;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        goto LAB_822b950c;
      }
      fn_825275B0();
LAB_822b950c:
      iVar2 = *piVar12;
      lVar15 = 2;
      piVar14 = piVar11;
      do {
        if (*piVar14 == iVar2) {
          *piVar14 = 0;
          piVar14[1] = -1;
          *(unsigned short *)(piVar14 + 2) = 0x5b;
          *(unsigned char *)(piVar14 + 0xc) = 0;
          *(unsigned char *)((int)piVar14 + 0x31) = 0;
          puVar4 = (unsigned int *)((unsigned int)(piVar14 + 8) & 0xfffffff0);
          *puVar4 = in_register_000104d0;
          puVar4[1] = in_register_000104d4;
          puVar4[2] = in_register_000104d8;
          puVar4[3] = in_vr77;
          *(unsigned char *)((int)piVar14 + 0x32) = 0;
          piVar14[0xd] = 0;
          piVar14[0xe] = 0;
        }
        piVar14 = piVar14 + 0x10;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar15 = 4;
      piVar14 = (int *)(*(int *)(*piVar12 + 0x8c0) + 0x80);
      do {
        uVar1 = *(unsigned short *)((int *)*piVar14 + 2);
        iVar2 = *(int *)*piVar14;
        if (uVar1 != 0) {
          iVar9 = iVar2 + 0x20;
          uVar16 = (unsigned __int64)uVar1;
          do {
            puVar4 = (unsigned int *)((int)&lbl_8329EAD0 + (int)in_r0 & 0xfffffff0);
            uVar17 = puVar4[1];
            uVar18 = puVar4[2];
            uVar19 = puVar4[3];
            puVar5 = (unsigned int *)(iVar9 - 0x20U & 0xfffffff0);
            *puVar5 = *puVar4;
            puVar5[1] = uVar17;
            puVar5[2] = uVar18;
            puVar5[3] = uVar19;
            uVar19 = uRam8329eaec;
            uVar18 = uRam8329eae8;
            uVar17 = uRam8329eae4;
            puVar4 = (unsigned int *)(iVar9 - 0x10U & 0xfffffff0);
            *puVar4 = lbl_8329EAE0;
            puVar4[1] = uVar17;
            puVar4[2] = uVar18;
            puVar4[3] = uVar19;
            uVar19 = uRam8329eafc;
            uVar18 = uRam8329eaf8;
            uVar17 = uRam8329eaf4;
            puVar4 = (unsigned int *)((int)in_r0 + iVar9 & 0xfffffff0);
            *puVar4 = lbl_8329EAF0;
            puVar4[1] = uVar17;
            puVar4[2] = uVar18;
            puVar4[3] = uVar19;
            uVar19 = uRam8329eb0c;
            uVar18 = uRam8329eb08;
            uVar17 = uRam8329eb04;
            puVar4 = (unsigned int *)(iVar9 + 0x10U & 0xfffffff0);
            *puVar4 = lbl_8329EB00;
            puVar4[1] = uVar17;
            puVar4[2] = uVar18;
            puVar4[3] = uVar19;
            iVar9 = iVar9 + 0x40;
            uVar16 = uVar16 - 1;
          } while (uVar16 != 0);
        }
        lVar6 = (unsigned __int64)uVar1 * 0x40;
        for (uVar16 = CONCAT44(iVar2,iVar2) & 0xffffffffffffff7f; (int)uVar16 < (int)lVar6 + iVar2;
            uVar16 = uVar16 + 0x80) {
          dataCacheBlockFlush(uVar16);
        }
        fn_82630B08(lbl_8320A898,iVar2,lVar6,0);
        lVar15 = lVar15 + -1;
        piVar14 = piVar14 + 1;
      } while (lVar15 != 0);
      *piVar13 = 0;
      piVar13[1] = -1;
      *(unsigned short *)(piVar13 + 2) = 0x5b;
      *(unsigned char *)(piVar13 + 0xc) = 0;
      *(unsigned char *)((int)piVar13 + 0x31) = 0;
      *(unsigned char *)((int)piVar13 + 0x32) = 0;
      piVar13[0xd] = 0;
    }
    lVar10 = lVar10 + -1;
    piVar12 = piVar12 + 2;
    piVar13 = piVar13 + 0x10;
    if (lVar10 == 0) {
      return;
    }
  } while( true );
  uVar7 = uVar7 + 1;
  piVar14 = piVar14 + 0x10;
  if (1 < uVar7) goto LAB_822b950c;
  goto LAB_822b94b0;
}

