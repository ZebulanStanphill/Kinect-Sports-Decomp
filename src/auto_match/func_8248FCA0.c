extern unsigned int ltcg_pool_0_0f;


double fn_8248FCA0(int param_1,int param_2)

{
  unsigned int *puVar1;
  float fVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  if (*(unsigned int *)(param_1 + 0x38) <= *(unsigned int *)(param_2 + 0x14)) {
    return (double)ltcg_pool_0_0f;
  }
  puVar4 = *(unsigned int **)(param_2 + 4);
  puVar1 = *(unsigned int **)(param_2 + 8);
  fVar2 = ltcg_pool_0_0f;
  puVar3 = puVar4;
  if (puVar4 != puVar1) {
    do {
      if (*puVar3 == *(unsigned int *)(param_2 + 0x14)) break;
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar1);
    for (; (puVar4 != puVar1 && (*puVar4 != *(unsigned int *)(param_1 + 0x38))); puVar4 = puVar4 + 2) {
    }
  }
  for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
    fVar2 = (float)((double)(float)puVar3[1] + (double)fVar2);
  }
  return (double)fVar2;
}

