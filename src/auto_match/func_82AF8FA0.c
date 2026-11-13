extern unsigned int *auStack_c0;
extern int fn_82ABF768();
extern int fn_82AF4E80();
extern int fn_82B86C90();
extern int fn_82B8C058();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82AF8FA0(unsigned __int64 param_1,int param_2,unsigned int *param_3,unsigned int *param_4,unsigned __int64 param_5,
             __int64 param_6)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char cVar9;
  unsigned int uVar7;
  __int64 lVar6;
  int iVar8;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  int *piVar16;
  int *piVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  double dVar20;
  unsigned char auStack_c0 [1];
  double adStack_b0 [22];
  
  uVar1 = param_3[3];
  uVar18 = *(unsigned int *)(param_2 + 8) >> 7 & 0x7f;
  if (((uVar18 != 0) && (uVar18 < 3)) && ((*(unsigned int *)(param_2 + 8) & 1) == 0)) {
    dVar20 = (double)lbl_821AAD20;
    uVar19 = lbl_82005710;
    if ((uVar18 == 2) && (cVar9 = fn_82ABF768(lbl_82005710,param_3), cVar9 == '\0')) {
      dVar20 = (double)lbl_82002AE0;
    }
    uVar18 = 0;
    piVar17 = (int *)(param_2 + 0x2c);
    piVar16 = (int *)(param_2 + 0x30);
    do {
      puVar2 = (unsigned int *)*piVar17;
      uVar15 = puVar2[3];
      if ((((*param_3 ^ *puVar2) & 0x1f) == 0) &&
         (((uVar15 == uVar1 ||
           (((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x100 &&
            (cVar9 = fn_82ABF768(uVar19,param_3), cVar9 != '\0')))) &&
          (puVar3 = (unsigned int *)*piVar16, (*puVar3 & 0x1f) == 0)))) {
        uVar4 = puVar3[3];
        uVar7 = fn_82B86C90(uVar4,adStack_b0,auStack_c0);
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar11 = 0;
          uVar13 = *puVar2 >> 0x19 & 7;
          if (uVar13 != 0) {
            uVar14 = 0;
            do {
              uVar5 = (*puVar3 >> 5 & 0xff) >> (uVar14 & 0x3f) & 3;
              if (((1 << uVar5 & uVar7) != 0) && (dVar20 == adStack_b0[uVar5])) {
                uVar10 = (unsigned int)(1 << ((*puVar2 >> 5 & 0xff) >> (uVar14 & 0x3f) & 3)) | uVar10;
              }
              uVar11 = uVar11 + 1;
              uVar14 = uVar14 + 2;
            } while (uVar11 < uVar13);
          }
        }
        if (uVar15 == uVar1) {
          uVar12 = 0;
          uVar7 = 0;
          uVar15 = *param_3 >> 0x19 & 7;
          if (uVar15 != 0) {
            uVar13 = 0;
            do {
              uVar7 = uVar7 + 1;
              uVar11 = uVar13 & 0x3f;
              uVar13 = uVar13 + 2;
              uVar12 = (unsigned int)(1 << ((*param_3 >> 5 & 0xff) >> uVar11 & 3)) | uVar12;
            } while (uVar7 < uVar15);
          }
          uVar12 = uVar12 & ~uVar10;
          uVar10 = ((0x8da691691448U >> (uVar12 & 0x7f)) >> (uVar12 & 0x7f)) >> (uVar12 & 0x7f) &
                   0xffffffff;
        }
        else {
          uVar10 = (unsigned __int64)(*param_3 >> 0x19);
        }
        uVar10 = uVar10 & 7;
        if (uVar10 == 0) {
LAB_82af9214:
          uVar15 = (unsigned int)(uVar10 << 0x15) & 0x600000 | *param_4 & 0xff9fffff;
          *param_4 = uVar15;
          if ((*(unsigned int *)(uVar4 + 8) & 0x3f80) == 16000) {
LAB_82af9278:
            *param_4 = (uVar18 & 1) << 0x14 | uVar15 & 0xffefffff;
            return 1;
          }
          iVar8 = fn_82B8C058(dVar20,param_1,uVar4);
          if (iVar8 != 4) {
            uVar15 = *param_4;
            goto LAB_82af9278;
          }
        }
        else if (((unsigned __int64)(*puVar2 >> 0x19) & 7) + uVar10 < 5) {
          for (puVar2 = *(unsigned int **)(param_2 + 4); puVar2 != (unsigned int *)0x0; puVar2 = (unsigned int *)puVar2[2])
          {
            uVar15 = puVar2[4];
            if (((uVar15 != 0) && ((*(unsigned int *)(uVar15 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar2 & 0xe000000) != 0)) goto LAB_82af91e8;
          }
          uVar15 = 0;
LAB_82af91e8:
          if ((uVar15 == 0) ||
             (lVar6 = fn_82AF4E80(param_1,uVar15,param_2,0,0),
             (lVar6 + (uVar10 - param_6) & 0xffffffff) < 5)) goto LAB_82af9214;
        }
      }
      uVar18 = uVar18 + 1;
      piVar17 = piVar17 + 1;
      piVar16 = piVar16 + -1;
    } while (uVar18 < 2);
  }
  return 0;
}

