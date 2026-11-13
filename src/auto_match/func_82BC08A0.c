extern int fn_82B7BD28();


void fn_82BC08A0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if ((piVar2[1] != 0) && (param_2 == ((unsigned int *)piVar2[1])[1])) {
    *(unsigned int *)piVar2[1] = param_3;
    return;
  }
  uVar1 = *(unsigned int *)(*piVar2 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar1,0x10);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar1;
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    *puVar4 = param_3;
    puVar3[2] = param_2;
    puVar3[3] = 0;
  }
  puVar4[2] = piVar2[1];
  piVar2[1] = (int)puVar4;
  return;
}

