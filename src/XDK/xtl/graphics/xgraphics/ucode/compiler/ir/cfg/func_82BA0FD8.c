extern int fn_82B7BD28();


unsigned int * fn_82BA0FD8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  
  uVar1 = param_1 + 0x1fU >> 5;
  puVar2 = (unsigned int *)fn_82B7BD28(param_2,(uVar1 + 3) * 4);
  *puVar2 = (int)param_2;
  uVar4 = 0;
  puVar2[2] = param_1;
  puVar2[1] = uVar1;
  if (uVar1 != 0) {
    puVar3 = puVar2 + 2;
    do {
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = 0;
    } while (uVar4 < (unsigned int)puVar2[1]);
  }
  return puVar2 + 1;
}

