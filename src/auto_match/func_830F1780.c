extern unsigned int *auStack_9c;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_820FDA30;
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


void fn_830F1780(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6
                  ,__int64 param_7,unsigned int param_8)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  __int64 lVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  __int64 lVar23;
  __int64 lVar24;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  struct { unsigned int first; unsigned int second; } stack_pair_b8;

  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int auStack_9c;
  
  uVar1 = *(unsigned short *)(param_1 + 0x32);
  uVar7 = ((unsigned __int64)param_3 & 0xffff) << 0x10;
  iVar5 = *(int *)(param_1 + 0x15c);
  uVar21 = (unsigned __int64)*(unsigned int *)(param_1 + 0x11c);
  uVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x124);
  uVar16 = (__int64)(int)(unsigned int)uVar1 * (__int64)(int)param_3 + param_2 & 0x7fffffff;
  iVar4 = (int)(uVar16 << 3);
  uVar15 = (uVar7 | param_2 & 0xffffffff) & 0x3ffffff;
  lVar18 = uVar15 * 0x40;
  uVar2 = *(unsigned int *)(iVar4 + iVar5);
  sVar6 = (short)uVar2;
  stack_pair_b8.first = (int)uVar2 >> 0x10;
  stack_pair_b8.second = (unsigned int)sVar6;
  uStack_bc = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uStack_c0 = *(int *)(&lbl_820FDA30 + (stack_pair_b8.first & 0xf) * 4) + ((int)uVar2 >> 0x11 & 0xfffffff8U);
  uVar13 = (int)sVar6;
  uVar11 = stack_pair_b8.first;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar18 + 0x730073 |
       (uVar21 - uVar2) + uVar15 * -0x40) & 0x80008000) != 0) {
    fn_830EF918(&stack_pair_b8.second,&stack_pair_b8.first,lVar18,uVar21);
    uVar13 = stack_pair_b8.second;
    uVar11 = stack_pair_b8.first;
  }
  uVar2 = *(unsigned int *)(iVar4 + iVar5 + 4);
  lVar19 = lVar18 + 0x20;
  sVar6 = (short)uVar2;
  uStack_ac = (int)uVar2 >> 0x10;
  uStack_b0 = (unsigned int)sVar6;
  stack_pair_b8.second = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  stack_pair_b8.first = *(int *)(&lbl_820FDA30 + (uStack_ac & 0xf) * 4) + ((int)uVar2 >> 0x11 & 0xfffffff8U);
  uVar10 = (int)sVar6;
  uVar9 = uStack_ac;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar21 - uVar2) - lVar19) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b0,&uStack_ac,lVar19,uVar21);
    uVar10 = uStack_b0;
    uVar9 = uStack_ac;
  }
  iVar4 = (int)(((unsigned __int64)uVar1 + uVar16 * 2 & 0xffffffff) << 2);
  lVar19 = lVar18 + 0x40000;
  uVar2 = *(unsigned int *)(iVar4 + iVar5);
  sVar6 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (unsigned int)sVar6;
  uStack_a4 = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uVar16 = (unsigned __int64)(int)uStack_a4;
  uVar15 = (unsigned __int64)*(unsigned int *)(&lbl_820FDA30 + (uStack_b0 & 0xf) * 4) +
           ((unsigned __int64)(unsigned int)((int)uVar2 >> 0x11) & 0xfffffff8);
  uStack_a8 = (unsigned int)uVar15;
  uVar14 = (int)sVar6;
  uVar8 = uStack_b0;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar19 + 0x730073 |
       (uVar21 - uVar2) - lVar19) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar19,uVar21);
    uVar14 = uStack_ac;
    uVar8 = uStack_b0;
  }
  uVar2 = *(unsigned int *)(iVar4 + iVar5 + 4);
  lVar18 = lVar18 + 0x40020;
  sVar6 = (short)uVar2;
  uStack_b0 = (int)uVar2 >> 0x10;
  uStack_ac = (unsigned int)sVar6;
  auStack_9c = ((int)(((int)sVar6 & 3U) + 1) >> 2) + (int)sVar6 >> 1;
  uVar20 = (unsigned __int64)(int)auStack_9c;
  uVar17 = (unsigned __int64)*(unsigned int *)(&lbl_820FDA30 + (uStack_b0 & 0xf) * 4) +
           ((unsigned __int64)(unsigned int)((int)uVar2 >> 0x11) & 0xfffffff8);
  uStack_a0 = (unsigned int)uVar17;
  if ((((unsigned __int64)uVar2 + ((unsigned __int64)uVar2 & 0x8000) * -2 + lVar18 + 0x730073 |
       (uVar21 - uVar2) - lVar18) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar18,uVar21);
  }
  uVar2 = uStack_ac;
  uVar7 = (uVar7 | param_2 & 0xffffffff) & 0x7ffffff;
  lVar18 = uVar7 * 0x20;
  uVar21 = ((unsigned __int64)uStack_c0 & 0xffff) << 0x10 | (unsigned __int64)uStack_bc & 0xffffffff0000ffff;
  if (((uVar21 + ((unsigned __int64)uStack_bc & 0x8000) * -2 + lVar18 + 0x3b003b |
       (uVar12 - uVar21) + uVar7 * -0x20) & 0x80008000) != 0) {
    fn_830EF9E8(&uStack_bc,&uStack_c0,lVar18,uVar12);
  }
  uVar3 = uStack_c0;
  lVar19 = lVar18 + 0x10;
  uVar7 = ((unsigned __int64)stack_pair_b8.first & 0xffff) << 0x10 | (unsigned __int64)stack_pair_b8.second & 0xffffffff0000ffff;
  if (((uVar7 + ((unsigned __int64)stack_pair_b8.second & 0x8000) * -2 + lVar19 + 0x3b003b | (uVar12 - uVar7) - lVar19
       ) & 0x80008000) != 0) {
    fn_830EF9E8(&stack_pair_b8.second,&stack_pair_b8.first,lVar19,uVar12);
  }
  uVar15 = (uVar15 & 0xffff) << 0x10 | uVar16 & 0xffffffff0000ffff;
  lVar19 = lVar18 + 0x40000;
  if (((uVar15 + (uVar16 & 0x8000) * -2 + lVar19 + 0x3b003b | (uVar12 - uVar15) - lVar19) &
      0x80008000) != 0) {
    fn_830EF9E8(&uStack_a4,&uStack_a8,lVar19,uVar12);
  }
  uVar15 = (uVar17 & 0xffff) << 0x10 | uVar20 & 0xffffffff0000ffff;
  lVar18 = lVar18 + 0x40010;
  if (((uVar15 + (uVar20 & 0x8000) * -2 + lVar18 + 0x3b003b | (uVar12 - uVar15) - lVar18) &
      0x80008000) != 0) {
    fn_830EF9E8(&auStack_9c,&uStack_a0,lVar18,uVar12);
  }
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  uVar16 = (unsigned __int64)uStack0000002c;
  lVar19 = (__int64)((int)uVar11 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar13 >> 2) + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232460 = 0;
  }
  uVar11 = uVar11 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar5 = (**(int (***)())(((uVar13 & 3) * 4 + uVar11 + 0xf1) * 4 + param_1))
                    (lVar19,lVar18,param_7,lVar18,param_1,uVar13 & 3,uVar11,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar19,lVar18,param_7,lVar18,uVar13 & 3,uVar11,*(unsigned char *)(param_1 + 0x23)
                      ,0);
  }
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar19 = (__int64)((int)uVar9 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar10 >> 2) + uVar16;
  lVar22 = lVar19 + 8;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar22);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar9 = uVar9 & 3;
  iVar5 = (**(int (***)())(((uVar10 & 3) * 4 + uVar9 + 0xf1) * 4 + param_1))
                    (lVar22,lVar18,param_7 + 8,lVar18,param_1,uVar10 & 3,uVar9,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar22,lVar18,param_7 + 8,lVar18,uVar10 & 3,uVar9,
                      *(unsigned char *)(param_1 + 0x23),0);
  }
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar19 = (__int64)(((int)uVar8 >> 2) + 1) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar14 >> 2) + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar8 = uVar8 & 3;
  iVar5 = (**(int (***)())(((uVar14 & 3) * 4 + uVar8 + 0xf1) * 4 + param_1))
                    (lVar19,lVar18,uVar15 + param_7,lVar18,param_1,uVar14 & 3,uVar8,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar19,lVar18,uVar15 + param_7,lVar18,uVar14 & 3,uVar8,
                      *(unsigned char *)(param_1 + 0x23),0);
  }
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar19 = (__int64)(((int)uStack_b0 >> 2) + 1) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a)
           + (__int64)((int)uVar2 >> 2) + uVar16;
  lVar23 = lVar19 + 8;
  lVar22 = uVar15 + param_7 + 8;
  lVar18 = uVar15 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 2) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 3) != 0)) * 4) {
    dataCacheBlockTouch(lVar19 + 0x88);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar23);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar23);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar23);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar23);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar23);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar23);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar23);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar11 = uStack_b0 & 3;
  iVar5 = (**(int (***)())(((uVar2 & 3) * 4 + uVar11 + 0xf1) * 4 + param_1))
                    (lVar23,lVar18,lVar22,lVar18,param_1,uVar2 & 3,uVar11,0);
  if (iVar5 != 0) {
    fn_82CC4918(lVar23,lVar18,lVar22,lVar18,uVar2 & 3,uVar11,*(unsigned char *)(param_1 + 0x23),0
                     );
  }
  uVar2 = uStack_bc;
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  uVar7 = (unsigned __int64)uStack00000034;
  uVar16 = (unsigned __int64)uStack0000003c;
  lVar22 = (__int64)((int)uVar3 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
           (__int64)((int)uStack_bc >> 2);
  lVar19 = lVar22 + uVar7;
  lVar22 = lVar22 + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar12 = (unsigned __int64)uStack0000004c;
  uVar3 = uVar3 & 3;
  uVar11 = uStack_bc & 3;
  (**(int (***)())(((uStack_bc & 3) * 4 + uVar3 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar12,lVar18,uVar11,uVar3,*(unsigned char *)(param_1 + 0x23),0);
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar22);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar22);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar21 = (unsigned __int64)in_stack_00000054;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar3 + 0x101) * 4 + param_1))
            (lVar22,lVar18,uVar21,lVar18,uVar11,uVar3,*(unsigned char *)(param_1 + 0x23),0);
  uVar2 = stack_pair_b8.second;
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar23 = (__int64)((int)stack_pair_b8.first >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
           (__int64)((int)stack_pair_b8.second >> 2);
  lVar22 = lVar23 + uVar7;
  lVar23 = lVar23 + uVar16;
  lVar19 = lVar22 + 4;
  lVar24 = lVar23 + 4;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar11 = stack_pair_b8.first & 3;
  uVar13 = stack_pair_b8.second & 3;
  (**(int (***)())(((stack_pair_b8.second & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar12 + 4,lVar18,uVar13,uVar11,*(unsigned char *)(param_1 + 0x23),0);
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar23 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar24);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar24);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar24);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar24);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar24);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar24,lVar18,uVar21 + 4,lVar18,uVar13,uVar11,*(unsigned char *)(param_1 + 0x23),0);
  uVar2 = uStack_a4;
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar22 = uVar15 + (__int64)((int)uStack_a8 >> 2) *
                    (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
                    (__int64)((int)uStack_a4 >> 2);
  lVar19 = lVar22 + uVar7;
  lVar22 = lVar22 + uVar16;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar19 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar11 = uStack_a8 & 3;
  uVar13 = uStack_a4 & 3;
  (**(int (***)())(((uStack_a4 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar15 + uVar12,lVar18,uVar13,uVar11,*(unsigned char *)(param_1 + 0x23),0);
  uVar17 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar18 = uVar17 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x80);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar22);
    dataCacheBlockTouch(uVar17 * 6 + 0x80 + lVar22);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar22);
    dataCacheBlockTouch(uVar17 * 10 + 0x80 + lVar22);
    dataCacheBlockTouch(uVar17 * 0xc + 0x80 + lVar22);
    dataCacheBlockTouch(uVar17 * 0xe + 0x80 + lVar22);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar22,lVar18,uVar15 + uVar21,lVar18,uVar13,uVar11,*(unsigned char *)(param_1 + 0x23),0);
  uVar2 = auStack_9c;
  uVar15 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar23 = uVar15 + (__int64)((int)uStack_a0 >> 2) *
                    (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
                    (__int64)((int)auStack_9c >> 2);
  lVar22 = lVar23 + uVar7;
  lVar23 = lVar23 + uVar16;
  lVar19 = lVar22 + 4;
  lVar24 = lVar23 + 4;
  lVar18 = uVar15 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar22 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar19);
    dataCacheBlockTouch(uVar15 * 6 + 0x80 + lVar19);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar19);
    dataCacheBlockTouch(uVar15 * 10 + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xc + 0x80 + lVar19);
    dataCacheBlockTouch(uVar15 * 0xe + 0x80 + lVar19);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar11 = uStack_a0 & 3;
  uVar13 = auStack_9c & 3;
  (**(int (***)())(((auStack_9c & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar19,lVar18,uVar15 + uVar12 + 4,lVar18,uVar13,uVar11,*(unsigned char *)(param_1 + 0x23),
             0);
  uVar16 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar18 = uVar16 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 3) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar23 + 0x84);
    dataCacheBlockTouch(lVar18 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x40) * 2 + lVar24);
    dataCacheBlockTouch(uVar16 * 6 + 0x80 + lVar24);
    dataCacheBlockTouch((lVar18 + 0x20) * 4 + lVar24);
    dataCacheBlockTouch(uVar16 * 10 + 0x80 + lVar24);
    dataCacheBlockTouch(uVar16 * 0xc + 0x80 + lVar24);
    dataCacheBlockTouch(uVar16 * 0xe + 0x80 + lVar24);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar2 & 3) * 4 + uVar11 + 0x101) * 4 + param_1))
            (lVar24,lVar18,uVar15 + uVar21 + 4,lVar18,uVar13,uVar11,*(unsigned char *)(param_1 + 0x23),
             0);
  return;
}

