extern unsigned int ltcg_pool_0_0f;


void fn_82447DE0(int *param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ltcg_pool_0_0f;
  param_4 = param_4 & 0xff;
  piVar1 = *(int **)(param_2 + 0x40);
  if (piVar1[(param_4 + 0xc) * 0xc] == 0) {
    iVar2 = *(int *)(*piVar1 + 0x174);
    param_1[2] = ltcg_pool_0_0f;
    param_1[1] = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  }
  else {
    iVar3 = piVar1[param_4 * 0xc + 0x98];
    iVar2 = piVar1[param_4 * 0xc + 0x9a];
    param_1[1] = piVar1[param_4 * 0xc + 0x99];
    param_1[2] = iVar2;
  }
  *param_1 = iVar3;
  return;
}

