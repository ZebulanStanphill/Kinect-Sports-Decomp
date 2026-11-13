extern unsigned int *auStack_50;
extern int fn_82A1E228();
extern int fn_82A20618();
extern int fn_82A22760();
extern unsigned int lbl_8315D2F0;
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219CB8;
extern unsigned int lbl_83219CC0;
extern unsigned int uRam83219cc4;
extern unsigned int uRam83219cc8;


void fn_82A228A8(void)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 auStack_50 [10];
  
  uVar12 = 0;
  uVar13 = 0;
  uVar17 = 0;
  uVar15 = 0;
  uVar16 = 0;
  fn_82A1E228(auStack_50);
  uVar11 = lbl_8315D2F0 & 0xffffffff;
  piVar1 = *(int **)(lbl_83219B94 + 0x2c);
  uVar14 = uVar13;
  uVar7 = uVar16;
  iVar6 = lbl_83219B94;
  if (piVar1 != (int *)(lbl_83219B94 + 0x2c)) {
    do {
      uVar2 = piVar1[7];
      uVar7 = uVar16;
      if ((uVar2 & 0x80) == 0) {
        uVar5 = (unsigned __int64)*(unsigned char *)((int)piVar1 + 0x1a);
        trapWord(6,uVar5,0);
        uVar14 = (unsigned __int64)((unsigned int)piVar1[2] >> 10);
        uVar10 = (uVar2 >> 8) / uVar5;
        if ((uVar2 & 0x40) == 0) {
          uVar7 = uVar10 + uVar16;
          if (((uVar7 & 0xffffffff) < (uVar16 & 0xffffffff)) || ((uVar7 & 0xffffffff) < uVar10)) {
            uVar7 = 0xffffffffffffffff;
          }
          uVar12 = uVar14 + uVar12;
        }
        else {
          uVar16 = uVar10 + uVar15;
          if (((uVar16 & 0xffffffff) < (uVar15 & 0xffffffff)) || ((uVar16 & 0xffffffff) < uVar10)) {
            uVar16 = 0xffffffffffffffff;
          }
          uVar15 = uVar16;
          if (0x13 < *(unsigned char *)(piVar1 + 6)) {
            uVar17 = uVar14 + uVar17;
            trapWord(6,(unsigned __int64)uRam83219cc8,0);
            if ((unsigned __int64)(unsigned int)piVar1[2] / (unsigned __int64)uRam83219cc8 + (unsigned __int64)(unsigned int)piVar1[4] +
                (unsigned __int64)uRam83219cc4 <= (auStack_50[0] / 10000000 & 0xffffffff) - uVar11) {
              uVar13 = uVar14 + uVar13;
            }
          }
        }
        if (uVar5 < 0xff) {
          *(unsigned char *)((int)piVar1 + 0x1a) = *(unsigned char *)((int)piVar1 + 0x1a) + 1;
          iVar6 = lbl_83219B94;
        }
      }
      piVar1 = (int *)*piVar1;
      uVar16 = uVar7;
    } while (piVar1 != (int *)(iVar6 + 0x2c));
    uVar14 = uVar13;
    if ((uVar13 & 0xffffffff) != 0) goto LAB_82a229f8;
  }
  uVar13 = 1;
LAB_82a229f8:
  if ((uVar17 & 0xffffffff) >> 2 <= (uVar14 & 0xffffffff)) {
    trapWord(6,uVar13,0);
    uVar11 = ((uVar12 & 0xffffff) << 8) / (uVar13 & 0xffffffff);
    trapWord(6,uVar11,0);
    if ((uVar15 & 0xffffffff) >> 8 < (uVar7 & 0xffffffff) / uVar11) {
      auStack_50[0] = 0;
      lbl_83219CB8 = fn_82A22760(((uVar14 & 0xffffffff) / 3 & 0x3fffff) << 10,auStack_50,0x14,1,0)
      ;
      uVar2 = lbl_83219CC0;
      lVar8 = 0;
      iVar6 = *(int *)(lbl_83219B94 + 0x30);
      iVar9 = lbl_83219B94;
      if (iVar6 != lbl_83219B94 + 0x2c) {
        do {
          uVar3 = *(unsigned int *)(iVar6 + 0x1c);
          if (((((uVar3 & 0x80) == 0) && ((uVar3 & 0x40) == 0)) &&
              ((__int64)(unsigned __int64)*(unsigned int *)(iVar6 + 8) <= (__int64)auStack_50[0])) &&
             (((uVar3 & 2) == 0 && (uVar2 <= *(unsigned int *)(iVar6 + 0x10))))) {
            lVar8 = (unsigned __int64)*(unsigned int *)(iVar6 + 8) + lVar8;
            *(unsigned int *)(iVar6 + 0x1c) = uVar3 | 2;
            iVar9 = lbl_83219B94;
            if ((__int64)auStack_50[0] <= lVar8) break;
          }
          iVar6 = *(int *)(iVar6 + 4);
        } while (iVar6 != iVar9 + 0x2c);
      }
      fn_82A20618(2);
      lbl_83219CC0 = 0;
      iVar6 = lbl_83219B94;
      for (puVar4 = *(unsigned int **)(lbl_83219B94 + 0x2c); puVar4 != (unsigned int *)(iVar6 + 0x2c);
          puVar4 = (unsigned int *)*puVar4) {
        uVar2 = puVar4[7];
        if ((uVar2 & 0x80) == 0) {
          puVar4[7] = uVar2 >> 1 & 0x7fffff00 | uVar2 & 0xff;
          iVar6 = lbl_83219B94;
        }
      }
    }
  }
  return;
}

