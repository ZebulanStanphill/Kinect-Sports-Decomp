extern int fn_8229F5A8();
extern int fn_822ABA88();
extern int fn_823C4DD0();
extern int fn_823CC298();
extern unsigned int lbl_821955D4;
extern unsigned int ltcg_pool_0_0f;


void fn_823D4908(int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  double dVar7;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  fn_8229F5A8(*(unsigned int *)(*(int *)(**(int **)(*param_1 + 0x4b0) + 0xd4) + 0xc));
  fVar3 = ltcg_pool_0_0f;
  iVar4 = *param_1;
  dVar7 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(iVar4 + 0x1028) = 2;
  *(float *)(iVar4 + 0x1024) = fVar3;
  fn_823C4DD0();
  piVar1 = *(int **)(**(int **)(*param_1 + 8) + param_1[0x2c] * 4);
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_1[0x2d]);
  iVar4 = *(int *)(*(int *)(iVar4 + 0x24) + 0xf4);
  lVar6 = 2;
  iVar5 = iVar4 + 0x20;
  *(unsigned int *)(iVar4 + 0x10) = 0;
  do {
    puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
    *puVar2 = in_register_000104d0;
    puVar2[1] = in_register_000104d4;
    puVar2[2] = in_register_000104d8;
    puVar2[3] = in_vr77;
    iVar5 = iVar5 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(float *)(iVar4 + 100) = (float)dVar7;
  *(unsigned int *)(iVar4 + 0x54) = 1;
  *(unsigned int *)(iVar4 + 0x58) = 1;
  *(unsigned int *)(iVar4 + 0x5c) = lbl_821955D4;
  fn_823CC298(*(unsigned int *)(*param_1 + 0x4b8),7);
  return;
}

