extern int fn_8229EBD8();
extern int fn_8248FAB0();
extern int fn_8265C9E0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8329618C;


void fn_824907B0(unsigned int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  iVar3 = fn_8265C9E0(0x18);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_8229EBD8();
  }
  param_1[0x17] = uVar4;
  piVar1 = (int *)param_1[7];
  param_1[0x10] = 1;
  param_1[0xe] = ltcg_pool_0_0f;
  if (piVar1 == (int *)0x0) {
    uVar4 = *(unsigned int *)param_1[1];
  }
  else {
    (**(int (***)())(*piVar1 + 4))(piVar1,param_1);
    if (param_1[7] != 0) {
      fn_8248FAB0(param_1[7],param_1);
    }
    uVar4 = *(unsigned int *)(param_1[7] + 0x34);
    if (uVar4 < *(unsigned int *)param_1[1]) {
      param_1[5] = *(unsigned int *)param_1[1];
      goto LAB_82490854;
    }
  }
  param_1[5] = uVar4;
LAB_82490854:
  puVar5 = (unsigned int *)param_1[8];
  puVar2 = (unsigned int *)param_1[9];
  param_1[5] = (param_1[0x16] + param_1[5]) - 1 & ~(param_1[0x16] - 1);
  for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
    (**(int (***)())(*(int *)*puVar5 + 4))((int *)*puVar5,(unsigned __int64)*param_1 - 1);
  }
  piVar1 = (int *)param_1[7];
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1,param_1);
    uVar4 = piVar1[0xb];
    param_1[0x15] = uVar4;
    if (lbl_8329618C == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lbl_8329618C + 4);
    }
    *(unsigned int *)(iVar3 + 0x820) = uVar4;
  }
  return;
}

