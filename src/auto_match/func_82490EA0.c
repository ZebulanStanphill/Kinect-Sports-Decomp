extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82490EA0(double param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float *pfVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  double dVar6;
  
  puVar2 = *(unsigned int **)(param_2 + 8);
  puVar1 = *(unsigned int **)(param_2 + 4);
  for (puVar5 = puVar1; (puVar5 != puVar2 && ((unsigned __int64)*puVar5 != (param_3 & 0xffffffff)));
      puVar5 = puVar5 + 2) {
  }
  if (puVar5 != puVar2) {
    dVar6 = (double)ltcg_pool_0_0f;
    if (param_1 <= dVar6) {
      if (param_1 < dVar6) {
        puVar4 = puVar5;
        if (puVar5 != puVar1) {
          while ((puVar5 = puVar4, param_1 < dVar6 && (puVar5 = puVar4 + -2, puVar5 != puVar1))) {
            param_1 = (double)(float)((double)(float)puVar4[-1] + param_1);
            puVar4 = puVar5;
          }
        }
        if (puVar5 != puVar2) {
          param_3 = (unsigned __int64)*puVar5;
        }
      }
    }
    else {
      do {
        if (param_1 <= dVar6) {
          return param_3;
        }
        pfVar3 = (float *)(puVar5 + 1);
        param_3 = (unsigned __int64)*puVar5;
        puVar5 = puVar5 + 2;
        param_1 = (double)(float)(param_1 - (double)*pfVar3);
      } while (puVar5 != puVar2);
    }
    return param_3;
  }
  return 0xffffffffffffffff;
}

