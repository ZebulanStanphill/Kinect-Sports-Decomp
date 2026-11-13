extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_50;


void fn_8229D068(float *param_1,int param_2,unsigned int param_3)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  unsigned __int64 uStack_50;
  unsigned char auStack_40 [8];
  double dStack_38;
  unsigned char auStack_30 [8];
  double dStack_28;
  unsigned char auStack_20 [32];
  
  if (param_3 < 2) {
    fVar1 = *param_1;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    fVar1 = param_1[1];
  }
  if (fVar1 < lbl_821CA460) {
    return;
  }
  if (lbl_821CA460 < fVar1) {
    return;
  }
  puVar2 = (unsigned int *)((int)&uStack_50 + 4);
  lVar4 = 2;
  do {
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
    *puVar2 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  fn_82273CD8(auStack_40,3);
  uStack_50 = (__int64)param_2;
  dStack_38 = (double)uStack_50;
  fn_82273CD8(auStack_30,3);
  fVar1 = ltcg_pool_0_0f;
  uStack_50 = (__int64)(int)param_3;
  dStack_28 = (double)uStack_50;
  if (param_3 == 0) {
    *param_1 = ltcg_pool_0_0f;
  }
  else {
    if (param_3 == 1) {
      *param_1 = ltcg_pool_0_0f;
      goto LAB_8229d150;
    }
    if (2 < param_3) goto LAB_8229d150;
  }
  param_1[1] = fVar1;
LAB_8229d150:
  fn_82672C20(param_1[2],0xffffffff821ab138,auStack_40,2);
  puVar3 = auStack_20;
  lVar4 = 1;
  do {
    puVar3 = puVar3 + -0x10;
    fn_82273C88(puVar3);
    lVar4 = lVar4 + -1;
  } while (-1 < lVar4);
  return;
}

