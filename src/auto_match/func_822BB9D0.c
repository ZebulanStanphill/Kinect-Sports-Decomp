extern int fn_822BD338();
extern int fn_822C72E0();
extern unsigned int ltcg_pool_0_0f;


void fn_822BB9D0(int param_1)

{
  int iVar1;
  double dVar2;
  char cVar3;
  unsigned int uVar4;
  double dVar5;
  
  iVar1 = **(int **)(param_1 + 0x238);
  dVar5 = (double)ltcg_pool_0_0f;
  dVar2 = dVar5;
  if (*(int *)(iVar1 + 0x2b30) != 0) {
    dVar2 = (double)*(float *)(iVar1 + 0x614);
  }
  if ((((dVar2 < (double)*(float *)(iVar1 + 0x2bb8)) || (dVar5 < (double)*(float *)(iVar1 + 0x2b24))
       ) && (cVar3 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20) + 4,
                                       0xffffffff821aca44), cVar3 == '\0')) &&
     (*(int *)(param_1 + 0x410) == 0)) {
    fn_822C72E0(*(unsigned int *)(*(int *)(param_1 + 0x114) + 0x20),0xffffffff821aca44);
  }
  iVar1 = **(int **)(param_1 + 0x238);
  dVar2 = dVar5;
  if (*(int *)(iVar1 + 0x2b30) != 0) {
    dVar2 = (double)*(float *)(iVar1 + 0x614);
  }
  if ((dVar2 < (double)*(float *)(iVar1 + 0x2bb8)) ||
     (uVar4 = 0, dVar5 < (double)*(float *)(iVar1 + 0x2b24))) {
    uVar4 = 1;
  }
  *(unsigned int *)(param_1 + 0x410) = uVar4;
  return;
}

