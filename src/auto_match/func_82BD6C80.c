void fn_82BD6C80(int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2c);
  uVar4 = 0;
  *param_4 = uVar1;
  if (uVar1 != 0) {
    puVar5 = (unsigned int *)(param_1 + 0x24);
    param_2 = param_2 - (int)param_3;
    do {
      piVar2 = (int *)puVar5[-5];
      uVar3 = (**(int (***)())(*piVar2 + 0x18))(piVar2);
      *(unsigned int *)(param_2 + (int)param_3) = uVar3;
      if (piVar2 == (int *)0x0) {
        *param_3 = 0;
      }
      else {
        *param_3 = *puVar5;
        (**(int (***)())(*piVar2 + 0xc))(piVar2);
        *puVar5 = 0;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 < *param_4);
  }
  return;
}

