extern unsigned int iStack_14;
extern unsigned int iStack_1c;
extern unsigned int uStack_18;
extern unsigned int uStack_20;


void fn_822673B0(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int uStack_20;
  int iStack_1c;
  unsigned int uStack_18;
  int iStack_14;
  
  iVar2 = *(int *)(param_1 + 0x5d8) + param_2;
  if (*(int (***)())(param_1 + 0x5b0) != (int (**)())0x0) {
    uStack_18 = *(unsigned int *)(param_1 + 0x5b4);
    for (puVar1 = *(unsigned int **)**(int **)(param_1 + 0x5c0);
        puVar1 != (unsigned int *)**(int **)(param_1 + 0x5c0); puVar1 = (unsigned int *)*puVar1) {
      iVar3 = puVar1[2];
      if (*(int *)(iVar3 + 0x40) == param_2) goto LAB_82267408;
    }
    iVar3 = 0;
LAB_82267408:
    uStack_20 = *(unsigned int *)(iVar3 + 0xdc);
    iStack_1c = iVar2 - *(int *)(param_1 + 0x47c);
    if (*(int *)(param_1 + 0x5dc) == 0) {
      iStack_14 = 0;
    }
    else {
      iStack_14 = iVar2 * 0x24 + *(int *)(param_1 + 0x5dc);
    }
    (**(int (***)())(param_1 + 0x5b0))(&uStack_20);
  }
  return;
}

