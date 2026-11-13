typedef unsigned char bool;
#define false 0
#define NAN(x) ((x) != (x))
extern float fRam831d3bd4;
extern float fRam831d3bd8;
extern float fRam831d3bdc;
extern float fRam831d3be0;
extern float fRam831d3be4;
extern float fRam831d3be8;
extern float fRam831d3bec;
extern float fRam831d3bf0;
extern float fRam831d3bf4;
extern int fn_82477F00();
extern int fn_82552720();
extern int fn_825529B0();
extern int fn_82552B50();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82477C80(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  
  fn_82477F00((double)fRam831d3bd4,(double)fRam831d3bd8,(double)fRam831d3bdc,
                    (double)fRam831d3be0);
  if (*(char *)(param_2 + 0x150) == '\0') {
    fVar2 = (float)((double)*(float *)(param_2 + 0x158) - param_1);
    *(float *)(param_2 + 0x158) = fVar2;
    fVar1 = fRam831d3bf4;
    fVar4 = ltcg_pool_0_0f;
    bVar8 = NAN(ltcg_pool_0_0f);
    bVar9 = fVar2 < ltcg_pool_0_0f;
    *(float *)(param_2 + 0x148) = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 + ((unsigned int)(unsigned char)(bVar9 << 2) | (unsigned int)(NAN(fVar2) || bVar8) << 2)) <
        0.0) {
      fVar2 = fVar4;
    }
    fVar3 = fVar2 - fVar1;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < fVar4) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar1 = fVar2;
    }
    *(float *)(param_2 + 0x158) = fVar1;
    if (fRam831d3be4 < fVar4) {
      *(float *)(param_2 + 0x148) = fVar4;
      *(float *)(param_2 + 0x14c) = fVar4;
      *(unsigned char *)(param_2 + 0x150) = 1;
      *(unsigned int *)(param_2 + 0xec) = *(unsigned int *)(param_2 + 0xec) | 0x10;
    }
  }
  else {
    iVar7 = param_2 + 0x164;
    if (*(float *)(param_2 + 0x14c) <= fRam831d3bec) {
      iVar5 = fn_825529B0(iVar7);
      dVar10 = (double)ltcg_pool_0_0f;
      if ((iVar5 == 0) && ((double)*(float *)(param_2 + 0x14c) <= dVar10)) {
        piVar6 = (int *)(param_2 + 0xd4);
        if (piVar6 == (int *)0x0) {
          bVar8 = false;
        }
        else {
          bVar8 = *piVar6 != 0;
        }
        if (bVar8) {
          fn_82552720((unsigned __int64)*(unsigned int *)(param_2 + 0x15c) + 0x84c,iVar7,piVar6,0,4,0,0);
        }
      }
      fVar2 = (float)((double)*(float *)(param_2 + 0x14c) + param_1);
      fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x148));
      *(float *)(param_2 + 0x14c) = fVar2;
      *(float *)(param_2 + 0x148) = fVar1;
      if (fRam831d3bec < fVar2) {
        iVar5 = fn_825529B0(iVar7);
        if (iVar5 != 0) {
          fn_82552B50(iVar7,1);
        }
        *(float *)(param_2 + 0x148) = (float)dVar10;
        goto LAB_82477ed8;
      }
      bVar8 = fRam831d3be8 < fVar1;
    }
    else {
      iVar5 = fn_825529B0(iVar7);
      dVar10 = (double)ltcg_pool_0_0f;
      if ((iVar5 == 0) && ((double)*(float *)(param_2 + 0x148) <= dVar10)) {
        piVar6 = (int *)(param_2 + 0xd8);
        if (piVar6 == (int *)0x0) {
          bVar8 = false;
        }
        else {
          bVar8 = *piVar6 != 0;
        }
        if (bVar8) {
          fn_82552720((unsigned __int64)*(unsigned int *)(param_2 + 0x15c) + 0x84c,iVar7,piVar6,0,4,0,0);
        }
      }
      fVar2 = (float)(param_1 + (double)*(float *)(param_2 + 0x148));
      *(float *)(param_2 + 0x148) = fVar2;
      bVar8 = fRam831d3bf0 < fVar2;
    }
    if (bVar8) {
      iVar5 = fn_825529B0(iVar7);
      if (iVar5 != 0) {
        fn_82552B50(iVar7,1);
      }
      *(float *)(param_2 + 0x148) = (float)dVar10;
      *(float *)(param_2 + 0x158) = fRam831d3bf4;
      *(unsigned char *)(param_2 + 0x150) = 0;
    }
  }
LAB_82477ed8:
  if (*(char *)(param_2 + 0x150) != '\0') {
    *(unsigned int *)(param_2 + 0xf0) = *(unsigned int *)(param_2 + 0xf0) | 0x10;
  }
  return;
}

