extern int fn_822315A0();
extern int fn_82359DB8();
extern unsigned int iStack_2c;
extern unsigned int ltcg_pool_0_0f;


void fn_82359C70(double param_1,int *param_2)

{
  int (**pcVar1)();
  unsigned __int64 uVar2;
  int *piStack_30;
  int iStack_2c;
  
  uVar2 = (unsigned __int64)(unsigned int)param_2[6];
  if (*(int **)(param_2[0xf] + 8) != (int *)0x0) {
    uVar2 = (**(int (***)())(**(int **)(param_2[0xf] + 8) + 0xc))();
  }
  param_2[0xe] = (int)(float)((double)(float)param_2[0xe] + param_1);
  if ((uVar2 & 0xffffffff) != (unsigned __int64)(unsigned int)param_2[5]) {
    (**(int (***)())(*param_2 + 8))(param_2,param_2[5],uVar2);
    param_2[6] = (int)uVar2;
    param_2[5] = (int)uVar2;
    param_2[0xe] = ltcg_pool_0_0f;
  }
  if (param_2[5] != 0) {
    if ((param_2[6] == param_2[5]) || (param_2[6] == 0)) {
      fn_82359DB8(&piStack_30,param_2,param_2[5]);
      pcVar1 = *(int (***)())(*piStack_30 + 0xc);
    }
    else {
      fn_82359DB8(&piStack_30,param_2,param_2[5]);
      pcVar1 = *(int (***)())(*piStack_30 + 0x10);
    }
    (*pcVar1)(param_1);
    if (iStack_2c != 0) {
      fn_822315A0();
    }
  }
  (**(int (***)())(*param_2 + 0xc))(param_1,param_2);
  return;
}

