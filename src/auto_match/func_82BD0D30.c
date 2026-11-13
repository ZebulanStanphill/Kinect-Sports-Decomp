extern int fn_82BC0088();


void fn_82BD0D30(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 < *(unsigned int *)(iVar1 + 4)) {
    puVar4 = (unsigned int *)(*(int *)(iVar1 + 8) + (unsigned int)param_3 * 4);
  }
  else {
    puVar4 = (unsigned int *)fn_82BC0088(iVar1,param_3);
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar1 + 4)) {
    piVar2 = (int *)(*(int *)(iVar1 + 8) + (int)param_2 * 4);
  }
  else {
    piVar2 = (int *)fn_82BC0088(iVar1,param_2);
  }
  puVar3 = (unsigned int *)
           fn_82BC0088(*(int *)(*piVar2 + 0x10),*(unsigned int *)(*(int *)(*piVar2 + 0x10) + 4))
  ;
  *puVar3 = *puVar4;
  return;
}

