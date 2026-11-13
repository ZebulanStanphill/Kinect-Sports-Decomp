extern int fn_8239FF60();
extern int fn_824C97F0();
extern unsigned int ltcg_pool_0_0f;


void fn_823A1938(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  double dVar6;
  
  dVar6 = (double)ltcg_pool_0_0f;
  *(float *)(param_1 + 0xc) = ltcg_pool_0_0f;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (*(int *)(iVar1 + 0x178) == 0) {
    uVar4 = 3;
  }
  else {
    if ((*(int *)(iVar1 + 0x178) != 2) || (*(int *)(iVar1 + 0x178) == 0)) goto LAB_823a19a0;
    uVar4 = 0xc;
  }
  fn_8239FF60(*(unsigned int *)(iVar1 + 0x2dc),uVar4);
LAB_823a19a0:
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
  *(float *)(iVar1 + 0x868) = (float)dVar6;
  puVar2 = *(unsigned int **)(iVar1 + 0xa8);
  piVar3 = (int *)puVar2[1];
  for (piVar5 = (int *)*puVar2; piVar5 != piVar3; piVar5 = piVar5 + 2) {
    fn_824C97F0(*(unsigned int *)(*piVar5 + 0x28),0xffffffff821b45a8);
  }
  return;
}

