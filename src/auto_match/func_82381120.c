extern int fn_822ABA88();
extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_823737B8();
extern int fn_823815D0();
extern int fn_82381948();
extern unsigned int ltcg_pool_0_0f;


void fn_82381120(int param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned __int64 uVar4;
  double extraout_f1;
  double extraout_f1_00;
  double dVar5;
  
  if (param_3 != (int)param_5) {
    fn_823815D0(param_1,param_3,0xffffffffffffffff,2);
    iVar2 = fn_823737B8(*(unsigned int *)(param_1 + 4),param_5);
    if (iVar2 != 0) {
      return;
    }
    fn_823815D0(param_1,param_5,param_6,4);
    return;
  }
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 4) + 8) + param_3 * 4);
  iVar2 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_4);
  iVar3 = fn_822CEE40();
  dVar5 = extraout_f1;
  if ((iVar3 != 0) && (iVar3 = fn_822CEFA0(), dVar5 = extraout_f1_00, iVar3 != 0)) {
    uVar4 = 9;
    goto LAB_823811bc;
  }
  if (*(int *)(iVar2 + 0x2a4) == 0) {
    if (dVar5 < (double)ltcg_pool_0_0f) goto LAB_823811fc;
  }
  else if ((double)ltcg_pool_0_0f < dVar5) {
LAB_823811fc:
    uVar4 = 10;
    goto LAB_823811bc;
  }
  uVar4 = 8;
LAB_823811bc:
  fn_823815D0(param_1,param_3,param_6,uVar4);
  fn_82381948(param_1,param_3 == 0,param_3,param_4,param_2 == 4);
  return;
}

