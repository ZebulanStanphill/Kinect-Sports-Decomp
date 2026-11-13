extern int fn_8286D418();


void fn_8286CE28(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char auStack_20 [8];
  
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    puVar1 = *(unsigned int **)(param_1 + 0x18);
    puVar3 = (unsigned int *)*puVar1;
    while (puVar3 != puVar1) {
      piVar2 = (int *)puVar3[2];
      if (*(char *)((int)piVar2 + 0x59) == '\x01') {
        (*(int (**)())(*piVar2 + 0x14))(piVar2,1);
        puVar3 = (unsigned int *)fn_8286D418(auStack_20,(unsigned int *)(param_1 + 0x18),puVar3);
        puVar3 = (unsigned int *)*puVar3;
      }
      else {
        puVar3 = (unsigned int *)*puVar3;
      }
      puVar1 = *(unsigned int **)(param_1 + 0x18);
    }
  }
  return;
}

