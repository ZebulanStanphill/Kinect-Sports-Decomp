void fn_8280CAB0(int param_1,int param_2)

{
  unsigned __int64 *puVar1;
  unsigned __int64 *puVar2;
  __int64 lVar3;
  
  puVar2 = (unsigned __int64 *)(param_1 + -8);
  puVar1 = (unsigned __int64 *)(param_2 + -8);
  lVar3 = 8;
  do {
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

