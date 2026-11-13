extern int fn_83037EB8();


int fn_83037F70(int *param_1,int param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (((uVar1 < (unsigned int)param_1[2]) || (cVar2 = fn_83037EB8(param_1,8), cVar2 != '\0')) &&
     (uVar1 < (unsigned int)param_1[2])) {
    puVar4 = (unsigned int *)param_1[1];
    param_2 = param_2 * 8;
    param_1[1] = (int)(puVar4 + 2);
    if ((unsigned int *)(param_2 + *param_1) < puVar4) {
      do {
        puVar3 = puVar4 + -2;
        *puVar4 = puVar4[-2];
        puVar4[1] = puVar4[-1];
        puVar4 = puVar3;
      } while ((unsigned int *)(param_2 + *param_1) < puVar3);
    }
    param_2 = param_2 + *param_1;
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

