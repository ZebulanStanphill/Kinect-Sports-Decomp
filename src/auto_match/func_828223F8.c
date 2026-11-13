void fn_828223F8(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)param_1[1];
  if ((int *)param_1[1] == (int *)0x0) {
    piVar3 = (int *)(-(unsigned int)(*param_1 != 0) & (unsigned int)param_1);
  }
  else {
    do {
      piVar3 = piVar2;
      piVar2 = (int *)piVar3[1];
    } while ((int *)piVar3[1] != (int *)0x0);
  }
  for (; *param_2 != 0; param_2 = (int *)*param_2) {
  }
  puVar1 = (unsigned int *)param_2[1];
  if (piVar3 == (int *)0x0) {
    piVar3 = param_1;
  }
  piVar3[1] = (int)puVar1;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = piVar3;
  }
  param_2[1] = 0;
  return;
}

