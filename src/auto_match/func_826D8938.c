#define true 1


unsigned __int64 fn_826D8938(int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  
  uVar2 = (unsigned int)param_3;
  iVar3 = uVar2 * 0x10 + *param_1;
  puVar4 = (unsigned int *)(iVar3 + 8);
  if ((*puVar4 != 0xfffffffe) && (*(unsigned int *)(iVar3 + 0xc) == uVar2)) {
    while( true ) {
      if ((puVar4[1] == uVar2) && (puVar4[2] == *(unsigned int *)*param_2)) {
        return param_3;
      }
      uVar1 = *puVar4;
      param_3 = (unsigned __int64)uVar1;
      if (uVar1 == 0xffffffff) break;
      puVar4 = (unsigned int *)(uVar1 * 0x10 + *param_1 + 8);
    }
  }
  return 0xffffffffffffffff;
}

