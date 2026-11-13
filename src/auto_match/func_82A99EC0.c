void fn_82A99EC0(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = param_2 + param_3;
  iVar3 = 0;
  for (; param_2 < pcVar2; param_2 = param_2 + 1) {
    cVar1 = *param_2;
    if ((cVar1 == '<') || (cVar1 == '>')) {
      iVar3 = iVar3 + 4;
    }
    else if (cVar1 == '&') {
      iVar3 = iVar3 + 5;
    }
    else {
      iVar3 = iVar3 + 1;
    }
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
  return;
}

