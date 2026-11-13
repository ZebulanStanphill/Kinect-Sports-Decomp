int fn_82D441E8(int *param_1)

{
  int uVar1;
  int iVar2;
  int lVar3;
  
  lVar3 = 0;
  uVar1 = (*(int (**)())(*param_1 + 8))();
  iVar2 = uVar1;
  while (iVar2 != -1) {
    lVar3 = lVar3 + 1;
    uVar1 = (*(int (**)())(*param_1 + 0xc))(param_1,uVar1);
    iVar2 = uVar1;
  }
  return lVar3;
}

