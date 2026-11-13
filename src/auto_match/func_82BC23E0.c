__int64 fn_82BC23E0(int *param_1)

{
  int iVar1;
  __int64 lVar2;
  int lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  do {
    iVar1 = (*(int (**)())(*param_1 + 0x50))(param_1,0,lVar3);
    if (iVar1 != 1) {
      lVar2 = lVar2 + 1;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < 4);
  return lVar2;
}

