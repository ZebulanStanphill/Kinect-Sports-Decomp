extern int fn_828A6468();


unsigned int * fn_828A68B0(int param_1,unsigned int *param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = *(unsigned int **)(param_1 + 4);
  if (*(char *)((int)param_2 + 0x1d) == '\0') {
    puVar1 = (unsigned int *)fn_828A6468(param_1,param_2 + 3);
    puVar1[1] = param_3;
    *(unsigned char *)(puVar1 + 7) = *(unsigned char *)(param_2 + 7);
    if (*(char *)((int)puVar3 + 0x1d) != '\0') {
      puVar3 = puVar1;
    }
    uVar2 = fn_828A68B0(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = fn_828A68B0(param_1,param_2[2],puVar1);
    puVar1[2] = uVar2;
  }
  return puVar3;
}

