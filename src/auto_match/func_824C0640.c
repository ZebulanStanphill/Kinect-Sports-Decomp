extern int fn_822315A0();
extern int fn_824C0998();
extern unsigned int iStack_2c;
extern unsigned int ltcg_pool_0_0f;


void fn_824C0640(int *param_1)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  int iVar3;
  double dVar4;
  int *piStack_30;
  int iStack_2c;
  
  uVar2 = (unsigned __int64)(unsigned int)param_1[6];
  if (*(int **)(param_1[0xf] + 8) != (int *)0x0) {
    uVar2 = (**(int (***)())(**(int **)(param_1[0xf] + 8) + 0xc))();
  }
  param_1[0xe] = param_1[0xe];
  iVar3 = (int)uVar2;
  dVar4 = (double)ltcg_pool_0_0f;
  if (iVar3 != param_1[5]) {
    (**(int (***)())(*param_1 + 8))(param_1,param_1[5],uVar2);
    param_1[0xe] = (int)(float)dVar4;
    param_1[6] = iVar3;
    param_1[5] = iVar3;
  }
  if (param_1[5] != 0) {
    if ((param_1[6] == param_1[5]) || (param_1[6] == 0)) {
      fn_824C0998(&piStack_30,param_1);
      pcVar1 = *(int (***)())(*piStack_30 + 4);
    }
    else {
      fn_824C0998(&piStack_30,param_1);
      pcVar1 = *(int (***)())(*piStack_30 + 8);
    }
    (*pcVar1)(dVar4);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  (**(int (***)())(*param_1 + 0xc))(dVar4,param_1);
  return;
}

