extern int fn_8229A000();
extern int fn_822BD338();
extern int fn_823353B8();
extern int fn_823354E0();
extern unsigned int ltcg_pool_0_0f;


void fn_82334A70(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 0x230);
  piVar2 = *(int **)(iVar1 + 0x238);
  if (*(int *)(param_1 + 0x18c) == 0) {
    if ((*(int *)(*(int *)(iVar1 + 0x23c) + 0x92c) != 0) && (*(int *)(param_1 + 0xc) == 0)) {
      iVar1 = *piVar2;
      fVar3 = *(float *)(param_1 + 0x180) - *(float *)(iVar1 + 0xad0);
      if ((*(float *)(param_1 + 0x22c) <= fVar3) &&
         ((fVar3 < *(float *)(param_1 + 0x228) && (piVar2 == *(int **)(iVar1 + 0x2b20))))) {
        fn_8229A000(*(unsigned int *)(*(int *)(iVar1 + 0xd4) + 0x24));
      }
    }
    if (*(float *)(param_1 + 0x228) <= *(float *)(param_1 + 0x180)) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x230);
    if ((*(int *)(*(int *)(iVar1 + 0x23c) + 0x92c) != 0) && (*(int *)(param_1 + 0xc) == 0)) {
      fn_823354E0(param_1,*(unsigned int *)(iVar1 + 0x238));
      return;
    }
    *(unsigned int *)(iVar1 + 0x290) = 1;
    *(unsigned int *)(*(int *)(param_1 + 0x230) + 0x294) = 1;
    fn_823353B8(param_1,piVar2);
    *(unsigned int *)(param_1 + 0x214) = 0;
    *(unsigned int *)(param_1 + 0x224) = 9;
  }
  else {
    cVar4 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 0x114) + 0x20) + 4,
                              param_1 + 0x134);
    if (cVar4 != '\0') {
      return;
    }
    *(unsigned int *)(param_1 + 0x210) = 0;
    uVar5 = 8;
    if (*(int *)(param_1 + 0xc) != 1) {
      uVar5 = 1;
    }
    *(unsigned int *)(param_1 + 0x224) = uVar5;
  }
  uVar5 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x228) = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x22c) = uVar5;
  return;
}

