#define NAN(x) ((x) != (x))
extern int fn_825529B0();
extern int fn_82552AD8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_82191144;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F894;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82432868(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_1 + 4) + 0x7c) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar2 + 0x84) - lbl_8327F894;
    *(float *)(iVar2 + 0x84) = fVar1;
    if (fVar1 < fVar4) {
      *(float *)(iVar2 + 0x84) = fVar4;
      *(unsigned int *)(*(int *)(param_1 + 4) + 0x7c) = 0;
      *(unsigned int *)(*(int *)(param_1 + 4) + 0x80) = 1;
      *(unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x1c8) = 1;
      *(unsigned int *)(*(int *)(param_1 + 4) + 4) =
           *(unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0x1b8);
    }
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x80) != 0) {
    iVar2 = *(int *)(param_1 + 4);
    fVar1 = lbl_82193AF0;
    if (*(float *)(iVar2 + 4) < *(float *)(iVar2 + 8)) {
      fVar1 = lbl_82191144;
    }
    *(float *)(iVar2 + 4) =
         (*(float *)(iVar2 + 8) - *(float *)(iVar2 + 4)) * fVar1 + *(float *)(iVar2 + 4);
    fVar1 = *(float *)(*(int *)(param_1 + 4) + 4);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < fVar4) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar4)) << 2)) <
        0.0) {
      fVar1 = fVar4;
    }
    fVar3 = lbl_82005748;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 - lbl_82005748 < fVar4) << 2) |
                  (unsigned int)(NAN(fVar1 - lbl_82005748) || NAN(fVar4)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(*(int *)(param_1 + 4) + 4) = fVar3;
    iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 0x1c8) != 0)) {
      *(unsigned int *)(iVar2 + 0x1b8) = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
      iVar5 = fn_825529B0(iVar2 + 0x1a0);
      if (iVar5 != 0) {
        fn_82552AD8((double)*(float *)(iVar2 + 0x1b8),iVar2 + 0x1a0,0xffffffff8327fb78);
      }
    }
    return;
  }
  return;
}

