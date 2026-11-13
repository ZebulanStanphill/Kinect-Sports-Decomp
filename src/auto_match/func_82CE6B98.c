extern int fn_82CF6EE0();


void fn_82CE6B98(int param_1,int *param_2)

{
  int iVar1;
  __int64 lVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xc04);
  lVar2 = 0x20;
  do {
    if (*(char *)(piVar3 + -1) != '\0') {
      iVar1 = fn_82CF6EE0(piVar3 + -0x4a);
      param_2[1] = iVar1 + param_2[1];
      *param_2 = *param_2 + *piVar3;
    }
    lVar2 = lVar2 + -1;
    piVar3 = piVar3 + 0x4c;
  } while (lVar2 != 0);
  param_2[2] = 0;
  return;
}

