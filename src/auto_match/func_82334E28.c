extern int fn_822BD338();
extern int fn_822C72E0();
extern int fn_822C8C60();
extern int fn_82334BD0();
extern int fn_823352D8();
extern int fn_82335838();
extern unsigned int ltcg_pool_0_0f;


void fn_82334E28(double param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  double dVar8;
  
  iVar6 = *(int *)(param_2 + 0x230);
  piVar1 = *(int **)(iVar6 + 0x238);
  if (*(int *)(param_2 + 0x214) == 0) {
    if (((*(int *)(param_2 + 0x218) == 0) &&
        (dVar8 = (double)fn_82334BD0(piVar1[0xc],piVar1), (double)ltcg_pool_0_0f < dVar8)) &&
       (dVar8 < (double)*(float *)(*piVar1 + 0xac0))) {
      if ((double)(float)((double)*(float *)(*piVar1 + 0xac0) - param_1) < dVar8) {
        fn_822C72E0(*(unsigned int *)(*(int *)(iVar6 + 0x114) + 0x20),0xffffffff821b0a44);
      }
      *(unsigned int *)(param_2 + 0x218) = 1;
    }
    if (piVar1[0x9f] == 3) {
      *(unsigned int *)(param_2 + 0x214) = 1;
      *(unsigned int *)(param_2 + 0x218) = 0;
    }
  }
  else {
    cVar4 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(iVar6 + 0x114) + 0x20) + 4,
                              0xffffffff821aca8c);
    if (cVar4 != '\0') {
      if (((*(int *)(param_2 + 0xc) == 0) && (piVar1[0xa1] == 0)) &&
         (*(int *)(*(int *)(param_2 + 0x230) + 0x284) == 0)) {
        fn_82335838(param_2,piVar1);
        fn_822C8C60(*(unsigned int *)(*(int *)(param_2 + 0x230) + 0x114),1,0);
        iVar6 = *(int *)(param_2 + 0x184);
        iVar2 = *(int *)(param_2 + 0x230);
        *(unsigned int *)(iVar2 + 0x288) = 1;
        *(unsigned int *)(iVar2 + 0x28c) = (unsigned int)(iVar6 == 0);
        if (*(int *)(param_2 + 0x184) == 0) {
          uVar5 = 0xffffffff821b09cc;
        }
        else {
          uVar5 = 0xffffffff821b09b4;
        }
        fn_822C72E0(*(unsigned int *)(*(int *)(param_2 + 8) + 0x20),uVar5);
        uVar7 = 3;
      }
      else {
        if (*(int *)(param_2 + 0xc) == 1) {
          fn_823352D8(param_2,piVar1[0xa4],0);
        }
        uVar7 = 1;
      }
      *(unsigned int *)(param_2 + 0x224) = uVar7;
      fVar3 = ltcg_pool_0_0f;
      *(float *)(param_2 + 0x22c) = ltcg_pool_0_0f;
      *(float *)(param_2 + 0x228) = fVar3;
    }
  }
  return;
}

