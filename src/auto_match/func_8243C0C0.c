extern unsigned int ltcg_pool_0_0f;


void fn_8243C0C0(double param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  uVar1 = (unsigned __int64)(unsigned int)param_2[6];
  if (*(int **)(param_2[0xf] + 8) != (int *)0x0) {
    uVar1 = (**(int (***)())(**(int **)(param_2[0xf] + 8) + 0xc))();
  }
  param_2[0xe] = (int)(float)((double)(float)param_2[0xe] + param_1);
  iVar2 = (int)uVar1;
  if (iVar2 != param_2[5]) {
    (**(int (***)())(*param_2 + 8))(param_2,param_2[5],uVar1);
    param_2[6] = iVar2;
    param_2[5] = iVar2;
    param_2[0xe] = ltcg_pool_0_0f;
  }
  (**(int (***)())(*param_2 + 0xc))(param_1,param_2);
  return;
}

