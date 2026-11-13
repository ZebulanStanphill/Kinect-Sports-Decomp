typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_118;
extern unsigned int *auStack_c0;
extern unsigned int fStack_110;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern unsigned int fStack_170;
extern unsigned int fStack_174;
extern unsigned int fStack_178;
extern unsigned int fStack_17c;
extern unsigned int fStack_180;
extern unsigned int fStack_184;
extern unsigned int fStack_188;
extern unsigned int fStack_18c;
extern unsigned int fStack_190;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern int fn_8268CCB0();
extern int fn_8268CD40();
extern int fn_8268CF60();
extern int fn_8268D790();
extern int fn_8278FDC8();
extern int fn_827A1508();
extern int fn_827A24F0();
extern int fn_827A3178();
extern int fn_827A8770();
extern int fn_827A8A28();
extern int fn_827AF4F8();
extern int fn_82F68918();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_100;
extern unsigned int uStack_10c;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;
extern unsigned int uStack_168;
extern unsigned int uStack_16c;
extern unsigned int uStack_1a0;
extern unsigned int uStack_98;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_d4;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;
extern unsigned int uStack_e0;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_827A3BE8(unsigned __int64 param_1,__int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  float fVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  unsigned __int64 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  unsigned __int64 uStack_1a0;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  unsigned int uStack_16c;
  unsigned __int64 uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  unsigned int uStack_150;
  unsigned int uStack_14c;
  unsigned int uStack_148;
  unsigned int uStack_144;
  unsigned int uStack_140;
  unsigned int uStack_13c;
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  unsigned int uStack_11c;
  unsigned int auStack_118 [2];
  float fStack_110;
  unsigned int uStack_10c;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  struct { float first; float second; } stack_pair_e8;

  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  float afStack_c8 [2];
  unsigned char auStack_c0 [40];
  unsigned int uStack_98;
  unsigned char bStack_90;
  
  iVar6 = fn_82F6A538();
  uVar2 = *(unsigned short *)(iVar6 + 0x68);
  piVar4 = *(int **)(*(int *)param_2 + 0xc);
  if ((((uVar2 >> 3 & 1) == 0) || ((uVar2 & 1) != 0)) || ((uVar2 >> 8 & 1) != 0)) goto LAB_827a4230;
  uVar9 = 0xffffffffffffffff;
  uStack_168 = CONCAT44(0xffffffff,(((unsigned __int64)(uStack_168) >> 32) & 0xFFFFFFFF));
  dVar14 = (double)lbl_821AAD20;
  if (*(short *)(iVar6 + 0x34) != *(short *)(*(int *)(iVar6 + 8) + 0x138)) {
    fStack_180 = lbl_821AAD20;
    uVar9 = (unsigned __int64)*(unsigned int *)(iVar6 + 0x18);
    fStack_17c = lbl_821AAD20;
    fStack_178 = lbl_821AAD20;
    fStack_174 = lbl_821AAD20;
    if (*(unsigned int *)(iVar6 + 0x14) == 0) {
LAB_827a3c90:
      bVar5 = false;
    }
    else {
      iVar7 = fn_8278FDC8((unsigned __int64)*(unsigned int *)(iVar6 + 0x14) + 0x14);
      bVar5 = true;
      if (iVar7 == 0) goto LAB_827a3c90;
    }
    if (bVar5) {
      uVar9 = *(unsigned int *)(*(int *)(iVar6 + 0x14) + 0x3c) + uVar9;
    }
    cVar8 = fn_827A3178(iVar6,uVar9,&fStack_180,&uStack_168,&uStack_1a0,0,0);
    if (cVar8 == '\0') {
      fStack_17c = (float)dVar14;
      fStack_174 = (float)dVar14;
      dVar13 = dVar14;
      dVar10 = dVar14;
    }
    else {
      dVar13 = (double)fStack_180;
      iVar7 = *(int *)(*(int *)(*(int *)(iVar6 + 8) + 8) + 0x1c);
      if ((iVar7 != 0) && ((*(unsigned short *)(iVar7 + 0x2a) & 1) != 0)) {
        *(unsigned int *)(iVar6 + 0x1c) = *(unsigned int *)(iVar7 + 0x20);
      }
      iVar7 = *(int *)(*(int *)(iVar6 + 8) + 0x14);
      dVar10 = dVar13;
      if ((iVar7 != 0) &&
         (fn_827AF4F8(auStack_c0,iVar7,*(unsigned int *)(iVar6 + 0x18),0xffffffffffffffff),
         (bStack_90 & 0x10) != 0)) {
        *(unsigned int *)(iVar6 + 0x1c) = uStack_98;
      }
    }
    uVar9 = uStack_168 >> 0x20;
    uVar3 = *(unsigned short *)(*(int *)(iVar6 + 8) + 0x138);
    *(float *)(iVar6 + 0x24) = (float)dVar10;
    *(float *)(iVar6 + 0x28) = fStack_17c;
    *(float *)(iVar6 + 0x2c) = (float)dVar13;
    *(float *)(iVar6 + 0x30) = fStack_174;
    *(unsigned short *)(iVar6 + 0x34) = uVar3;
  }
  iVar7 = *(int *)(iVar6 + 8);
  fStack_190 = *(float *)(iVar6 + 0x24);
  fStack_18c = *(float *)(iVar6 + 0x28);
  fStack_188 = *(float *)(iVar6 + 0x2c);
  fStack_184 = *(float *)(iVar6 + 0x30);
  uStack_1a0 = (unsigned __int64)*(unsigned int *)(iVar7 + 0x4c);
  dVar13 = (double)uStack_1a0;
  uStack_1a0 = fn_827A8770(iVar7 + 0x24);
  uStack_1a0 = uStack_1a0 & 0xffffffff;
  fVar1 = *(float *)(iVar7 + 0x3c);
  fStack_190 = fVar1 + (float)(-dVar13 + (double)fStack_190);
  fStack_184 = *(float *)(iVar7 + 0x40) + -(float)uStack_1a0 + fStack_184;
  fStack_188 = fVar1 + (float)(-dVar13 + (double)fStack_188);
  fStack_18c = fStack_18c + -(float)uStack_1a0 + *(float *)(iVar7 + 0x40);
  if (*(float *)(iVar7 + 0x48) < fStack_184) {
    if ((int)uVar9 == -1) {
      uVar9 = fn_827A1508(*(unsigned int *)(iVar6 + 8),*(unsigned int *)(iVar6 + 0x18));
    }
    cVar8 = fn_827A24F0((unsigned __int64)*(unsigned int *)(iVar6 + 8) + 0x24,uVar9);
    if (cVar8 != '\0') {
      fStack_184 = *(float *)(iVar7 + 0x48);
    }
  }
  if ((((*(float *)(iVar7 + 0x44) < fStack_188) || (*(float *)(iVar7 + 0x48) < fStack_184)) ||
      (fStack_190 < *(float *)(iVar7 + 0x3c))) ||
     (bVar5 = true, fStack_18c < *(float *)(iVar7 + 0x40))) {
    bVar5 = false;
  }
  if (bVar5) {
    uStack_150 = *param_3;
    uStack_14c = param_3[1];
    uStack_148 = param_3[2];
    uStack_144 = param_3[3];
    fStack_188 = fStack_190 + lbl_8200571C;
    uStack_140 = param_3[4];
    uStack_13c = param_3[5];
    fStack_160 = (float)dVar14;
    fStack_15c = (float)dVar14;
    fStack_158 = (float)dVar14;
    fStack_154 = (float)dVar14;
    fn_827A8A28(&uStack_150,&fStack_190,&fStack_160);
    (**(int (***)())(*piVar4 + 0x20))(piVar4,&uStack_150);
    (**(int (***)())(*piVar4 + 0x28))(piVar4,param_4);
    uStack_130 = uStack_150;
    uStack_12c = uStack_14c;
    uStack_128 = uStack_148;
    uStack_124 = uStack_144;
    uStack_120 = uStack_140;
    uStack_11c = uStack_13c;
    fn_8268CF60(&uStack_130,param_2 + 0x28);
    uStack_100 = uStack_130;
    uStack_fc = uStack_12c;
    uStack_f8 = uStack_128;
    uStack_f4 = uStack_124;
    uStack_f0 = uStack_120;
    uStack_ec = uStack_11c;
    uStack_e0 = uStack_130;
    uStack_dc = uStack_12c;
    uStack_d8 = uStack_128;
    uStack_d4 = uStack_124;
    uStack_d0 = uStack_120;
    uStack_cc = uStack_11c;
    fn_8268CD40(&uStack_100,&uStack_e0);
    stack_pair_e8.first = fStack_160;
    stack_pair_e8.second = fStack_15c;
    fn_8268CCB0(&uStack_130,&fStack_170,&stack_pair_e8.first);
    dVar15 = (double)lbl_82002C5C;
    dVar14 = (double)fn_82F68918((double)(float)((double)fStack_170 + dVar15));
    fStack_170 = (float)dVar14;
    fn_8268CCB0(&uStack_100,afStack_c8,&fStack_170);
    fStack_160 = afStack_c8[0];
    fStack_170 = fStack_170 + lbl_82002AE0;
    fn_8268CCB0(&uStack_100,&fStack_110,&fStack_170);
    fStack_170 = fStack_110;
    fStack_158 = fStack_110;
    uStack_168 = CONCAT44(*(unsigned int *)(iVar6 + 0x1c),(((unsigned __int64)(uStack_168) >> 32) & 0xFFFFFFFF));
    uStack_16c = uStack_10c;
    fn_8268D790(auStack_118,param_4,&uStack_168);
    dVar14 = (double)fStack_15c;
    dVar11 = (double)fStack_158;
    dVar10 = (double)fStack_154;
    dVar12 = (double)(float)((double)fStack_160 + dVar15);
    dVar13 = (double)fn_82F68918(dVar12);
    uStack_1a0 = ((((unsigned __int64)(uStack_1a0)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)dVar14)) & ((unsigned __int64)0xFFFF)) << 48));
    fStack_180 = (float)CONCAT22((short)(int)dVar13,(((unsigned __int64)(uStack_1a0) >> 48) & 0xFFFF));
    uStack_1a0 = (__int64)(int)dVar14;
    dVar13 = (double)fn_82F68918((double)(float)(dVar11 + dVar15));
    uStack_168 = ((((unsigned __int64)(uStack_168)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)dVar14)) & ((unsigned __int64)0xFFFF)) << 48));
    uStack_1a0 = (unsigned __int64)(int)dVar13;
    fStack_17c = (float)CONCAT22((short)(int)dVar13,(((unsigned __int64)(uStack_168) >> 48) & 0xFFFF));
    uStack_168 = (__int64)(int)dVar14;
    dVar14 = (double)fn_82F68918(dVar12);
    uStack_1a0 = ((((unsigned __int64)(uStack_1a0)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)dVar14)) & ((unsigned __int64)0xFFFF)) << 48));
    fStack_178 = (float)CONCAT22((((unsigned __int64)(uStack_1a0) >> 48) & 0xFFFF),(short)(int)dVar10);
    uStack_1a0 = (__int64)(int)dVar10;
    dVar14 = (double)fn_82F68918((double)(float)(dVar11 + dVar15));
    uStack_1a0 = ((((unsigned __int64)(uStack_1a0)) & (~(((unsigned __int64)0xFFFF) << 48))) | ((((unsigned __int64)((unsigned short)(int)dVar10)) & ((unsigned __int64)0xFFFF)) << 48));
    fStack_174 = (float)CONCAT22((short)(int)dVar14,(((unsigned __int64)(uStack_1a0) >> 48) & 0xFFFF));
    uStack_168 = CONCAT44(auStack_118[0],(((unsigned __int64)(uStack_168) >> 32) & 0xFFFFFFFF));
    uStack_1a0 = (__int64)(int)dVar10;
    (**(int (***)())(*piVar4 + 0x5c))(piVar4,&uStack_168);
    (**(int (***)())(*piVar4 + 0x3c))(piVar4,&fStack_180,4,1,0);
    (**(int (***)())(*piVar4 + 0x40))(piVar4,0xffffffff820116cc,6,1,0);
    (**(int (***)())(*piVar4 + 0x48))(piVar4,0,0,4,0,2);
    (**(int (***)())(*piVar4 + 0x3c))(piVar4,0,0,0,0);
    (**(int (***)())(*piVar4 + 0x40))(piVar4,0,0,0,0);
  }
LAB_827a4230:
  fn_82F6A584();
  return;
}

