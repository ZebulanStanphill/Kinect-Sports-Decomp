__int64 fn_82D39D58(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x18) + 0x18))
                    (*(int **)(param_1 + 0x18),param_2,param_3 + -0x60);
  iVar2 = (int)lVar1;
  if ((iVar2 < 0) || ((int)(param_3 + -0x60) < iVar2)) {
    lVar1 = -1;
  }
  else if (*(int *)(param_1 + 0x18) == param_1 + 0x60) {
    lVar1 = lVar1 + 0x60;
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  else {
    *(int *)(param_1 + 0x1c) = iVar2;
    lVar1 = 0x60;
  }
  return lVar1;
}

