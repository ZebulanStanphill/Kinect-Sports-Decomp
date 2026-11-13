#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define NAN(x) ((x) != (x))
extern unsigned int fStack_7c;
extern unsigned int fStack_80;
extern int fn_8226A7C0();
extern int fn_8226C610();
extern int fn_82275128();
extern int fn_8265C9E0();
extern int fn_82809CB0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821A7E4C;
extern unsigned int lbl_821A7E60;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1024;
extern unsigned int lbl_831D1044;
extern unsigned int lbl_831D1048;
extern unsigned int lbl_831D1050;
extern unsigned int lbl_831D1054;
extern unsigned int lbl_831D1058;
extern unsigned int lbl_831D105C;
extern unsigned int lbl_831D1060;
extern unsigned int lbl_831D1064;
extern unsigned int lbl_831D1068;
extern unsigned int lbl_831D106C;
extern unsigned int lbl_831D1070;
extern unsigned int lbl_831D1074;
extern unsigned int lbl_831D1084;
extern unsigned int lbl_831D1088;
extern unsigned int lbl_831D108C;
extern unsigned int lbl_831D1090;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_78;


void fn_82271C18(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fStack_80;
  float fStack_7c;
  unsigned __int64 uStack_78;
  char cStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  iVar4 = fn_82F6A548();
  dVar12 = (double)lbl_831D1024;
  if (*(int *)(iVar4 + 0x50) != 0) {
    uVar3 = 0;
    goto LAB_82271ff8;
  }
  if (param_4 != 0) {
    dVar14 = (double)(float)(dVar12 + (double)lbl_821917B4);
    iVar5 = fn_82275128();
    if ((double)*(float *)(iVar5 + 0xc) < dVar14) {
      *(float *)(iVar5 + 0xc) = (float)dVar14;
    }
  }
  *(unsigned int *)(iVar4 + 0xb8) = param_3;
  *(unsigned int *)(iVar4 + 0xbc) = (unsigned int)LZCOUNT(*(unsigned int *)(iVar4 + 0xbc)) >> 5;
  if ((int)param_2 == 3) {
    uVar10 = (__int64)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (int)uVar10;
    param_2 = (unsigned __int64)((-uVar10 & ~uVar10 & 0xffffffff) >> 0x1f != 0);
  }
  uStack_78 = (__int64)*(int *)(*(int *)(iVar4 + 0x4c) + 0x48);
  dVar15 = (double)uStack_78;
  dVar14 = (double)(__int64)*(int *)(*(int *)(iVar4 + 0x4c) + 0x4c);
  if ((param_2 & 0xffffffff) == 0) {
    fVar1 = (float)(dVar15 * (double)lbl_8218E8E8);
    dVar13 = (double)fVar1;
    cStack_70 = '\x01' - (lbl_831D1088 == 0);
    uStack_78 = CONCAT44(fVar1,(float)(dVar14 * (double)lbl_8218E8E8));
    uStack_6c = lbl_831D1084;
    uStack_68 = lbl_831D108C;
    uStack_64 = lbl_831D1090;
    uStack_60 = lbl_82193E50;
    dVar14 = (double)fn_82809CB0(dVar13);
    dVar15 = (double)fn_82809CB0((double)(float)(dVar15 - dVar13));
    puVar6 = (unsigned int *)fn_8265C9E0(0x34);
    uVar2 = lbl_831D1074;
    uVar7 = lbl_831D1070;
    if (puVar6 == (unsigned int *)0x0) {
LAB_82271fe0:
      puVar6 = (unsigned int *)0x0;
    }
    else {
      puVar9 = (unsigned int *)((int)&uStack_78 + 4);
      puVar6[6] = 0xffffffff;
      lVar11 = 5;
      puVar8 = puVar6;
      do {
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
        *puVar8 = *puVar9;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      puVar6[0xb] = uVar2;
      puVar6[10] = uVar7;
      fVar1 = ltcg_pool_0_0f;
      *puVar6 = &lbl_821A7E4C;
      *(__int64 *)(puVar6 + 7) = uStack_78;
      puVar6[0xc] = fVar1;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)(((float)(dVar14 - dVar15) < fVar1) << 2) |
                    (unsigned int)(NAN((float)(dVar14 - dVar15)) || NAN(fVar1)) << 2)) < 0.0) {
        dVar14 = dVar15;
      }
      puVar6[9] = (float)(dVar14 / dVar12);
    }
LAB_82271fe4:
    *(unsigned int **)(iVar4 + 0x50) = puVar6;
  }
  else if ((param_2 & 0xffffffff) == 1) {
    dVar13 = (double)lbl_831D1058;
    cStack_70 = '\x01' - (lbl_831D1064 == 0);
    fStack_80 = lbl_831D1050;
    fStack_7c = lbl_831D1054;
    uStack_78 = CONCAT44(lbl_831D1058,lbl_831D105C);
    uStack_6c = lbl_831D1060;
    uStack_68 = lbl_831D1068;
    uStack_64 = lbl_831D106C;
    uStack_60 = lbl_82193E50;
    dVar14 = (double)fn_82809CB0();
    dVar15 = (double)fn_82809CB0((double)(float)(dVar15 - dVar13));
    uVar10 = fn_8265C9E0(0x44);
    if ((uVar10 & 0xffffffff) == 0) {
      uVar7 = 0;
    }
    else {
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)(((float)(dVar14 - dVar15) < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN((float)(dVar14 - dVar15)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        dVar14 = dVar15;
      }
      uVar7 = fn_8226A7C0((double)(float)(dVar14 / dVar12),(double)lbl_831D1044,
                           (double)lbl_831D1048,uVar10,&uStack_78,&fStack_80);
    }
    *(unsigned int *)(iVar4 + 0x50) = uVar7;
  }
  else if ((param_2 & 0xffffffff) < 3) {
    fStack_80 = (float)(dVar15 * (double)lbl_8218E8E8);
    dVar13 = (double)fStack_80;
    fStack_7c = (float)(dVar14 * (double)lbl_8218E8E8);
    cStack_70 = '\x01' - (lbl_831D1088 == 0);
    uStack_6c = lbl_831D1084;
    uStack_68 = lbl_831D108C;
    uStack_64 = lbl_831D1090;
    uStack_60 = lbl_82193E50;
    dVar14 = (double)fn_82809CB0(dVar13);
    dVar15 = (double)fn_82809CB0((double)(float)(dVar15 - dVar13));
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((float)(dVar14 - dVar15) < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN((float)(dVar14 - dVar15)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar14 = dVar15;
    }
    puVar6 = (unsigned int *)fn_8265C9E0(0x34);
    uVar2 = lbl_831D1074;
    uVar7 = lbl_831D1070;
    if (puVar6 == (unsigned int *)0x0) goto LAB_82271fe0;
    puVar9 = (unsigned int *)((int)&uStack_78 + 4);
    puVar6[6] = 0xffffffff;
    lVar11 = 5;
    puVar8 = puVar6;
    do {
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar9;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    puVar6[9] = (float)(dVar14 / dVar12);
    puVar6[10] = uVar7;
    puVar6[0xb] = uVar2;
    puVar6[0xc] = (float)dVar14;
    *puVar6 = &lbl_821A7E60;
    *(unsigned __int64 *)(puVar6 + 7) = CONCAT44(fStack_80,fStack_7c);
    goto LAB_82271fe4;
  }
  fn_8226C610(*(unsigned int *)(iVar4 + 0x4c),*(unsigned int *)(iVar4 + 0x50));
  uVar3 = 1;
LAB_82271ff8:
  fn_82F6A594(uVar3);
  return;
}

