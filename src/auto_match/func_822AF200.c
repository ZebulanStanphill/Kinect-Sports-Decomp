int * fn_822AF200(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  
  iVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = iVar1;
  puVar2 = (unsigned int *)*param_2;
  if (puVar2 != (unsigned int *)0x0) {
    (*(int (**)())*puVar2)(puVar2,1);
  }
  return param_1;
}

