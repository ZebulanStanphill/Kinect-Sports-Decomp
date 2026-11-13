extern unsigned int *auStack_30;
extern int fn_82536008();
extern int fn_82536288();
extern int fn_82536358();
extern int memmove();


void fn_8228F3E8(int param_1)

{
  int iVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int auStack_30;
  
  for (puVar4 = *(unsigned int **)(param_1 + 0x38); puVar4 != *(unsigned int **)(param_1 + 0x3c);
      puVar4 = puVar4 + 1) {
    auStack_30 = *puVar4;
    uVar3 = (unsigned __int64)auStack_30;
    cVar2 = fn_82536358(uVar3);
    if (cVar2 != '\0') {
      fn_82536008(uVar3);
      fn_82536288(&auStack_30);
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 != *(int *)(param_1 + 0x3c)) {
    memmove(iVar1,*(int *)(param_1 + 0x3c),0);
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  return;
}

