typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_60;
extern int fn_82631C78();
extern int fn_826417C8();
extern int fn_82641B60();
extern int fn_82643A48();
extern int fn_82645110();
extern int fn_82645740();
extern int fn_8264DA70();
extern int fn_8264DB08();
extern int fn_82656D40();
extern int fn_82A1E650();
extern int fn_82A29FE0();
extern int fn_82F68CC0();
extern unsigned int uRam831e79a4;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82657578(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  int iVar18;
  char in_RESERVE;
  unsigned char bVar19;
  unsigned int auStack_60 [24];
  
  iVar18 = param_1 + 0x5c1c;
  fn_82631C78(param_1,0,0x70,0x10);
  uVar12 = *(unsigned __int64 *)(param_1 + 0x10);
  if (uVar12 != 0) {
    if ((*(unsigned __int64 *)(param_1 + 0x28) & uVar12) != 0) {
      uVar5 = fn_826417C8(param_1,uVar12,*(unsigned int *)(param_1 + 0x2940));
      *(unsigned __int64 *)(param_1 + 0x10) = uVar5;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0xfff) != 0) {
      fn_82641B60(param_1,*(unsigned __int64 *)(param_1 + 0x10) << 0x34,0x2200,param_1 + 0x2934);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfffffffffffff000;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0x1f000) != 0) {
      fn_82641B60(param_1,(*(unsigned __int64 *)(param_1 + 0x10) & 0x1f000) << 0x2f,0x2180,
                        param_1 + 0x2920);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfffffffffffe0fff;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0x3fffc0000000000) != 0) {
      fn_82641B60(param_1,(*(unsigned __int64 *)(param_1 + 0x10) & 0x3fffc0000000000) << 6,0x2000,
                        param_1 + 0x2880);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfc0003ffffffffff;
    }
    if ((*(unsigned __int64 *)(param_1 + 0x10) & 0x3ffffe00000) != 0) {
      fn_82641B60(param_1,(*(unsigned __int64 *)(param_1 + 0x10) & 0x3ffffe00000) << 0x16,0x2100,
                        param_1 + 0x28cc);
      *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) & 0xfffffc00001fffff;
    }
  }
  uVar12 = *(unsigned __int64 *)(param_1 + 0x18);
  if ((uVar12 != 0) && ((uVar12 & 0x7ffffc00000000) != 0)) {
    fn_82641B60(param_1,(uVar12 & 0x7ffffc00000000) << 9,0x2280,param_1 + 0x2964);
    *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) & 0xff800003ffffffff;
  }
  uVar12 = *(unsigned __int64 *)(param_1 + 0x20);
  if ((uVar12 != 0) && ((uVar12 & 0x3fffffffff) != 0)) {
    fn_82641B60(param_1,uVar12 << 0x1a,0x2300,param_1 + 0x29b8);
    *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) & 0xffffffc000000000;
  }
  iVar8 = *(int *)(param_1 + 0x5e78) >> 0x1d;
  if (iVar8 == 0) {
    uVar12 = 0xffffffff8218aef0;
    uVar17 = 0x20d;
    uVar15 = 0x7000015;
  }
  else if (iVar8 == 1) {
    uVar12 = 0xffffffff8218b748;
    uVar17 = 0x3a5;
    uVar15 = 0x7000013;
  }
  else if (iVar8 == 2) {
    uVar12 = 0xffffffff8218c618;
    uVar17 = 0xd2;
    uVar15 = 0x700000f;
  }
  else {
    uVar17 = (unsigned __int64)auStack_60[0];
    uVar12 = (unsigned __int64)auStack_60[0];
    uVar15 = auStack_60[0];
  }
  lVar6 = fn_82643A48(param_1,uVar17 + 5);
  iVar8 = (int)lVar6;
  *(unsigned int *)(iVar8 + 4) = 0xc0003b00;
  *(unsigned int *)(iVar8 + 8) = 0x300;
  lVar16 = (uVar17 & 0x3fffffff) * 4;
  *(unsigned int *)(iVar8 + 0xc) = (unsigned int)((uVar17 + 1 & 0xffffffff) << 0x10) & 0x3fff0000 | 0xc0002b00;
  *(unsigned int *)(iVar8 + 0x10) = 0;
  *(unsigned int *)(lVar6 + 0x14) = (unsigned int)uVar17 & 0x3fff;
  fn_82F68CC0(lVar6 + 0x18,uVar12,lVar16);
  uVar12 = lVar16 + lVar6 + 0x14;
  *(int *)(param_1 + 0x30) = (int)uVar12;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x38) < (uVar12 & 0xffffffff)) {
    uVar12 = fn_82645110(param_1);
  }
  iVar8 = (int)uVar12;
  *(unsigned int *)(iVar8 + 4) = 0xc0102b00;
  *(unsigned int *)(iVar8 + 8) = 1;
  *(unsigned int *)(iVar8 + 0xc) = 0xf;
  fn_82F68CC0(uVar12 + 0x10,0xffffffff8218ad04,0x3c);
  *(unsigned int *)(iVar8 + 0x4c) = 0x12180;
  *(unsigned int *)(iVar8 + 0x50) = uVar15 | 0x10000000;
  uVar12 = uVar12 + 0x54;
  *(unsigned int *)uVar12 = 0;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)uVar12;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x38) < (uVar12 & 0xffffffff)) {
    uVar12 = fn_82645110(param_1);
  }
  iVar8 = (int)uVar12;
  *(unsigned int *)(iVar8 + 4) = 0x22100;
  *(unsigned int *)(iVar8 + 8) = 0xffff;
  *(unsigned int *)(iVar8 + 0xc) = 0;
  *(unsigned int *)(iVar8 + 0x10) = 0;
  *(unsigned int *)(iVar8 + 0x14) = 0x2293;
  *(unsigned int *)(iVar8 + 0x18) = 0;
  *(unsigned int *)(iVar8 + 0x1c) = 0x22204;
  *(unsigned int *)(iVar8 + 0x20) = 0x10000;
  *(unsigned int *)(iVar8 + 0x24) = 0x10000;
  *(unsigned int *)(iVar8 + 0x28) = 0x300;
  *(unsigned int *)(iVar8 + 0x2c) = 0x2312;
  *(unsigned int *)(iVar8 + 0x30) = 0xffff;
  *(unsigned int *)(iVar8 + 0x34) = 0x200d;
  *(unsigned int *)(iVar8 + 0x38) = 0;
  *(unsigned int *)(iVar8 + 0x3c) = 0x2200;
  puVar7 = (unsigned int *)(uVar12 + 0x40);
  *puVar7 = 0;
  *(unsigned int **)(param_1 + 0x30) = puVar7;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x38) < (uVar12 + 0x40 & 0xffffffff)) {
    puVar7 = (unsigned int *)fn_82645110(param_1);
  }
  puVar7[1] = 0x54800;
  puVar7[2] = (*(unsigned short *)(param_1 + 0x5d90) & 0x7fe0) << 0x11 | *(unsigned int *)(param_2 + 0x1c) & 0x3fc |
              0x80004802;
  puVar7[3] = ((*(unsigned int *)(param_2 + 0x20) >> 0x14) + 0x200 & 0x1000) +
              (*(unsigned int *)(param_2 + 0x20) & 0x1fffffff);
  puVar7[4] = *(unsigned int *)(param_2 + 0x24);
  puVar7[5] = *(unsigned int *)(param_2 + 0x28) & 0x8007ffff | 0x1000000;
  puVar7[6] = *(unsigned int *)(param_2 + 0x2c);
  puVar7[7] = *(unsigned int *)(param_2 + 0x30);
  *(unsigned int **)(param_1 + 0x30) = puVar7 + 7;
  uVar15 = *(unsigned int *)(param_1 + 0x5e70) >> 0x1e;
  uVar12 = (unsigned __int64)*(unsigned int *)((*(unsigned int *)(param_1 + 0x5e64) & 1) * 4 + iVar18);
  iVar8 = *(int *)(param_1 + 0x5e78) >> 0x1d;
  uVar17 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x5e70) >> 0x1f) * 0x600 +
           (((unsigned __int64)uVar15 & 1) * 0x38 + 0x20f & 0xfffffe00) + uVar12;
  if ((iVar8 == 0) || (iVar8 == 1)) {
    uVar10 = *(unsigned int *)(param_1 + 0x5dac) & 0xc0f8 | 0x4b000600;
  }
  else {
    if (iVar8 != 2) goto code_r0x82657a6c;
    uVar10 = *(unsigned int *)(param_1 + 0x5dac) & 0xc0f8 | 0x4b000a00;
  }
  *(unsigned int *)(param_1 + 0x5dac) = uVar10;
  *(unsigned int *)(param_1 + 0x5da4) = 0x40000000;
  *(unsigned int *)(param_1 + 0x5da8) = 0x4b000000;
  *(unsigned int *)(param_1 + 0x5db0) = *(unsigned int *)(param_1 + 0x5da0) & 0x7fffff | 0x4b000000;
