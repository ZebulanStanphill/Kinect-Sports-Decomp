#define NAN(x) ((x) != (x))
extern int fn_8252AFE0();
extern int fn_8253E960();
extern int fn_82D85148();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8253FB70(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_1 + 0x7c0);
  piVar6 = (int *)(param_1 + 0x7c0);
  if (iVar5 != 0) {
    if ((*(int *)(param_1 + 0x828) != 0) && (*(int *)(param_1 + 0x82c) == 0)) {
      *(unsigned int *)(param_1 + 0x82c) = 1;
      *(unsigned int *)(param_1 + 0x830) = *(unsigned int *)(iVar5 + 0x2c);
      *(unsigned int *)(iVar5 + 0x2c) = 8;
      fn_82D85148(*(unsigned int *)(*piVar6 + 8),*piVar6,0,1);
    }
    if ((*(int *)(param_1 + 0x828) == 0) && (*(int *)(param_1 + 0x82c) != 0)) {
      *(unsigned int *)(param_1 + 0x82c) = 0;
      *(unsigned int *)(*piVar6 + 0x2c) = *(unsigned int *)(param_1 + 0x830);
      fn_82D85148(*(unsigned int *)(*piVar6 + 8),*piVar6,0,1);
    }
    fVar4 = ltcg_pool_0_0f;
    if ((*(int *)(param_1 + 0x82c) != 0) && (*(int *)(param_1 + 0x838) != 0)) {
      fVar1 = *(float *)(param_1 + 0x838) - *(float *)(param_1 + 0xb3c);
      fVar2 = -fVar1;
      fVar3 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar3 = fVar1;
      }
      *(float *)(param_1 + 0x838) = fVar3;
      if (fVar3 == fVar4) {
        iVar5 = fn_8253E960(param_1,*piVar6,*(unsigned int *)(param_1 + 0x830));
        if (iVar5 == 0) {
          *(unsigned int *)(param_1 + 0x838) = lbl_821CA460;
        }
        else {
          *(unsigned int *)(*piVar6 + 0x2c) = *(unsigned int *)(param_1 + 0x830);
          fn_82D85148(*(unsigned int *)(*piVar6 + 8),*piVar6,0,1);
          fn_8252AFE0((double)*(float *)(param_1 + 0x834),param_1);
          *(unsigned int *)(param_1 + 0x82c) = 0;
          *(unsigned int *)(param_1 + 0x828) = 0;
        }
      }
    }
  }
  return;
}

