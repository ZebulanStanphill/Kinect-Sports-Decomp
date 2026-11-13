#define NAN(x) ((x) != (x))
extern int fn_8228E658();
extern int fn_822ABA88();
extern int fn_82359698();
extern int fn_82373530();
extern int fn_824C8210();
extern int fn_824C97F0();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8238E6E0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int *piVar10;
  
  iVar2 = *(int *)(param_2 + 8);
  piVar10 = *(int **)(**(int **)(iVar2 + 8) + *(int *)(iVar2 + 0x1e4) * 4);
  uVar8 = fn_82373530(iVar2);
  iVar9 = fn_822ABA88(*(unsigned int *)(piVar10[4] * 4 + *piVar10),uVar8);
  fn_824C8210(*(unsigned int *)(param_2 + 0xc));
  if (*(int *)(iVar9 + 0x2f8) != 0) {
    piVar10 = *(int **)(iVar2 + 0x184);
    if (piVar10 != *(int **)(iVar2 + 0x188)) {
      do {
        if (*(int *)(*piVar10 + 0xd4) == 0) {
          fn_8228E658(iVar2 + 0x1b0);
          break;
        }
        piVar10 = piVar10 + 2;
      } while (piVar10 != *(int **)(iVar2 + 0x188));
    }
    *(unsigned int *)(iVar2 + 0x1f0) = *(unsigned int *)(iVar2 + 0x1e4);
    fn_82359698(*(unsigned int *)(param_2 + 8),3);
  }
  fVar7 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x14) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) - param_1);
    fVar5 = -fVar1;
    fVar6 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar6 = fVar1;
    }
    *(float *)(param_2 + 0x14) = fVar6;
    if (fVar6 == fVar7) {
      puVar3 = *(unsigned int **)(*(int *)(param_2 + 8) + 0xa8);
      piVar4 = (int *)puVar3[1];
      for (piVar10 = (int *)*puVar3; piVar10 != piVar4; piVar10 = piVar10 + 2) {
        fn_824C97F0(*(unsigned int *)(*piVar10 + 0x28),0xffffffff821b4728);
      }
    }
  }
  return;
}