code_r0x82657a6c:
  iVar8 = fn_82643A48(param_1,0x31);
  *(unsigned int *)(iVar8 + 4) = 0x2f4000;
  fn_82F68CC0(iVar8 + 8,(unsigned int *)(param_1 + 0x5da4),0xc0);
  *(int *)(param_1 + 0x30) = iVar8 + 0xc4;
  bVar4 = (*(unsigned char *)(param_1 + 0x5e7c) & 0x40) == 0;
  bVar19 = bVar4 << 1;
  if (!bVar4) {
    fn_82A1E650(*(unsigned int *)(param_1 + 0x5d88),0xffffffffffffffff);
  }
  lVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 0x5c2a) * 0x200 + uVar17;
  do {
    uVar13 = (unsigned __int64)uRam831e79a4;
    if (in_RESERVE != '\0') {
      uRam831e79a4 = storeWordConditionalIndexed(lVar6,0,0xffffffff831e79a4);
      bVar19 = 2;
    }
  } while (!(bool)(bVar19 >> 1 & 1));
  uVar13 = (uVar13 - *(unsigned int *)(param_1 + 0x5c24) & 0xffffffff) / 0x1800;
  if (0xd < uVar13) {
    uVar13 = 0xe;
  }
  *(int *)(param_1 + 0x5c24) = (int)lVar6;
  uVar10 = *(unsigned int *)(param_1 + 0x5e70);
  uVar1 = *(unsigned int *)(param_1 + 0x5c2c);
  uVar9 = *(unsigned int *)(param_1 + 0x30);
  uVar2 = *(unsigned int *)(param_1 + 0x38);
  puVar7 = *(unsigned int **)(((*(int *)(param_1 + 0x5e64) + -1) * 4 & 4U) + iVar18);
  *(unsigned int *)(param_1 + 0x2898) =
       ((int)((uVar17 & 0xffffffff) >> 0x14) + 0x200U & 0x1000) + ((unsigned int)uVar17 & 0x1fffffff);
  *puVar7 = 0x9b58e71a;
  puVar7[1] = uVar10 >> 0x1c & 3;
  puVar7[2] = uVar1;
  puVar7[3] = (int)uVar13;
  if (uVar2 < uVar9) {
    uVar9 = fn_82645110(param_1);
  }
  *(unsigned int *)(uVar9 + 4) = 0x2006;
  lVar6 = 0;
  *(unsigned int *)(uVar9 + 8) = 0;
  *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar9 + 8);
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + 1;
  uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x5d94);
  while( true ) {
    uVar10 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar10) {
      uVar10 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar10 + 4) = 0x2102;
    *(int *)(uVar10 + 8) = (int)lVar6;
    uVar14 = uVar17;
    if (0xffff < (uVar17 & 0xffffffff)) {
      uVar14 = 0xfffe;
    }
    *(unsigned int *)(uVar10 + 0xc) = 0xc0003601;
    uVar17 = uVar17 - uVar14;
    puVar11 = (unsigned int *)(uVar10 + 0x10);
    *puVar11 = (unsigned int)((uVar14 & 0xffffffff) << 0x10) | 0x81;
    *(unsigned int **)(param_1 + 0x30) = puVar11;
    if (uVar17 == 0) break;
    lVar6 = uVar14 + lVar6;
  }
  *(unsigned int *)(param_1 + 0x2898) = 0;
  if (*(unsigned int **)(param_1 + 0x38) < puVar11) {
    puVar11 = (unsigned int *)fn_82645110(param_1);
  }
  puVar11[1] = 0x2006;
  puVar11 = puVar11 + 2;
  *puVar11 = 0;
  *(unsigned int **)(param_1 + 0x30) = puVar11;
  *(int *)(param_1 + 0x3590) = *(int *)(param_1 + 0x3590) + -1;
  if (*(unsigned int **)(param_1 + 0x38) < puVar11) {
    puVar11 = (unsigned int *)fn_82645110(param_1);
  }
  puVar11[1] = 0xc0004600;
  puVar11[2] = 6;
  *(unsigned int **)(param_1 + 0x30) = puVar11 + 2;
  uVar17 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar17 | 8;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar17 | 0x80008;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar17 | 0x180008;
  *(unsigned __int64 *)(param_1 + 0x18) = *(unsigned __int64 *)(param_1 + 0x18) | 0xfe000000;
  uVar17 = *(unsigned __int64 *)(param_1 + 0x10);
  *(unsigned __int64 *)(param_1 + 0x10) = uVar17 | 0x800;
  *(unsigned __int64 *)(param_1 + 0x10) = uVar17 | 0x900;
  uVar1 = *(unsigned int *)(param_1 + 0x2a9c);
  uVar3 = *(unsigned int *)(param_1 + 0x5e68);
  *(unsigned int *)(param_1 + 0x2ab0) = uVar1;
  fn_82645110(param_1);
  *(unsigned int *)(param_1 + 0x5e68) = uVar1;
  fn_82631C78(param_1,0,0,0);
  fn_82631C78(param_1,0,0,0);
  lVar6 = uVar12 + 0x10;
  *(unsigned int *)(param_1 + 0x5e70) = uVar15 << 0x1c | *(unsigned int *)(param_1 + 0x5e70) & 0xcfffffff;
  if ((uVar15 & 1) != 0) {
    fn_82F68CC0(lVar6,param_1 + 0x3670,0x38);
    lVar6 = uVar12 + 0x48;
  }
  lVar6 = ((lVar6 - uVar12) + 0x1ff & 0xfffffe00) + uVar12;
  if ((uVar15 & 2) != 0) {
    if ((*(unsigned char *)(param_1 + 0x5e74) & 0x80) == 0) {
      fn_8264DA70(*(unsigned int *)(param_1 + 0x5e6c),*(unsigned int *)(param_1 + 0x5e6c),1);
    }
    else {
      fn_8264DB08();
    }
    fn_82F68CC0(lVar6,*(unsigned int *)(param_1 + 0x5e6c),0x600);
    lVar6 = lVar6 + 0x600;
  }
  uVar12 = (uVar13 * 0xc + (unsigned __int64)*(unsigned short *)(param_1 + 0x5c28)) * 0x200 & 0xfffffe00;
  uVar10 = *(unsigned int *)((*(unsigned int *)(param_1 + 0x5e64) & 1) * 4 + iVar18);
  *(unsigned int *)(param_1 + 0x5e70) = uVar15 << 0x1a | *(unsigned int *)(param_1 + 0x5e70) & 0x3fffffff;
  *(short *)(param_1 + 0x5c28) =
       (short)((lVar6 - (unsigned __int64)uVar10 & 0xffffffff) >> 9) + *(short *)(param_1 + 0x5c2a);
  if ((*(unsigned char *)(param_1 + 0x5e7c) & 0x80) != 0) {
    *(unsigned int *)(param_1 + 0x5d84) = 0;
    *(unsigned int *)(param_1 + 0x5d80) = *(unsigned int *)(param_1 + 0x5d98);
    fn_82645740(uVar3);
    fn_82A29FE0(*(unsigned int *)
                       (((*(unsigned int *)(param_1 + 0x5e70) >> 0x14 & 0x3f) + 5) * 4 + iVar18),
                      *(unsigned int *)(((*(int *)(param_1 + 0x5e64) + -1) * 4 & 4U) + iVar18),uVar12,
                      auStack_60,param_1 + 0x5d78);
    *(unsigned char *)(param_1 + 0x5e7c) = *(unsigned char *)(param_1 + 0x5e7c) | 0x40;
    fn_82656D40(iVar18,uVar12);
  }
  *(unsigned char *)(param_1 + 0x5e7c) = *(unsigned char *)(param_1 + 0x5e7c) | 0x80;
  *(int *)(param_1 + 0x5e64) = *(int *)(param_1 + 0x5e64) + 1;
  return;
}

