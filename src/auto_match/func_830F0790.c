extern unsigned int *auStack_9c;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_83232460;
extern unsigned int lbl_83232464;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_830F0790(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6
                  ,__int64 param_7,unsigned int param_8)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  __int64 lVar23;
  unsigned __int64 uVar24;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int auStack_9c [39];
  
  uVar1 = *(unsigned short *)(param_1 + 0x32);
  iVar7 = *(int *)(param_1 + 0x15c);
  uVar24 = (unsigned __int64)*(unsigned int *)(param_1 + 0x11c);
  uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x124);
  uVar9 = ((unsigned __int64)param_3 & 0xffff) << 0x10;
  uVar21 = (__int64)(int)(unsigned int)uVar1 * (__int64)(int)param_3 + param_2 & 0x7fffffff;
  iVar6 = (int)(uVar21 << 3);
  uVar18 = (uVar9 | param_2 & 0xffffffff) & 0x3ffffff;
  lVar19 = uVar18 * 0x40;
  uVar2 = *(unsigned int *)(iVar6 + iVar7);
  sVar8 = (short)uVar2;
  uStack_b8 = (int)uVar2 >> 0x10;
  uStack_b4 = (unsigned int)sVar8;
  uStack_bc = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uStack_c0 = (int)(((int)((uStack_b8 & 3) + 1) >> 2) + uStack_b8) >> 1;
  uVar15 = uStack_b8;
  uVar16 = (int)sVar8;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar24 - uVar2) + uVar18 * -0x40) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b4,&uStack_b8,lVar19,uVar24);
    uVar15 = uStack_b8;
    uVar16 = uStack_b4;
  }
  uVar2 = *(unsigned int *)(iVar6 + iVar7 + 4);
  lVar20 = lVar19 + 0x20;
  sVar8 = (short)uVar2;
  uStack_ac = (int)uVar2 >> 0x10;
  uStack_b0 = (unsigned int)sVar8;
  uStack_b4 = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uStack_b8 = (int)(((int)((uStack_ac & 3) + 1) >> 2) + uStack_ac) >> 1;
  uVar14 = (int)sVar8;
  uVar12 = uStack_ac;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar20 + 0x730073 |
       (uVar24 - uVar2) - lVar20) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b0,&uStack_ac,lVar20,uVar24);
    uVar14 = uStack_b0;
    uVar12 = uStack_ac;
  }
  iVar6 = (int)(((unsigned __int64)uVar1 + uVar21 * 2 & 0xffffffff) << 2);
  lVar20 = lVar19 + 0x200000;
  uVar2 = *(unsigned int *)(iVar6 + iVar7);
  sVar8 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (unsigned int)sVar8;
  uStack_a4 = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uVar18 = (unsigned __int64)(int)uStack_a4;
  uVar3 = (int)(((int)((uStack_b0 & 3) + 1) >> 2) + uStack_b0) >> 1;
  uVar13 = (int)sVar8;
  uVar11 = uStack_b0;
  uStack_a8 = uVar3;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar20 + 0x730073 |
       (uVar24 - uVar2) - lVar20) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar20,uVar24);
    uVar13 = uStack_ac;
    uVar11 = uStack_b0;
  }
  uVar2 = *(unsigned int *)(iVar6 + iVar7 + 4);
  lVar19 = lVar19 + 0x200020;
  sVar8 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (unsigned int)sVar8;
  auStack_9c[0] = ((int)(((int)sVar8 & 3U) + 1) >> 2) + (int)sVar8 >> 1;
  uVar21 = (unsigned __int64)(int)auStack_9c[0];
  uVar4 = (int)(((int)((uStack_b0 & 3) + 1) >> 2) + uStack_b0) >> 1;
  uStack_a0 = uVar4;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar24 - uVar2) - lVar19) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar19,uVar24);
  }
  uVar2 = uStack_ac;
  uVar9 = (uVar9 | param_2 & 0xffffffff) & 0x7ffffff;
  lVar19 = uVar9 * 0x20;
  uVar24 = ((unsigned __int64)uStack_c0 & 0xffff) << 0x10 | (unsigned __int64)uStack_bc & 0xffffffff0000ffff;
  if (((uVar24 + ((unsigned __int64)uStack_bc & 0x8000) * -2 + lVar19 + 0x3b003b |
       (uVar17 - uVar24) + uVar9 * -0x20) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_bc,&uStack_c0,lVar19,uVar17);
  }
  uVar5 = uStack_c0;
  lVar20 = lVar19 + 0x10;
  uVar9 = ((unsigned __int64)uStack_b8 & 0xffff) << 0x10 | (unsigned __int64)uStack_b4 & 0xffffffff0000ffff;
  if (((uVar9 + ((unsigned __int64)uStack_b4 & 0x8000) * -2 + lVar20 + 0x3b003b | (uVar17 - uVar9) - lVar20
       ) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_b4,&uStack_b8,lVar20,uVar17);
  }
  uVar9 = ((unsigned __int64)uVar3 & 0xffff) << 0x10 | uVar18 & 0xffffffff0000ffff;
  lVar20 = lVar19 + 0x100000;
  if (((uVar9 + (uVar18 & 0x8000) * -2 + lVar20 + 0x3b003b | (uVar17 - uVar9) - lVar20) & 0x80008000
      ) != 0) {
    fn_830EF9E8(&uStack_a4,&uStack_a8,lVar20,uVar17);
  }
  uVar18 = ((unsigned __int64)uVar4 & 0xffff) << 0x10 | uVar21 & 0xffffffff0000ffff;
  lVar19 = lVar19 + 0x100010;
  if (((uVar18 + (uVar21 & 0x8000) * -2 + lVar19 + 0x3b003b | (uVar17 - uVar18) - lVar19) &
      0x80008000) != 0) {
    fn_830EF9E8(auStack_9c,&uStack_a0,lVar19,uVar17);
  }
  uVar21 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  uVar18 = (unsigned __int64)uStack0000002c;
  lVar19 = (__int64)((int)uVar15 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar16 >> 2) + uVar18;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar19);
    lbl_83232460 = 0;
  }
  uVar15 = uVar15 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar7 = (**(int (***)())(((uVar16 & 3) * 4 + uVar15 + 0xf1) * 4 + param_1))
                    (lVar19,uVar21,param_7,uVar21,param_1,uVar16 & 3,uVar15,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar19,uVar21,param_7,uVar21,uVar16 & 3,uVar15,*(unsigned char *)(param_1 + 0x23)
                      ,0);
  }
  uVar21 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar19 = (__int64)((int)uVar12 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar14 >> 2) + uVar18;
  lVar20 = lVar19 + 8;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar20);
    lbl_83232460 = 0;
  }
  uVar12 = uVar12 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar7 = (**(int (***)())(((uVar14 & 3) * 4 + uVar12 + 0xf1) * 4 + param_1))
                    (lVar20,uVar21,param_7 + 8,uVar21,param_1,uVar14 & 3,uVar12,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar20,uVar21,param_7 + 8,uVar21,uVar14 & 3,uVar12,
                      *(unsigned char *)(param_1 + 0x23),0);
  }
  uVar21 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar20 = (__int64)(((int)uVar11 >> 2) + 8) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar13 >> 2) + uVar18;
  lVar19 = uVar21 * 8 + param_7;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar20 + 0x80);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar20);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar11 = uVar11 & 3;
  iVar7 = (**(int (***)())(((uVar13 & 3) * 4 + uVar11 + 0xf1) * 4 + param_1))
                    (lVar20,uVar21,lVar19,uVar21,param_1,uVar13 & 3,uVar11,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar20,uVar21,lVar19,uVar21,uVar13 & 3,uVar11,*(unsigned char *)(param_1 + 0x23),
                      0);
  }
  uVar21 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar19 = (__int64)(((int)uStack_b0 >> 2) + 8) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a)
           + (__int64)((int)uVar2 >> 2) + uVar18;
  lVar20 = lVar19 + 8;
  param_7 = (uVar21 + 1) * 8 + param_7;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(uVar21 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar21 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar21 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar21 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar21 * 7 + 0x80 + lVar20);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar15 = uStack_b0 & 3;
  iVar7 = (**(int (***)())(((uVar2 & 3) * 4 + uVar15 + 0xf1) * 4 + param_1))
                    (lVar20,uVar21,param_7,uVar21,param_1,uVar2 & 3,uVar15,0);
  if (iVar7 != 0) {
    fn_82CC4918(lVar20,uVar21,param_7,uVar21,uVar2 & 3,uVar15,*(unsigned char *)(param_1 + 0x23),
                      0);
  }
  uVar2 = uStack_bc;
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  uVar9 = (unsigned __int64)uStack00000034;
  uVar21 = (unsigned __int64)uStack0000003c;
  lVar20 = (__int64)((int)uVar5 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
           (__int64)((int)uStack_bc >> 2);
  lVar19 = lVar20 + uVar9;
  lVar20 = lVar20 + uVar21;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar5 = uVar5 & 3;
  uVar17 = (unsigned __int64)uStack0000004c;
  uVar15 = uStack_bc & 3;
  (**(int (***)())(((uStack_bc & 3) * 4 + uVar5 + 0x101) * 4 + param_1))
            (lVar19,uVar18,uVar17,uVar18,uVar15,uVar5,*(unsigned char *)(param_1 + 0x23),0);
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar20 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar20);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar24 = (unsigned __int64)in_stack_00000054;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar5 + 0x101) * 4 + param_1))
            (lVar20,uVar18,uVar24,uVar18,uVar15,uVar5,*(unsigned char *)(param_1 + 0x23),0);
  uVar2 = uStack_b4;
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar10 = (__int64)((int)uStack_b8 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
           (__int64)((int)uStack_b4 >> 2);
  lVar20 = lVar10 + uVar9;
  lVar10 = lVar10 + uVar21;
  lVar19 = lVar20 + 4;
  lVar22 = lVar10 + 4;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar20 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar19);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = uStack_b8 & 3;
  uVar16 = uStack_b4 & 3;
  (**(int (***)())(((uStack_b4 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar19,uVar18,uVar17 + 4,uVar18,uVar16,uVar15,*(unsigned char *)(param_1 + 0x23),0);
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar10 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar22);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar22);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar22,uVar18,uVar24 + 4,uVar18,uVar16,uVar15,*(unsigned char *)(param_1 + 0x23),0);
  uVar2 = uStack_a4;
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar19 = uVar18 * 4;
  lVar10 = lVar19 + (__int64)((int)uStack_a8 >> 2) *
                    (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
                    (__int64)((int)uStack_a4 >> 2);
  lVar20 = lVar10 + uVar9;
  lVar10 = lVar10 + uVar21;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar20 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar20);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = uStack_a8 & 3;
  uVar16 = uStack_a4 & 3;
  (**(int (***)())(((uStack_a4 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar20,uVar18,lVar19 + uVar17,uVar18,uVar16,uVar15,*(unsigned char *)(param_1 + 0x23),0);
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar10 + 0x80);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar10);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar10);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar10);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar10);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar10);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar10);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar10);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar10,uVar18,lVar19 + uVar24,uVar18,uVar16,uVar15,*(unsigned char *)(param_1 + 0x23),0);
  uVar2 = auStack_9c[0];
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar19 = uVar18 * 4;
  lVar22 = lVar19 + (__int64)((int)uStack_a0 >> 2) *
                    (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
                    (__int64)((int)auStack_9c[0] >> 2);
  lVar10 = lVar22 + uVar9;
  lVar22 = lVar22 + uVar21;
  lVar20 = lVar10 + 4;
  lVar23 = lVar22 + 4;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar10 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar20);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar20);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar20);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar20);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar20);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = uStack_a0 & 3;
  uVar16 = auStack_9c[0] & 3;
  (**(int (***)())(((auStack_9c[0] & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar20,uVar18,lVar19 + uVar17 + 4,uVar18,uVar16,uVar15,*(unsigned char *)(param_1 + 0x23),
             0);
  uVar18 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x84);
    dataCacheBlockTouch(uVar18 + 0x80 + lVar23);
    dataCacheBlockTouch((uVar18 + 0x40) * 2 + lVar23);
    dataCacheBlockTouch(uVar18 * 3 + 0x80 + lVar23);
    dataCacheBlockTouch((uVar18 + 0x20) * 4 + lVar23);
    dataCacheBlockTouch(uVar18 * 5 + 0x80 + lVar23);
    dataCacheBlockTouch(uVar18 * 6 + 0x80 + lVar23);
    dataCacheBlockTouch(uVar18 * 7 + 0x80 + lVar23);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar15 + 0x101) * 4 + param_1))
            (lVar23,uVar18,lVar19 + uVar24 + 4,uVar18,uVar16,uVar15,*(unsigned char *)(param_1 + 0x23),
             0);
  return;
}

