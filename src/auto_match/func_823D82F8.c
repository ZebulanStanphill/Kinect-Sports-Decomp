#define NAN(x) ((x) != (x))
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int fStack_80;
extern int fn_823D84A0();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern float lbl_82195800;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D19E0;
extern unsigned int lbl_831D19E4;
extern unsigned int lbl_831D19E8;
extern unsigned int lbl_831D19EC;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_68;
extern unsigned int uStack_7b;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_98;


void fn_823D82F8(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,float *param_6)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  int in_r0;
  unsigned __int64 *puVar5;
  unsigned __int64 *puVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uStack_98;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  float fStack_80;
  unsigned char uStack_7c;
  unsigned char uStack_7b;
  unsigned char auStack_70 [8];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [96];
  
  fStack_80 = param_6[2];
  if (fStack_80 == 0.0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fStack_80 = 2.8026e-45;
    fVar1 = (lbl_82193E50 - ABS(param_6[1])) * lbl_82195800 * *param_6 *
            ((lbl_831D19E4 - lbl_831D19E0) *
             ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + lbl_831D19E0);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar1 = ltcg_pool_0_0f;
    }
    fVar4 = lbl_821CA460;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 - lbl_821CA460 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1 - lbl_821CA460) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    if (fVar4 <= lbl_831D19E8) {
      if (fVar4 < lbl_831D19EC) {
        fStack_80 = 4.2039e-45;
      }
    }
    else {
      fStack_80 = 1.4013e-45;
    }
  }
  uStack_7c = *(unsigned char *)(param_6 + 0x12);
  uStack_7b = *(unsigned char *)((int)param_6 + 0x49);
  puVar5 = &uStack_68;
  fVar1 = param_6[3];
  puVar2 = (unsigned int *)((unsigned int)(param_6 + 0xc) & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  lVar7 = 6;
  puVar6 = &uStack_98;
  do {
    puVar6 = puVar6 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar6;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  if (fVar1 != 0.0) {
    uStack_90 = param_2;
    uStack_8c = param_3;
    uStack_88 = param_4;
    uStack_84 = param_5;
    fn_823D84A0((double)lbl_82005748,(double)param_6[0x10],param_1,auStack_60,fVar1,
                      *(unsigned char *)(param_6 + 6),0x20,param_6,param_6[0x11],2);
  }
  return;
}

