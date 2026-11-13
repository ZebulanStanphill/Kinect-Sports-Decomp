extern int fn_822BD338();
extern int fn_822C72E0();
extern unsigned int ltcg_pool_0_0f;


void fn_82334868(int param_1)

{
  float fVar1;
  int iVar2;
  char cVar3;
  unsigned int uVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x230);
  if ((*(int *)(iVar2 + 0x1a0) == 0) && (*(int *)(iVar2 + 0x1e0) == 0)) {
    if ((*(int *)(param_1 + 0xc) == 0) ||
       (*(float *)(**(int **)(iVar2 + 0x238) + 0xa9c) < *(float *)(param_1 + 0x228))) {
      uVar4 = *(unsigned int *)(param_1 + 0x184);
      *(unsigned int *)(iVar2 + 0x288) = 1;
      *(unsigned int *)(iVar2 + 0x28c) = (unsigned int)LZCOUNT(uVar4) >> 5;
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    fVar1 = *(float *)(*(int *)(iVar2 + 0x23c) + 0x924);
    dVar5 = (double)ltcg_pool_0_0f;
    if (((*(int *)(iVar2 + 0x2a0) == 0) && (*(int *)(*(int *)(iVar2 + 0x23c) + 0x92c) == 0)) ||
       ((double)fVar1 <= dVar5)) {
      fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 8) + 0x20),param_1 + 0x134);
      uVar4 = 7;
    }
    else {
      *(float *)(param_1 + 0x238) = fVar1;
      uVar4 = 6;
    }
    *(float *)(param_1 + 0x22c) = (float)dVar5;
    *(unsigned int *)(param_1 + 0x224) = uVar4;
    *(float *)(param_1 + 0x228) = (float)dVar5;
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    cVar3 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0x114) + 0x20) + 4,
                              0xffffffff821b09b4);
    if ((cVar3 != '\0') ||
       (cVar3 = fn_822BD338((unsigned __int64)
                                  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x230) + 0x114) + 0x20) + 4,
                                  0xffffffff821b09cc), cVar3 != '\0')) {
      *(unsigned int *)(param_1 + 0x224) = 4;
      fVar1 = ltcg_pool_0_0f;
      *(float *)(param_1 + 0x228) = ltcg_pool_0_0f;
      *(float *)(param_1 + 0x22c) = fVar1;
    }
  }
  return;
}

