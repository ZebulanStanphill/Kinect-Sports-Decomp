#define NAN(x) ((x) != (x))
extern int fn_82399CB8();
extern int fn_8239C118();
extern int fn_82508078();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8239BBC0(int param_1)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar4 = fn_82399CB8();
  piVar2 = *(int **)(((unsigned int)LZCOUNT(iVar4) >> 3 & 4) + **(int **)(param_1 + 8));
  piVar3 = *(int **)(iVar4 * 4 + **(int **)(param_1 + 8));
  dVar8 = (double)(__int64)(int)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  dVar9 = (double)(__int64)(int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
  fVar1 = (float)(dVar8 - dVar9);
  dVar7 = dVar8;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar7 = dVar9;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar9 = dVar8;
  }
  if (*(int *)(*(int *)(param_1 + 0x2e0) + 0x60) == 0) {
    if ((int)(dVar7 - dVar9) < 8) {
      if (*(int *)(param_1 + 0x178) != 0) {
        return;
      }
      fn_82508078(*(unsigned int *)(param_1 + 0xa4),0xffffffff821b4fcc,0);
      return;
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lVar5 = (unsigned __int64)(-1 < (int)(-lbl_83265A28 & ~lbl_83265A28)) + 0x2c;
  }
  else {
    uVar6 = (__int64)(int)lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    lbl_83265A28 = (unsigned int)uVar6;
    lVar5 = (-(unsigned __int64)((-uVar6 & ~uVar6 & 0xffffffff) >> 0x1f != 0) & 0xfffffffe) + 0x2b;
  }
  fn_8239C118(param_1,lVar5);
  return;
}

