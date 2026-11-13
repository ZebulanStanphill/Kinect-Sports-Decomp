typedef unsigned char bool;
#define true 1
#define false 0
#define NAN(x) ((x) != (x))
extern unsigned int fStack_30;
extern int fn_8262EA08();
extern int fn_8262EB18();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_82627BB0(int param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double extraout_f1;
  double dVar10;
  float fStack_30;
  
  dVar9 = (double)ltcg_pool_0_0f;
  if (((double)*(float *)(param_1 + 0x268) != dVar9) ||
     (bVar3 = false, (double)*(float *)(param_1 + 0x26c) != dVar9)) {
    bVar3 = true;
  }
  if (1 < *(unsigned int *)(param_1 + 0x264)) {
    pfVar4 = (float *)fn_8262EA08(dVar9,(double)*(unsigned int *)(param_1 + 0x264),param_2 + 0x170);
    iVar6 = 0x3c6ef35f;
    iVar5 = 0x19660d;
    iVar7 = -0x7cda0000;
    dVar9 = (double)lbl_821CA460;
    if ((*(unsigned char *)(param_1 + 0x270) & 1) != 0) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_30 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      fVar8 = (float)((double)fStack_30 - dVar9) * (float)(*(int *)(param_1 + 0x264) + 1);
      dVar10 = (double)(fVar8 - *pfVar4);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar10 < extraout_f1) << 2) |
                    (unsigned int)(NAN(dVar10) || NAN(extraout_f1)) << 2)) < 0.0) {
        fVar8 = *pfVar4;
      }
      fVar1 = pfVar4[1];
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar10 < extraout_f1) << 2) |
                    (unsigned int)(NAN(dVar10) || NAN(extraout_f1)) << 2)) < 0.0) {
        fVar1 = fVar8;
      }
      pfVar4[3] = fVar1;
    }
    if ((bVar3) && ((*(unsigned char *)(param_1 + 0x270) & 0x10) == 0)) {
      *(unsigned short *)(param_2 + 0xa0) = *(unsigned short *)(param_2 + 0xa0) | 4;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fStack_30 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000);
      pfVar4 = (float *)fn_8262EB18((double)((*(float *)(param_1 + 0x26c) -
                                                 *(float *)(param_1 + 0x268)) *
                                                 (float)((double)fStack_30 - dVar9) +
                                                *(float *)(param_1 + 0x268)));
      fVar8 = lbl_8218E8E8;
      if ((*(unsigned char *)(param_1 + 0x270) & 8) == 0) {
        fVar8 = (float)((*(unsigned char *)(param_1 + 0x270) & 4) << 1 | 1);
      }
      else {
        uVar2 = *(int *)(iVar7 + 0x5a28) * iVar5 + iVar6;
        *(unsigned int *)(iVar7 + 0x5a28) = uVar2;
        if ((float)((double)(float)(uVar2 & 0x7fffff | 0x3f800000) - dVar9) <= fVar8) {
          fVar8 = 8.40779e-45;
        }
        else {
          fVar8 = 7.00649e-45;
        }
      }
      if (*pfVar4 != pfVar4[1]) {
        pfVar4[4] = fVar8;
      }
    }
  }
  return;
}

