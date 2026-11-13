extern int fn_8268E388();


void fn_8268E570(unsigned __int64 param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  *param_2 = (int)param_2;
  param_2[1] = (int)param_2;
  iVar2 = fn_8268E388();
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    *param_2 = iVar2;
    param_2[1] = iVar1;
    *(int **)(iVar2 + 4) = param_2;
    *(int **)param_2[1] = param_2;
  }
  return;
}

