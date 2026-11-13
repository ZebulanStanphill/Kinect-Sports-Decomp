void fn_82BC2438(int *param_1,int *param_2)

{
  int iVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = (**(int (***)())(*param_2 + 0x50))(param_2,0,lVar2);
    (**(int (***)())(*param_1 + 0x54))(param_1,0,lVar2,iVar1 != 1);
    lVar2 = lVar2 + 1;
  } while ((int)lVar2 < 4);
  return;
}

