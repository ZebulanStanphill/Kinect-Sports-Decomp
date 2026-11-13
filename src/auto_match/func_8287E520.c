extern int fn_82424AD0();


unsigned int * fn_8287E520(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  cVar2 = fn_82424AD0(param_1,param_2[1] - *param_2 >> 2);
  if (cVar2 != '\0') {
    puVar1 = (unsigned int *)param_2[1];
    puVar3 = (unsigned int *)*param_1;
    for (puVar4 = (unsigned int *)*param_2; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    param_1[1] = puVar3;
  }
  return param_1;
}

