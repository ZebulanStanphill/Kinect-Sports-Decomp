extern int fn_82AA6318();


unsigned __int64 fn_82AF4A80(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x224);
  puVar2 = *(unsigned int **)(param_1 + 0x228);
  *(int *)(param_1 + 0x224) = iVar1 + 1;
  if ((puVar2 == (unsigned int *)0x0) || (iVar1 + 1U < *puVar2)) {
    uVar3 = 1;
  }
  else {
    if (iVar1 + 1U == puVar2[1]) {
      fn_82AA6318();
    }
    uVar3 = 0;
  }
  return uVar3;
}

