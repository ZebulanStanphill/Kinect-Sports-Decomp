extern unsigned int *auStack_20;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_24;


void fn_8240D030(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int uStack_24;
  unsigned int auStack_20 [8];
  
  *(unsigned int *)(param_1 + 4) = param_2;
  auStack_20[2] = ltcg_pool_0_0f;
  auStack_20[0] = 0;
  lVar3 = 5;
  puVar1 = (unsigned int *)(param_1 + 4);
  auStack_20[1] = 0;
  auStack_20[3] = 0;
  auStack_20[4] = 4;
  puVar2 = &uStack_24;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auStack_20[0] = 0;
  auStack_20[1] = 0;
  auStack_20[3] = 0;
  puVar1 = (unsigned int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x1c) = param_3;
  auStack_20[4] = 4;
  puVar2 = &uStack_24;
  lVar3 = 5;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

