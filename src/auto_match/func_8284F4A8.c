void fn_8284F4A8(int *param_1,int param_2,unsigned int *param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8,int *in_stack_00000054)

{
  int iVar1;

  
  iVar1 = param_2 * 0xf0;
  *param_3 = *(unsigned int *)(*(int *)(*param_1 + 0xc) + param_2 * 100 + 4);
  *param_4 = iVar1 + param_1[2] + 0xbc;
  *param_5 = iVar1 + param_1[2] + 0xc0;
  *param_6 = iVar1 + param_1[2] + 0xc4;
  *in_stack_00000054 = iVar1 + param_1[2] + 0xd0;
  *param_7 = iVar1 + param_1[2] + 200;
  *param_8 = iVar1 + param_1[2] + 0xcc;
  return;
}

