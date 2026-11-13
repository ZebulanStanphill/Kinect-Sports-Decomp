extern unsigned int *auStack_a0;
extern int fn_82A29A38();
extern int fn_82AAC770();
extern int fn_82AAC8C0();
extern int fn_82AACDF0();
extern unsigned int lbl_83160500;
extern unsigned int lbl_83160510;
extern unsigned int lbl_83160520;


void fn_82AAEEB8(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned char *puVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned int *puVar18;
  unsigned int auStack_a0 [40];
  
  if (param_2 != -0xfefc) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (unsigned int *)*param_5;
  if ((*(unsigned int *)(iVar1 + 4) & 0x80000000) == 0) {
    fn_82A29A38();
  }
  uVar3 = *(unsigned int *)(iVar1 + 4);
  uVar9 = *(unsigned int *)(iVar1 + 8);
  uVar5 = fn_82AAC8C0(((unsigned __int64)(uVar3 >> 0x14) & 0x700 | (unsigned __int64)uVar3 & 0x1800) >> 8,
                        uVar3 & 0x7ff,param_4,auStack_a0);
  uVar17 = (auStack_a0[0] & 0x3f) << 0x10 | 0x400000 | uVar5 & 0xffff;
  *puVar2 = 0x21;
  puVar2[1] = uVar17;
  uVar5 = 0;
  if ((uVar3 & 0xf00000) != 0) {
    uVar5 = 0x100;
  }
  uVar6 = uVar3 >> 0x18;
  uVar7 = uVar6 & 0xf;
  uVar13 = 0;
  if ((uVar6 & 0xf) != 0) {
    if ((uVar6 & 8) == 0) {
      puVar12 = &lbl_83160500;
    }
    else {
      uVar7 = ~uVar7 + 1;
      puVar12 = &lbl_83160510;
    }
    uVar13 = *(int *)(puVar12 + (uVar7 & 3) * 4) << 9;
  }
  uVar13 = uVar13 | uVar5;
  puVar18 = puVar2 + 3;
  if ((uVar3 & 0x10000) == 0) {
    puVar2[2] = uVar13;
  }
  else {
    puVar2[2] = uVar13 | 1;
  }
  uVar11 = (unsigned __int64)uVar9 & 0xff0000;
  if (uVar11 == 0xe40000) {
    uVar5 = 0x3210;
  }
  else {
    uVar5 = *(int *)(&lbl_83160520 + ((unsigned int)(uVar11 >> 0x14) & 0xc)) << 0xc |
            *(int *)(&lbl_83160520 + ((unsigned int)((uVar11 >> 0x14) << 2) & 0xc)) << 8 |
            *(int *)(&lbl_83160520 + ((unsigned int)((uVar11 >> 0x12) << 2) & 0xc)) << 4 |
            *(unsigned int *)(&lbl_83160520 + ((unsigned int)uVar11 >> 0xe & 0xc));
  }
  uVar6 = fn_82AAC770(uVar9 & 0xf000000);
  uVar7 = fn_82AACDF0(uVar9,param_4,auStack_a0);
  if ((uVar6 == 0) && (uVar5 == 0x3210)) {
    *puVar18 = (auStack_a0[0] & 0x3f) << 0x10 | uVar7 & 0xffff;
  }
  else {
    *puVar18 = (auStack_a0[0] & 0x3f) << 0x10 | 0x400000 | uVar7 & 0xffff;
    puVar18 = puVar2 + 4;
    *puVar18 = uVar6 | uVar5;
  }
  uVar4 = (unsigned __int64)auStack_a0[0];
  uVar14 = (uVar3 & 0x7ff) + 8;
  puVar18[1] = uVar14 | 0x10000;
  uVar10 = (unsigned __int64)*(unsigned int *)(&lbl_83160520 + (uVar9 >> 0xe & 0xc));
  uVar15 = ((unsigned __int64)*(unsigned int *)(&lbl_83160520 + (uVar9 >> 0x12 & 3) * 4) & 0xfffffff) << 4 | uVar10
  ;
  uVar11 = uVar10 & 7;
  uVar8 = fn_82AAC770(uVar9 & 0xf000000);
  uVar9 = fn_82AACDF0(uVar9,param_4,auStack_a0);
  uVar9 = (auStack_a0[0] & 0x3f) << 0x10 | 0x400000 | uVar9 & 0xffff;
  puVar18[2] = uVar9;
  puVar18[3] = (unsigned int)((((uVar10 & 7) << 4 | uVar11) << 4 | uVar11) << 4) | uVar8 | (unsigned int)uVar11;
  puVar18[4] = 0x21;
  puVar18[5] = uVar17;
  if ((uVar3 & 0x20000) == 0) {
    puVar18[6] = uVar13;
  }
  else {
    puVar18[6] = uVar13 | 4;
  }
  puVar16 = puVar18 + 7;
  if ((uVar6 == 0) && (uVar5 == 0x3210)) {
    *puVar16 = (unsigned int)((uVar4 & 0x3f) << 0x10) | uVar7 & 0xffff;
  }
  else {
    *puVar16 = (unsigned int)((uVar4 & 0x3f) << 0x10) | 0x400000 | uVar7 & 0xffff;
    puVar16 = puVar18 + 8;
    *puVar16 = uVar6 | uVar5;
  }
  uVar11 = uVar15 >> 4 & 7;
  puVar16[1] = uVar14 | 0x410000;
  puVar16[2] = 0x32;
  puVar16[3] = uVar9;
  puVar16[4] = (unsigned int)(((uVar15 & 0x70 | uVar11) << 4 | uVar11) << 4) | (unsigned int)uVar11 | uVar8;
  *param_5 = puVar16 + 5;
  *param_1 = iVar1 + 0x10;
  return;
}

