#define true 1
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_8248BFB8(double param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 8) == 0)) {
    for (iVar5 = *(int *)(param_2 + 0x18); iVar5 != *(int *)(param_2 + 0x1c); iVar5 = iVar5 + 0x68)
    {
      if (*(int *)(iVar5 + 0x2c) == param_3) {
        iVar4 = *(int *)(iVar5 + 8);
        iVar3 = 0;
        *(unsigned int *)(iVar5 + 0x28) = 0;
        fVar1 = ltcg_pool_0_0f;
        while( true ) {
          *(int *)(iVar5 + 0x44) = iVar3;
          if ((iVar4 == *(int *)(iVar5 + 0xc)) || (param_1 <= (double)fVar1)) break;
          pfVar2 = (float *)(iVar4 + 8);
          iVar4 = iVar4 + 0xc;
          fVar1 = (float)((double)*pfVar2 + (double)fVar1);
          iVar3 = *(int *)(iVar5 + 0x44) + 1;
          *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 1;
        }
        *(unsigned int *)(iVar5 + 0x24) = 1;
        return 1;
      }
    }
  }
  return 0;
}

