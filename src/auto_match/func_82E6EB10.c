extern unsigned int *auStack_40;


void fn_82E6EB10(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned __int64 auStack_40;
  
  auStack_40 = 0;
  iVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&auStack_40);
  if (((-1 < iVar1) &&
      (iVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),param_2),
      -1 < iVar1)) &&
     (iVar1 = (**(int (***)())(**(int **)(param_1 + 8) + 0x24))
                        (*(int **)(param_1 + 8),param_3,param_4,param_5), -1 < iVar1)) {
    (**(int (***)())(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),auStack_40);
  }
  return;
}

