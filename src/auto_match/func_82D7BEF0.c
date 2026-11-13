unsigned __int64 fn_82D7BEF0(int *param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  
  iVar1 = param_1[2];
  iVar4 = 0;
  if (0 < iVar1) {
    puVar3 = (unsigned int *)param_1[1];
    do {
      iVar4 = iVar4 + 1;
      if (iVar4 == iVar1) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = 0x200;
      }
      if ((*puVar3 <= param_2) && (param_2 < iVar2 + *puVar3)) {
        return 1;
      }
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}

