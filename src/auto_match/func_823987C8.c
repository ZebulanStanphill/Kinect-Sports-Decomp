#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822B91F8();
extern int fn_822B9390();
extern int fn_822C9BF8();
extern int fn_822DBD60();
extern int fn_8234C258();
extern int fn_8234C320();
extern int fn_82398BD8();
extern int fn_8239FF60();
extern int fn_823B3808();
extern int fn_8265C9E0();
extern int fn_82D7E470();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B5194;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f4;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_823987C8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  int iVar8;
  unsigned int *puVar9;
  char cVar11;
  int *piVar10;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int *piVar16;
  double dVar17;
  unsigned char **ppuStack_f8;
  unsigned int uStack_f4;
  unsigned char auStack_f0 [8];
  unsigned __int64 uStack_e8;
  unsigned __int64 uStack_e0;
  unsigned __int64 uStack_d8;
  unsigned char auStack_d0 [8];
  unsigned __int64 uStack_c8;
  unsigned __int64 uStack_c0;
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [144];
  
  iVar7 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 4))();
  piVar10 = *(int **)(iVar7 * 4 + **(int **)(param_1 + 8));
  uVar6 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x10))(*(int **)(param_1 + 0x2e0));
  iVar7 = fn_822ABA88(*(unsigned int *)(piVar10[4] * 4 + *piVar10),uVar6);
  if ((*(int *)(param_1 + 0x178) != 2) || (*(int *)(*(int *)(param_1 + 0x2e0) + 0x68) == 0)) {
    fn_8239FF60(*(unsigned int *)(param_1 + 0x2dc),0x14);
  }
  *(int *)(param_1 + 0x1f8) = iVar7;
  iVar8 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar8 = fn_82250A18();
  }
  iVar8 = fn_82398BD8(param_1,*(unsigned char *)(iVar8 + 4));
  puVar9 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar9 == (unsigned int *)0x0) {
    puVar9 = (unsigned int *)0x0;
  }
  else {
    puVar9[1] = 1;
    puVar9[2] = 1;
    *puVar9 = &lbl_821B5194;
    if (puVar9 + 4 != (unsigned int *)0x0) {
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
    }
  }
  uStack_e8 = CONCAT44(param_1,(((unsigned __int64)(uStack_e8) >> 32) & 0xFFFFFFFF));
  uStack_c8 = uStack_e8;
  uStack_c0 = uStack_e0;
  cVar11 = fn_82D7E470(auStack_d0);
  if (cVar11 == '\0') {
    uStack_e0 = uStack_c8;
    uStack_d8 = uStack_c0;
  }
  uVar1 = *(unsigned int *)(iVar8 + 0x2a8);
  uVar6 = fn_823B3808(auStack_90,auStack_f0);
  fn_822C9BF8(uVar1,puVar9 + 4,uVar6);
  fn_822DBD60(auStack_f0);
  iVar2 = *(int *)(param_1 + 0x830);
  iVar3 = *(int *)(iVar2 + 4);
  piVar10 = (int *)fn_8265C9E0(0x10);
  if (piVar10 == (int *)0x0) {
    uStack_f4 = 0;
    ppuStack_f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_f8);
  }
  piVar16 = piVar10 + 2;
  *piVar10 = iVar2;
  piVar10[1] = iVar3;
  if (piVar16 != (int *)0x0) {
    *piVar16 = 0;
    piVar10[3] = 0;
    if ((puVar9 != (unsigned int *)0x0) && (cVar11 = fn_8223AAC0(puVar9), cVar11 != '\0')) {
      if (piVar10[3] != 0) {
        fn_822315A0();
      }
      piVar10[3] = (int)puVar9;
      *piVar16 = (int)(puVar9 + 4);
    }
  }
  if (*(int *)(param_1 + 0x834) == 0x1ffffffe) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(param_1 + 0x834) = *(int *)(param_1 + 0x834) + 1;
  *(int **)(iVar2 + 4) = piVar10;
  *(int **)piVar10[1] = piVar10;
  uVar5 = (unsigned int)LZCOUNT(*(unsigned int *)(iVar7 + 0x214)) >> 5;
  if (*(int *)(iVar7 + 0x24) != 0) {
    uVar4 = (unsigned int)(uVar5 == 0);
    fn_82230110(auStack_b0,0xffffffff821acab4);
    fn_8234C258((unsigned __int64)*(unsigned int *)(iVar7 + 0x118) + 0x150,uVar4,auStack_b0);
    fn_82230300(auStack_b0,1,0);
    if (*(int *)((uVar4 + 0xe) * 0x2c + *(int *)(iVar7 + 0x118) + 0x18) != 1) {
      fn_8234C320(1);
    }
  }
  if (*(int *)(iVar7 + 0x24) != 0) {
    fn_822B91F8(*(unsigned int *)(iVar7 + 0x11c),*(unsigned int *)(iVar7 + 0x14),
                    *(unsigned int *)(iVar8 + 0xa8));
    *(unsigned int *)(iVar8 + 0xb4) = 1;
    *(int *)(param_1 + 0x1e4) = iVar8;
    if (*(int *)(param_1 + 0x178) != 2) {
      (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x50))();
    }
    lVar13 = 0;
    if (((*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) & 0xfffffffcU) != 0) {
      lVar14 = 0;
      dVar17 = (double)ltcg_pool_0_0f;
      do {
        uVar12 = 0;
        piVar10 = *(int **)(**(int **)(param_1 + 8) + (int)lVar14);
        uVar15 = ZEXT48(piVar10);
        if (*(int *)(*(int *)(piVar10[4] * 4 + *piVar10) + 8) != 0) {
          do {
            iVar7 = fn_822ABA88();
            *(float *)(iVar7 + 0x260) = (float)dVar17;
            *(unsigned int *)(iVar7 + 0x2dc) = 0;
            uVar12 = uVar12 + 1;
          } while ((uVar12 & 0xffffffff) <
                   (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar15)[4] * 4 + *(int *)uVar15) + 8));
        }
        lVar13 = lVar13 + 1;
        lVar14 = lVar14 + 4;
      } while ((int)lVar13 < (*(int **)(param_1 + 8))[1] - **(int **)(param_1 + 8) >> 2);
    }
    if (puVar9 != (unsigned int *)0x0) {
      fn_822315A0(puVar9);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_822B9390(*(unsigned int *)(iVar7 + 0x11c),*(unsigned int *)(iVar8 + 0xa8),(uVar5 == 0) + ' ')
  ;
}

