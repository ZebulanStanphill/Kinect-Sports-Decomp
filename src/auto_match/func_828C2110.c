extern int fn_8260D428();


unsigned int * fn_828C2110(int param_1,unsigned int *param_2)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)(*(unsigned int **)(param_1 + 4))[1];
  cVar1 = *(char *)((int)puVar5 + 0x39);
  puVar2 = *(unsigned int **)(param_1 + 4);
  while (cVar1 == '\0') {
    puVar4 = param_2;
    if (0xf < (unsigned int)param_2[5]) {
      puVar4 = (unsigned int *)*param_2;
    }
    iVar3 = fn_8260D428(puVar5 + 3,0,puVar5[7],puVar4,param_2[4]);
    if (iVar3 < 0) {
      puVar4 = (unsigned int *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (unsigned int *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x39);
  }
  return puVar2;
}

