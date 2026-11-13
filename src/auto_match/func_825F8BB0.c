extern int fn_82522DF8();
extern int fn_825F8418();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_825F8BB0(__int64 param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int *piVar6;
  
  iVar1 = (int)param_1;
  if ((0 < *(int *)(iVar1 + 0x248)) &&
     (lVar5 = (unsigned __int64)*(unsigned int *)((*(int *)(iVar1 + 0x248) + 0x8b) * 4 + iVar1) * 0x2c + param_1,
     lVar5 != -4)) {
    piVar6 = (int *)((int)lVar5 + 0xc);
    if (*piVar6 != 0) goto LAB_825f8c68;
  }
  iVar3 = fn_825F8418((double)lbl_821CA460,param_1,param_2,param_3,0);
  iVar1 = iVar3 * 0x2c + iVar1;
  puVar4 = (unsigned int *)fn_82522DF8(0x4c);
  *(unsigned int **)(iVar1 + 0xc) = puVar4;
  *puVar4 = 0xffffffff;
  piVar6 = (int *)(iVar1 + 0xc);
  *(unsigned int *)(*(int *)(iVar1 + 0xc) + 0x10) = 0;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(*(int *)(iVar1 + 0xc) + 0x18) = param_4;
  *(unsigned int *)(*(int *)(iVar1 + 0xc) + 0xc) = uVar2;
LAB_825f8c68:
  *(int *)(*(int *)(*piVar6 + 4) * 8 + *piVar6 + 0x1c) = (int)param_3;
  *(unsigned int *)((*(int *)(*piVar6 + 4) + 4) * 8 + *piVar6) = *param_2;
  *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + 1;
  return;
}

