extern int fn_8263FB88();
extern unsigned int lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;


void fn_8252E6C8(int param_1,int param_2,int param_3)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)fn_8263FB88(param_1,4,3,0x10);
  uVar2 = ltcg_pool_0_0f;
  if (-1 < (__int64)-(unsigned __int64)(puVar3 == (unsigned int *)0x0)) {
    *puVar3 = ltcg_pool_0_0f;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    fVar1 = lbl_821916FC;
    puVar3[5] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[10] = uVar2;
    puVar3[6] = fVar1;
    puVar3[0xb] = fVar1;
    puVar3[9] = (float)(__int64)param_3 * fVar1;
    puVar3[4] = (float)(__int64)param_2 * fVar1;
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x3554);
  }
  return;
}

