void fn_82A4FBD8(int param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  if (param_2 < *(unsigned int *)(param_1 + 0x34)) {
    puVar3 = *(unsigned int **)(param_1 + 0x2c);
    uVar1 = param_2 & 0xffffffff;
    while (uVar1 != 0) {
      puVar3 = (unsigned int *)puVar3[1];
      param_2 = param_2 - 1;
      uVar1 = param_2;
    }
    puVar3 = (unsigned int *)*puVar3;
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  uVar2 = (*(int (**)())(*(int *)*puVar3 + 0x18))((int *)*puVar3,0);
  *param_3 = uVar2;
  return;
}

