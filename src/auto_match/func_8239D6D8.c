extern int fn_822ABA88();
extern unsigned int ltcg_pool_0_0f;


void fn_8239D6D8(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_3);
  fVar3 = ltcg_pool_0_0f;
  iVar2 = (param_2 * 2 + (int)param_3) * 0xb0 + param_1 + 0x8d4;
  *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
  if (fVar3 < *(float *)(param_4 + 0x268)) {
    *(int *)(iVar2 + 0x70) = *(int *)(iVar2 + 0x70) + 1;
  }
  if (*(float *)(param_4 + 0x268) < fVar3) {
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
  }
  if (*(int *)(param_4 + 0x188) != 0) {
    *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + 1;
  }
  if (*(int *)(param_4 + 0x184) != 0) {
    *(int *)(iVar2 + 100) = *(int *)(iVar2 + 100) + 1;
  }
  if (*(int *)(iVar4 + 0x244) == 0) {
    *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
  }
  else {
    *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
  }
  if ((*(int *)(param_4 + 0x188) != 0) && (*(unsigned int *)(iVar2 + 0x18) < *(unsigned int *)(param_4 + 0x170))) {
    *(unsigned int *)(iVar2 + 0x18) = *(unsigned int *)(param_4 + 0x170);
  }
  return;
}

