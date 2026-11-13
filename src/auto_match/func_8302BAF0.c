unsigned __int64 fn_8302BAF0(unsigned __int64 param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)*param_2 + 1;
  uVar1 = *(unsigned int *)*param_2;
  *param_2 = (int)puVar3;
  for (uVar2 = (unsigned __int64)uVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar3 = puVar3 + 1;
    *param_2 = (int)puVar3;
  }
  return 1;
}

