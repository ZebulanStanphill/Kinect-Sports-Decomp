void fn_82782CD0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  iVar1 = *(int *)(*param_1 + 0xc);
  uVar5 = (unsigned __int64)*(unsigned int *)(*param_1 + 8);
  piVar2 = *(int **)(iVar1 + 8);
  iVar3 = *(int *)(iVar1 + 4);
  uVar4 = (**(int (***)())(**(int **)(iVar1 + 8) + 0x18))
                    (*(int **)(iVar1 + 8),(__int64)*(int *)(iVar1 + 4) * (__int64)param_3 + uVar5)
  ;
  (**(int (***)())(*piVar2 + 0x10))(piVar2,(__int64)iVar3 * (__int64)param_2 + uVar5,uVar4);
  return;
}

