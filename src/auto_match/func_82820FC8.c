void fn_82820FC8(int param_1,unsigned char *param_2,int param_3)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  
  puVar3 = param_2 + param_3;
  if (puVar3 <= param_2) {
    return;
  }
  iVar1 = (int)puVar3 - (int)param_2;
  puVar2 = (unsigned char *)(param_1 + -1);
  do {
    puVar3 = puVar3 + -1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

