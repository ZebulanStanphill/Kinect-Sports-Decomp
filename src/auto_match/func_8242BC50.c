#define NAN(x) ((x) != (x))
extern int fn_822ABA88();
extern int fn_823588D0();
extern int fn_82432868();
extern int fn_8243A400();
extern int fn_82441EF0();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8242BC50(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  fn_823588D0();
  uVar6 = fn_8243A400(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0x174) + 0x1c);
  fVar5 = ltcg_pool_0_0f;
  if ((int)uVar6 == 0) {
    fVar1 = (float)((double)*(float *)(*(int *)(param_2 + 0x174) + 0xcc) - param_1);
    fVar3 = -fVar1;
    fVar4 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(*(int *)(param_2 + 0x174) + 0xcc) = fVar4;
    iVar7 = *(int *)(param_2 + 0x174);
    if (fVar5 < *(float *)(iVar7 + 0xcc)) {
      iVar8 = 0;
      if (0 < *(int *)(iVar7 + 0xbc)) {
        iVar9 = 0;
        do {
          piVar2 = *(int **)(**(int **)(param_2 + 8) + iVar9);
          iVar7 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
          if (*(int **)(iVar7 + 0x24) != (int *)0x0) {
            (**(int (***)())(**(int **)(iVar7 + 0x24) + 0x24))();
          }
          iVar7 = *(int *)(param_2 + 0x174);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar8 < *(int *)(iVar7 + 0xbc));
      }
    }
    fn_82432868(iVar7 + 0x60);
    fn_82441EF0(param_1,(unsigned __int64)*(unsigned int *)(param_2 + 0x174) + 0x10,param_2);
    uVar6 = 0;
  }
  return uVar6;
}

