extern int fn_822ABA88();
extern int fn_8242C410();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82450348(int param_1,int param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  double dVar8;
  
  dVar8 = (double)ltcg_pool_0_0f;
  piVar1 = *(int **)(**(int **)(**(int **)(param_1 + 0x40) + 8) +
                    (*(int **)(param_1 + 0x40))[0x81] * 4);
  uVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
  lVar5 = 0;
  uVar7 = (unsigned __int64)**(unsigned int **)(param_1 + 0x40);
  iVar4 = fn_8242C410(uVar7);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      piVar1 = *(int **)(**(int **)((int)uVar7 + 8) + (int)lVar6);
      uVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
      iVar4 = (int)uVar3;
      if ((*(int *)(*(int *)(iVar4 + 0x14) + 0x1d0) == 0) &&
         (((param_2 == 0 || (*(int *)(iVar4 + 0x24) != 0)) &&
          (dVar8 < (double)**(float **)(iVar4 + 0x1a0))))) {
        uVar2 = uVar3;
        dVar8 = (double)**(float **)(iVar4 + 0x1a0);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 4;
      iVar4 = fn_8242C410(uVar7);
    } while ((int)lVar5 < iVar4);
  }
  return uVar2;
}

