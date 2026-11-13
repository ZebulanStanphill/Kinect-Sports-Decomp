extern unsigned int *auStack_9c;
extern int fn_82CC4918();
extern int fn_830EF918();
extern int fn_830EF9E8();
extern unsigned int lbl_820FDA30;
extern unsigned int lbl_83232460;
extern unsigned int lbl_83232464;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


void fn_830EFF58(int param_1,unsigned __int64 param_2,unsigned int param_3,__int64 param_4,unsigned int param_5,
                  unsigned int param_6,__int64 param_7,unsigned int param_8)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  short sVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack0000004c;
  unsigned int in_stack_00000054;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int uStack_a0;
  unsigned int auStack_9c [39];
  
  uVar1 = *(unsigned short *)(param_1 + 0x32);
  uVar5 = ((unsigned __int64)param_3 & 0xffff) << 0x10;
  iVar3 = *(int *)(param_1 + 0x15c);
  uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x11c);
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x124);
  uVar14 = (__int64)(int)(unsigned int)uVar1 * (__int64)(int)param_3 + param_2 & 0x7fffffff;
  uVar7 = (uVar5 | param_2 & 0xffffffff) & 0x3ffffff;
  lVar17 = uVar7 * 0x40;
  uVar8 = *(unsigned int *)((int)(uVar14 << 3) + iVar3);
  sVar4 = (short)uVar8;
  uStack_ac = (int)uVar8 >> 0x10;
  uStack_b0 = (unsigned int)sVar4;
  uStack_a8 = ((int)(((int)sVar4 & 3U) + 1) >> 2) + (int)sVar4 >> 1;
  uVar10 = (unsigned __int64)(int)uStack_a8;
  uVar9 = (unsigned __int64)*(unsigned int *)(&lbl_820FDA30 + (uStack_ac & 0xf) * 4) +
          ((unsigned __int64)(unsigned int)((int)uVar8 >> 0x11) & 0xfffffff8);
  uStack_a4 = (unsigned int)uVar9;
  uVar13 = (int)sVar4;
  uVar12 = uStack_ac;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack0000004c = param_8;
  if ((((unsigned __int64)uVar8 + ((unsigned __int64)uVar8 & 0x8000) * -2 + lVar17 + 0x730073 |
       (uVar15 - uVar8) + uVar7 * -0x40) & 0x80008000) != 0) {
    fn_830EF918(&uStack_b0,&uStack_ac,lVar17,uVar15);
    uVar13 = uStack_b0;
    uVar12 = uStack_ac;
  }
  lVar17 = lVar17 + 0x40000;
  uVar8 = *(unsigned int *)((int)(((unsigned __int64)uVar1 + uVar14 * 2 & 0xffffffff) << 2) + iVar3);
  sVar4 = (short)uVar8;
  uStack_b0 = (int)uVar8 >> 0x10;
  uStack_ac = (unsigned int)sVar4;
  uStack_a0 = ((int)(((int)sVar4 & 3U) + 1) >> 2) + (int)sVar4 >> 1;
  uVar7 = (unsigned __int64)(int)uStack_a0;
  uVar14 = (unsigned __int64)*(unsigned int *)(&lbl_820FDA30 + (uStack_b0 & 0xf) * 4) +
           ((unsigned __int64)(unsigned int)((int)uVar8 >> 0x11) & 0xfffffff8);
  auStack_9c[0] = (unsigned int)uVar14;
  if ((((unsigned __int64)uVar8 + ((unsigned __int64)uVar8 & 0x8000) * -2 + lVar17 + 0x730073 |
       (uVar15 - uVar8) - lVar17) & 0x80008000) != 0) {
    fn_830EF918(&uStack_ac,&uStack_b0,lVar17,uVar15);
  }
  uVar2 = uStack_ac;
  uVar8 = uStack_b0;
  uVar5 = (uVar5 | param_2 & 0xffffffff) & 0x7ffffff;
  lVar17 = uVar5 * 0x20;
  uVar15 = (uVar9 & 0xffff) << 0x10 | uVar10 & 0xffffffff0000ffff;
  if (((uVar15 + (uVar10 & 0x8000) * -2 + lVar17 + 0x3b003b | (uVar11 - uVar15) + uVar5 * -0x20) &
      0x80008000) != 0) {
    fn_830EF9E8(&uStack_a8,&uStack_a4,lVar17,uVar11);
    uVar10 = (unsigned __int64)uStack_a8;
    uVar9 = (unsigned __int64)uStack_a4;
  }
  lVar17 = lVar17 + 0x40000;
  uVar14 = (uVar14 & 0xffff) << 0x10 | uVar7 & 0xffffffff0000ffff;
  if (((uVar14 + (uVar7 & 0x8000) * -2 + lVar17 + 0x3b003b | (uVar11 - uVar14) - lVar17) &
      0x80008000) != 0) {
    fn_830EF9E8(&uStack_a0,auStack_9c,lVar17,uVar11);
    uVar7 = (unsigned __int64)uStack_a0;
  }
  uVar14 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  lVar16 = (__int64)((int)uVar12 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
           (__int64)((int)uVar13 >> 2) + param_4;
  lVar17 = uVar14 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 3) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 7) != 0)) * 8) {
    dataCacheBlockTouch(lVar16 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar16);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar16);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar16);
    lbl_83232460 = 0;
  }
  uVar12 = uVar12 & 3;
  lbl_83232460 = lbl_83232460 + 1;
  iVar3 = (**(int (***)())(((uVar13 & 3) * 4 + uVar12 + 0xf1) * 4 + param_1))
                    (lVar16,lVar17,param_7,lVar17,param_1,uVar13 & 3,uVar12,1);
  if (iVar3 != 0) {
    fn_82CC4918(lVar16,lVar17,param_7,lVar17,uVar13 & 3,uVar12,*(unsigned char *)(param_1 + 0x23)
                      ,1);
  }
  uVar14 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4a);
  param_4 = (__int64)(((int)uVar8 >> 2) + 1) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) +
            (__int64)((int)uVar2 >> 2) + param_4;
  lVar17 = uVar14 * 2;
  if (lbl_83232460 ==
      (((int)lbl_83232460 >> 3) + (unsigned int)((int)lbl_83232460 < 0 && (lbl_83232460 & 7) != 0)) * 8) {
    dataCacheBlockTouch(param_4 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + param_4);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + param_4);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + param_4);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + param_4);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + param_4);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + param_4);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + param_4);
    lbl_83232460 = 0;
  }
  lbl_83232460 = lbl_83232460 + 1;
  uVar8 = uVar8 & 3;
  iVar3 = (**(int (***)())(((uVar2 & 3) * 4 + uVar8 + 0xf1) * 4 + param_1))
                    (param_4,lVar17,uVar14 + param_7,lVar17,param_1,uVar2 & 3,uVar8,1);
  if (iVar3 != 0) {
    fn_82CC4918(param_4,lVar17,uVar14 + param_7,lVar17,uVar2 & 3,uVar8,
                      *(unsigned char *)(param_1 + 0x23),1);
  }
  uVar14 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  uVar11 = (unsigned __int64)uStack00000034;
  uVar8 = (unsigned int)uVar10;
  uVar5 = (unsigned __int64)uStack0000003c;
  lVar6 = (__int64)((int)uVar9 >> 2) * (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) +
          (__int64)((int)uVar8 >> 2);
  lVar16 = lVar6 + uVar11;
  lVar6 = lVar6 + uVar5;
  lVar17 = uVar14 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar16 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar16);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar16);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar16);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar16);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar15 = (unsigned __int64)uStack0000004c;
  uVar9 = uVar9 & 3;
  (**(int (***)())(((uVar8 & 3) * 4 + (int)uVar9 + 0x101) * 4 + param_1))
            (lVar16,lVar17,uVar15,lVar17,uVar10 & 3,uVar9,*(unsigned char *)(param_1 + 0x23),1);
  uVar14 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar17 = uVar14 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar6 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar6);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar6);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar6);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar8 & 3) * 4 + (int)uVar9 + 0x101) * 4 + param_1))
            (lVar6,lVar17,(unsigned __int64)in_stack_00000054,lVar17,uVar10 & 3,uVar9,
             *(unsigned char *)(param_1 + 0x23),1);
  uVar9 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  uVar8 = (unsigned int)uVar7;
  lVar6 = uVar9 + (__int64)((int)auStack_9c[0] >> 2) *
                  (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4c) + (__int64)((int)uVar8 >> 2);
  lVar16 = lVar6 + uVar11;
  lVar6 = lVar6 + uVar5;
  lVar17 = uVar9 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar16 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar16);
    dataCacheBlockTouch(uVar9 * 6 + 0x80 + lVar16);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar16);
    dataCacheBlockTouch(uVar9 * 10 + 0x80 + lVar16);
    dataCacheBlockTouch(uVar9 * 0xc + 0x80 + lVar16);
    dataCacheBlockTouch(uVar9 * 0xe + 0x80 + lVar16);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  uVar12 = auStack_9c[0] & 3;
  (**(int (***)())(((uVar8 & 3) * 4 + uVar12 + 0x101) * 4 + param_1))
            (lVar16,lVar17,uVar9 + uVar15,lVar17,uVar7 & 3,uVar12,*(unsigned char *)(param_1 + 0x23),1)
  ;
  uVar14 = (unsigned __int64)*(unsigned short *)(param_1 + 0x4c);
  lVar17 = uVar14 * 2;
  if (lbl_83232464 ==
      (((int)lbl_83232464 >> 4) + (unsigned int)((int)lbl_83232464 < 0 && (lbl_83232464 & 0xf) != 0)) * 0x10
     ) {
    dataCacheBlockTouch(lVar6 + 0x80);
    dataCacheBlockTouch(lVar17 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x40) * 2 + lVar6);
    dataCacheBlockTouch(uVar14 * 6 + 0x80 + lVar6);
    dataCacheBlockTouch((lVar17 + 0x20) * 4 + lVar6);
    dataCacheBlockTouch(uVar14 * 10 + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xc + 0x80 + lVar6);
    dataCacheBlockTouch(uVar14 * 0xe + 0x80 + lVar6);
    lbl_83232464 = 0;
  }
  lbl_83232464 = lbl_83232464 + 1;
  (**(int (***)())(((uVar8 & 3) * 4 + uVar12 + 0x101) * 4 + param_1))
            (lVar6,lVar17,uVar9 + in_stack_00000054,lVar17,uVar7 & 3,uVar12,
             *(unsigned char *)(param_1 + 0x23),1);
  return;
}

