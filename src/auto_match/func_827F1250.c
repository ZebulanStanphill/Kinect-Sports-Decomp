extern unsigned int *auStack_140;
extern unsigned int *auStack_220;
extern unsigned int *auStack_228;
extern unsigned int *auStack_22c;
extern int fn_827F1BE8();
extern int fn_827F1C50();
extern int fn_827F1CB0();
extern int fn_827F1E58();
extern int fn_827F1FC8();
extern int fn_827F3C30();
extern int fn_827F3C48();
extern unsigned int iStack_148;
extern unsigned int iStack_68;
extern unsigned int uStack_22e;
extern unsigned int uStack_230;
extern unsigned int uStack_234;
extern unsigned int uStack_236;
extern unsigned int uStack_238;
extern unsigned int uStack_23c;
extern unsigned int uStack_23e;
extern unsigned int uStack_240;


void fn_827F1250(__int64 param_1,unsigned int param_2,int param_3,int param_4,unsigned short *param_5,
                  unsigned short *param_6)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned short *puVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned short *puVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned short *puVar11;
  unsigned short uVar12;
  unsigned int uVar13;
  unsigned short uVar14;
  unsigned short uVar15;
  unsigned int uVar16;
  unsigned short uStack_240;
  unsigned short uStack_23e;
  unsigned int uStack_23c;
  unsigned short uStack_238;
  unsigned short uStack_236;
  unsigned short uStack_234;
  short sStack_232;
  unsigned short uStack_230;
  unsigned short uStack_22e;
  unsigned char auStack_22c [4];
  unsigned char auStack_228 [8];
  unsigned char auStack_220 [208];
  unsigned short *puStack_150;
  unsigned short *puStack_14c;
  int iStack_148;
  unsigned char auStack_140 [208];
  unsigned short *puStack_70;
  unsigned short *puStack_6c;
  int iStack_68;
  
  *param_5 = 0;
  *param_6 = 0;
  if ((*(unsigned short *)((param_2 >> 3 & 0x1ffe) + param_3) >> (param_2 & 0xf) & 1) != 0) {
    fn_827F1BE8(auStack_220);
    iStack_148 = 0;
    fn_827F1BE8(auStack_140);
    uStack_240 = (unsigned short)param_2;
    iStack_148 = iStack_148 + 1;
    iStack_68 = 0;
    uStack_23e = 0;
    fn_827F1E58(auStack_220,puStack_14c,&uStack_240);
    if (puStack_150 != puStack_14c) {
      do {
        iStack_148 = iStack_148 + -1;
        fn_827F1C50(&uStack_240,auStack_220,*(unsigned int *)(puStack_14c + 2));
        uVar14 = uStack_23e;
        uVar13 = (unsigned int)uStack_23e;
        uVar16 = (unsigned int)uStack_240;
        uStack_230 = uStack_23e;
        uStack_22e = uStack_240;
        fn_827F1FC8(auStack_22c,auStack_140,&uStack_230);
        iVar2 = (uVar16 + 0x28) * 4;
        iVar3 = (int)param_1;
        uVar6 = fn_827F3C30(*(unsigned int *)(iVar2 + iVar3));
        uVar6 = uVar6 & 0xffff;
joined_r0x827f133c:
        uVar6 = uVar6 - 1;
        if (-1 < (__int64)uVar6) {
          iVar7 = fn_827F3C48(*(unsigned int *)(iVar2 + iVar3),uVar6 & 0xffff);
          uVar10 = (unsigned __int64)*(unsigned short *)(iVar3 + 0xe8) - 1;
          if (-1 < (__int64)uVar10) {
            lVar9 = ((unsigned __int64)*(unsigned short *)(iVar3 + 0xe8) + 0x27) * 4 + param_1;
            do {
              if (*(int *)lVar9 == iVar7) {
                uVar10 = uVar10 & 0xffff;
                goto LAB_827f1380;
              }
              uVar10 = uVar10 - 1;
              lVar9 = lVar9 + -4;
            } while (-1 < (__int64)uVar10);
          }
          uVar10 = 0xffffffffffffffff;
LAB_827f1380:
          uVar4 = uVar10 & 0xffff;
          if ((uVar4 != 0xffff) &&
             ((*(unsigned short *)(((unsigned int)uVar4 >> 3 & 0x1ffffffe) + param_3) >> ((unsigned int)uVar4 & 0xf) & 1) !=
              0)) {
            puVar11 = puStack_150;
            puVar5 = puStack_70;
            if (puStack_150 != puStack_14c) {
              do {
                if (*puVar11 == uVar4) break;
                puVar11 = *(unsigned short **)(puVar11 + 4);
              } while (puVar11 != puStack_14c);
              if (puVar11 != puStack_14c) {
                uVar16 = uVar13 + 1;
                if (uVar16 < puVar11[1]) {
                  uVar16 = (unsigned int)puVar11[1];
                }
                puVar11[1] = (unsigned short)uVar16;
                goto joined_r0x827f133c;
              }
            }
            for (; (puVar5 != puStack_6c && (puVar5[1] != uVar4)); puVar5 = *(unsigned short **)(puVar5 + 4)
                ) {
            }
            uStack_23c = puVar5;
            if (puVar5 == puStack_6c) {
              sStack_232 = uVar14 + 1;
              puVar8 = &uStack_234;
              uStack_234 = (short)uVar10;
            }
            else {
              uVar16 = uVar13 + 1;
              if (uVar16 <= *puVar5) goto joined_r0x827f133c;
              fn_827F1CB0(auStack_228,auStack_140,&uStack_23c);
              puVar8 = &uStack_238;
              uStack_236 = (unsigned short)uVar16;
              uStack_238 = (short)uVar10;
            }
            iStack_148 = iStack_148 + 1;
            fn_827F1E58(auStack_220,puStack_14c,puVar8);
          }
          goto joined_r0x827f133c;
        }
      } while (puStack_150 != puStack_14c);
    }
    uVar14 = 0xffff;
    uVar15 = 0;
    if (puStack_70 != puStack_6c) {
      do {
        uVar1 = *puStack_70;
        iStack_68 = iStack_68 + -1;
        fn_827F1C50(&uStack_23c,auStack_140);
        if (uVar1 != uVar14) {
          uVar15 = 0;
          uVar14 = uVar1;
        }
        uVar15 = uVar15 + 1;
        uVar12 = *param_6;
        if (*param_6 < uVar15) {
          uVar12 = uVar15;
        }
        *param_6 = uVar12;
        uVar13 = (((unsigned __int64)(uStack_23c) >> 16) & 0xFFFF) >> 3 & 0x1ffffffe;
        *(unsigned short *)(uVar13 + param_3) =
             *(unsigned short *)(uVar13 + param_3) & ~(unsigned short)(1 << ((unsigned int)uStack_23c & 0xf));
        *(unsigned short *)((unsigned int)*param_5 * 4 + param_4) = (((unsigned __int64)(uStack_23c) >> 16) & 0xFFFF);
        *(unsigned short *)((unsigned int)*param_5 * 4 + param_4 + 2) = uVar1;
        *param_5 = *param_5 + 1;
      } while (puStack_70 != puStack_6c);
    }
    for (; puStack_70 != puStack_6c; puStack_70 = *(unsigned short **)(puStack_70 + 4)) {
    }
    for (; puStack_150 != puStack_14c; puStack_150 = *(unsigned short **)(puStack_150 + 4)) {
    }
  }
  return;
}

