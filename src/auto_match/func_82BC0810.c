extern int fn_82B7BD28();


void fn_82BC0810(int *param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  uVar1 = *(unsigned int *)(*param_1 + 0x5ac);
  puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x10);
  puVar3 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = param_3;
    puVar2[2] = param_2;
    puVar2[3] = 0;
  }
  puVar3[2] = param_1[1];
  param_1[1] = (int)puVar3;
  return;
}

