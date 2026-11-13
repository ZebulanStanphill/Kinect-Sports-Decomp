extern int fn_829BE858();


void fn_829BE910(int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  puVar1 = (unsigned int *)(**(int (***)())param_1[1])(param_1,1,0x1c);
  param_1[0x6d] = (int)puVar1;
  puVar1[2] = 0;
  *puVar1 = fn_829BE858;
  puVar1[3] = 0;
  if (param_1[0x15] != 0) {
    puVar1[4] = param_1[0x4f];
    if (param_2 == 0) {
      uVar2 = (**(int (***)())(param_1[1] + 8))
                        (param_1,1,(__int64)param_1[0x1e] * (__int64)param_1[0x1c]);
      puVar1[3] = uVar2;
    }
    else {
      *(unsigned int *)(*param_1 + 0x14) = 4;
      (**(int (***)())*param_1)(param_1);
    }
  }
  return;
}

