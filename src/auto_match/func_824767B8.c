#define NAN(x) ((x) != (x))
extern unsigned int *auStack_60;
extern int fn_82292AE8();
extern int fn_8254F110();
extern int fn_82864898();
extern int fn_82864988();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831d3ae8;


void fn_824767B8(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar6;
  unsigned __int64 uVar5;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned char auStack_60 [96];
  
  fVar2 = *(float *)(param_2 + 0x114);
  if (*(float *)(param_2 + 0x110) != fVar2) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x118) - param_1);
    *(float *)(param_2 + 0x118) = fVar1;
    fVar4 = lbl_821CA460;
    dVar11 = (double)ltcg_pool_0_0f;
    if ((double)fVar1 < dVar11) {
      fVar1 = lbl_82192734;
      if (fVar2 < *(float *)(param_2 + 0x110)) {
        fVar1 = lbl_821CA460;
      }
      dVar9 = (double)(fVar2 + fVar1);
      *(float *)(param_2 + 0x114) = fVar2 + fVar1;
      dVar7 = (double)lbl_82005748;
      dVar10 = (double)((float)(dVar7 / (double)*(float *)(param_2 + 0x7c)) + fVar4);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar9 < dVar11) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar11)) << 2))
          < 0.0) {
        dVar9 = dVar11;
      }
      dVar8 = (double)(float)(dVar9 - dVar10);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar8 < dVar11) << 2) | (unsigned int)(NAN(dVar8) || NAN(dVar11)) << 2))
          < 0.0) {
        dVar10 = dVar9;
      }
      *(float *)(param_2 + 0x114) = (float)dVar10;
      fVar2 = (float)(dVar10 * (double)*(float *)(param_2 + 0x7c));
      dVar9 = (double)fVar2;
      *(float *)(param_2 + 0x11c) = fVar2;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar9 < dVar11) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar11)) << 2))
          < 0.0) {
        dVar9 = dVar11;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)(((double)(float)(dVar9 - dVar7) < dVar11) << 2) |
                    (unsigned int)(NAN((double)(float)(dVar9 - dVar7)) || NAN(dVar11)) << 2)) < 0.0) {
        dVar7 = dVar9;
      }
      *(float *)(param_2 + 0x11c) = (float)dVar7;
      iVar6 = fn_82292AE8();
      if (*(int **)(iVar6 + 0x24) != (int *)0x0) {
        iVar3 = **(int **)(iVar6 + 0x24);
        uVar5 = fn_82864988(auStack_60,0xffffffff821bcf1c);
        (**(int (***)())(iVar3 + 0x10))(dVar7,*(unsigned int *)(iVar6 + 0x24),uVar5);
        fn_82864898(auStack_60);
      }
      fn_8254F110((double)*(float *)(param_2 + 0x80),(double)*(float *)(param_2 + 0x80),
                        *(unsigned int *)(param_2 + 0x18),(int)*(float *)(param_2 + 0x11c));
      if (lbl_821917D4 < *(float *)(param_2 + 0x114)) {
        *(unsigned int *)(param_2 + 0x118) = uRam831d3ae8;
      }
      else {
        *(float *)(param_2 + 0x118) = (float)dVar11;
      }
    }
  }
  return;
}

