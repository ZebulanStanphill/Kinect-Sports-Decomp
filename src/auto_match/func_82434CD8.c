extern int fn_8242E3E0();
extern int fn_82437F40();
extern int fn_8243E5C8();
extern unsigned int ltcg_pool_0_0f;


void fn_82434CD8(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  double dVar7;
  
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x148) = 0;
  fVar2 = ltcg_pool_0_0f;
  dVar7 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x14c) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1a8) = 0;
  *(float *)(*(int *)(param_1 + 0x40) + 0x18c) = fVar2;
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x204) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x168) =
       *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x164);
  iVar3 = *(int *)(**(int **)(param_1 + 0x40) + 0xa0);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0x40) != 1)) {
    iVar3 = fn_8242E3E0(**(unsigned int **)(param_1 + 0x40));
    if (iVar3 == 0) {
      *(int *)(*(int *)(param_1 + 0x40) + 0x154) = *(int *)(*(int *)(param_1 + 0x40) + 0x160) * 3;
      *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x15c) = 3;
      fn_82437F40(*(int *)(param_1 + 0x40) + 0x138,
                      *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x154));
      fn_82437F40(*(int *)(param_1 + 0x40) + 0x138,
                      *(unsigned int *)(*(int *)(param_1 + 0x40) + 0x154));
    }
  }
  *(float *)(*(int *)(param_1 + 0x40) + 0x188) = (float)dVar7;
  fn_8243E5C8((unsigned __int64)*(unsigned int *)(param_1 + 0x40) + 0x120);
  puVar4 = (unsigned int *)(*(int *)(param_1 + 0x40) + 0x138);
  uVar6 = 0;
  if ((int)(*(int *)(*(int *)(param_1 + 0x40) + 0x13c) - *puVar4) / 0x18 != 0) {
    lVar5 = 0;
    do {
      fn_8243E5C8(lVar5 + (unsigned __int64)*puVar4);
      uVar6 = uVar6 + 1;
      puVar4 = (unsigned int *)(*(int *)(param_1 + 0x40) + 0x138);
      lVar5 = lVar5 + 0x18;
    } while (uVar6 < (unsigned int)((int)(*(int *)(*(int *)(param_1 + 0x40) + 0x13c) - *puVar4) / 0x18));
  }
  iVar3 = 0;
  lVar5 = 3;
  do {
    iVar1 = iVar3 + *(int *)(param_1 + 0x40);
    iVar3 = iVar3 + 0x2c;
    *(unsigned int *)(iVar1 + 0x3e4) = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}

