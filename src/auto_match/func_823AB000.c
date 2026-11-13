extern int fn_823AA990();


void fn_823AB000(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  
  piVar1 = *(int **)**(int **)(param_2 + 8);
  piVar2 = (int *)((int *)**(int **)(param_2 + 8))[1];
  iVar3 = (**(int (***)())(*param_1 + 0xc))
                    (param_1,(int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20),
                     (int)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20));
  iVar4 = (**(int (***)())(*param_1 + 4))(param_1);
  if (iVar3 == iVar4) {
    uVar5 = (**(int (***)())(*param_1 + 0x14))(param_1);
    iVar3 = (**(int (***)())(*param_1 + 8))(param_1);
    iVar3 = iVar3 + 0x1b;
  }
  else {
    uVar5 = (**(int (***)())(*param_1 + 0x10))();
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    param_1[iVar3 + 0x1b] = uVar5 ^ 1;
    uVar5 = (**(int (***)())(*param_1 + 0x10))(param_1);
    uVar5 = uVar5 ^ 1;
    iVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    iVar3 = iVar3 + 0x19;
  }
  param_1[iVar3] = uVar5;
  fn_823AA990(param_1,param_2,param_3,param_4);
  return;
}

