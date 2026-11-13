#define true 1
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8248C060(double param_1,int param_2,unsigned int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 8) == 0)) {
    for (iVar5 = *(int *)(param_2 + 0x18); iVar5 != *(int *)(param_2 + 0x1c); iVar5 = iVar5 + 0x68)
    {
      if (*(int *)(iVar5 + 0x2c) == param_4) {
        iVar4 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(iVar5 + 0xc);
        *(unsigned int *)(iVar5 + 4) = param_3;
        *(unsigned int *)(iVar5 + 0x28) = 0;
        *(unsigned int *)(iVar5 + 0x44) = 0;
        fVar1 = ltcg_pool_0_0f;
        *(float *)(iVar5 + 0x3c) = ltcg_pool_0_0f;
        if (iVar4 != iVar2) goto code_r0x8248c0d4;
        goto code_r0x8248c114;
      }
    }
  }
  return 0;
  while( true ) {
    pfVar3 = (float *)(iVar4 + 8);
    iVar4 = iVar4 + 0xc;
    fVar1 = (float)((double)*pfVar3 + (double)fVar1);
    *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
    *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + 1;
    if (iVar4 == iVar2) break;
code_r0x8248c0d4:
    if (param_1 <= (double)fVar1) break;
  }
  if (iVar4 != iVar2) {
    *(unsigned int *)(iVar5 + 0x1c) = 1;
  }
code_r0x8248c114:
  *(unsigned int *)(iVar5 + 0x48) = 1;
  *(unsigned int *)(iVar5 + 0x24) = 0;
  return 1;
}

