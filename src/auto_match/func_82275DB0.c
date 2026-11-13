extern int fn_82275530();
extern int fn_82275C58();
extern int fn_82276128();
extern int fn_8265CA20();
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int *
fn_82275DB0(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,int param_4,int param_5,
             int param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  int aiStack_50 [8];
  
  if ((param_5 < param_4) || (iVar1 = fn_82275530(param_6), iVar1 < param_4)) {
    iVar1 = fn_82275530(param_6);
    if (iVar1 < param_5) {
      if ((param_1 != param_2) && (param_2 != param_3)) {
        fn_82276128(param_1,param_2,param_3);
      }
      param_1 = param_1 + param_5 * 2;
    }
    else {
      stack_pair_70.first = 0;
      stack_pair_70.second = 0;
      uStack_68 = 0;
      uStack_64 = 0;
      (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
      uStack_60 = *(unsigned int *)(param_6 + 0x10);
      fn_82275C58(aiStack_50,param_2,param_3,&stack_pair_70.first);
      if (aiStack_50[0] != 0) {
        fn_8265CA20();
      }
      if (param_1 != param_2) {
        puVar2 = param_2;
        do {
          puVar3 = puVar2 + -2;
          *(unsigned int *)(((int)param_3 - (int)param_2) + (int)puVar3) = *puVar3;
          *(unsigned int *)((int)puVar3 + ((int)param_3 - (int)param_2) + 4) = puVar2[-1];
          puVar2 = puVar3;
        } while (puVar3 != param_1);
      }
      puVar2 = (unsigned int *)(*(unsigned int **)(param_6 + 0x10))[1];
      for (puVar3 = (unsigned int *)**(unsigned int **)(param_6 + 0x10); puVar3 != puVar2;
          puVar3 = puVar3 + 2) {
        *param_1 = *puVar3;
        param_1[1] = puVar3[1];
        param_1 = param_1 + 2;
      }
    }
  }
  else {
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    (*(unsigned int **)(param_6 + 0x10))[1] = **(unsigned int **)(param_6 + 0x10);
    uStack_60 = *(unsigned int *)(param_6 + 0x10);
    fn_82275C58(aiStack_50,param_1,param_2,&stack_pair_70.first);
    if (aiStack_50[0] != 0) {
      fn_8265CA20();
    }
    if (param_2 != param_3) {
      puVar2 = param_2;
      do {
        *(unsigned int *)(((int)param_1 - (int)param_2) + (int)puVar2) = *puVar2;
        puVar3 = puVar2 + 2;
        *(unsigned int *)((int)puVar2 + ((int)param_1 - (int)param_2) + 4) = puVar2[1];
        puVar2 = puVar3;
      } while (puVar3 != param_3);
    }
    puVar2 = (unsigned int *)**(int **)(param_6 + 0x10);
    puVar3 = (unsigned int *)(*(int **)(param_6 + 0x10))[1];
    param_1 = param_3;
    while (puVar2 != puVar3) {
      param_1[-2] = puVar3[-2];
      param_1[-1] = puVar3[-1];
      puVar3 = puVar3 + -2;
      param_1 = param_1 + -2;
    }
  }
  return param_1;
}

