extern int fn_82522ED8();


void fn_825FA398(unsigned int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  
  puVar5 = param_1 + 2;
  lVar4 = 3;
  do {
    iVar1 = puVar5[3];
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x28);
      fn_82522ED8();
    }
    puVar5[2] = 0;
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 3;
    *puVar5 = 0;
  } while (lVar4 != 0);
  iVar1 = param_1[2];
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x1c);
    iVar3 = *(int *)(iVar1 + 0x20);
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x18);
      fn_82522ED8();
    }
    *(unsigned int *)(iVar1 + 0x1c) = 0;
    fn_82522ED8(iVar1);
    iVar1 = iVar3;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

