extern unsigned int *auStack_a8;
extern int fn_82A29A38();
extern int fn_82ABA770();
extern int fn_82ABAB58();
extern int fn_82ABACE8();
extern int fn_82ABB0F0();


__int64 fn_82ABBE60(int param_1,unsigned int *param_2,unsigned int *param_3,int *param_4,int *param_5,
                      unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  int *piStack0000002c;
  int aiStack_b0 [2];
  unsigned int auStack_a8 [6];
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  piStack0000002c = param_4;
  if (uVar1 < 0x300) {
    fn_82A29A38();
  }
  uVar2 = *param_3;
  puVar13 = param_3 + 1;
  iVar10 = 0;
  if ((uVar2 >> 0x14 & 0x700) != 0 || (uVar2 & 0x1800) != 0) {
    fn_82A29A38();
  }
  if ((uVar2 & 0x2000) != 0) {
    fn_82A29A38();
  }
  uVar9 = 0;
  uVar11 = uVar2;
  if (param_8 != 0) {
    uVar9 = *puVar13;
    puVar13 = param_3 + 2;
    uVar11 = uVar2 & 0x8fffe000 | 0x21;
  }
  iVar12 = 0;
  uVar14 = 0;
  puVar13 = puVar13 + -1;
  do {
    uVar3 = puVar13[1];
    puVar8 = auStack_a8 + 2;
    if ((uVar3 & 0x80000000) == 0) {
      *(unsigned int *)((int)auStack_a8 + uVar14) = 0;
LAB_82abbf70:
      *(unsigned int *)(uVar14 + (int)puVar8) = 0;
    }
    else {
      *(unsigned int *)(uVar14 + (int)puVar8) = uVar3;
      if (((uVar3 & 0x2000) != 0x2000) ||
         ((uVar7 = ((unsigned __int64)(uVar3 >> 0x14) & 0x700 | (unsigned __int64)uVar3 & 0x1800) >> 8, uVar7 != 2
          && (uVar7 != 1)))) {
        puVar8 = auStack_a8;
        puVar13 = puVar13 + 1;
        goto LAB_82abbf70;
      }
      if (iVar12 != 0) {
        fn_82A29A38();
      }
      puVar13 = puVar13 + 2;
      iVar10 = iVar10 + 1;
      *(unsigned int *)((int)auStack_a8 + uVar14) = *puVar13;
    }
    uVar14 = uVar14 + 4;
    iVar12 = iVar12 + 1;
  } while (uVar14 < 8);
  if ((auStack_a8[3] >> 0x14 & 0x700 | auStack_a8[3] & 0x1800) != 0xa00) {
    fn_82A29A38();
  }
  uVar3 = auStack_a8[3] & 0xff0000;
  aiStack_b0[0] = 1;
  *param_2 = (auStack_a8[3] + 0x10 & 0xff) << 0x10 | 0xa00005e;
  uVar14 = uVar11;
  if ((uVar3 != 0xe40000) && (uVar14 = uVar11 | 0xf0000, param_8 == 0)) {
    uVar14 = uVar11 & 0x8fffe000 | 0xf0021;
  }
  uVar4 = fn_82ABA770(param_2 + 1,uVar14,0,aiStack_b0,param_1);
  uVar4 = fn_82ABACE8(uVar4,auStack_a8[2],auStack_a8[0],param_6,param_7,0x5e,0,uVar1);
  lVar5 = fn_82ABACE8(uVar4,auStack_a8[2],auStack_a8[0],param_6,param_7,0x5e,0,uVar1);
  if (param_8 == 0) {
    if (uVar3 == 0xe40000) goto LAB_82abc0e8;
    auStack_a8[0] = 1;
    *(unsigned int *)lVar5 = 0x47;
    lVar5 = fn_82ABA770(lVar5 + 4,uVar2,0,auStack_a8,param_1);
    *(unsigned int *)lVar5 = 0x440021;
    uVar6 = fn_82ABAB58(uVar3);
    *(unsigned int *)((int)lVar5 + 4) = uVar6;
    auStack_a8[0] = auStack_a8[0] + 2;
    lVar5 = lVar5 + 8;
  }
  else {
    auStack_a8[0] = 0;
    lVar5 = fn_82ABB0F0(lVar5,uVar2,0,uVar9,uVar3,auStack_a8,param_1);
  }
  aiStack_b0[0] = aiStack_b0[0] + auStack_a8[0];
LAB_82abc0e8:
  *piStack0000002c = iVar10 + 3;
  *param_5 = *param_5 + aiStack_b0[0];
  return lVar5;
}

