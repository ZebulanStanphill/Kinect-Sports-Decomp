extern unsigned int *auStack_20;
extern unsigned int uStack_24;


void fn_8250BD30(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int uStack_24;
  unsigned int auStack_20 [8];
  
  if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
    puVar2 = &uStack_24;
    puVar1 = (unsigned int *)(param_2 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = (unsigned int *)(param_1 + -4);
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = &uStack_24;
    puVar2 = (unsigned int *)(param_1 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(float *)(param_3 + 8) < *(float *)(param_2 + 8)) {
    puVar2 = &uStack_24;
    puVar1 = (unsigned int *)(param_3 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = (unsigned int *)(param_2 + -4);
    puVar2 = (unsigned int *)(param_3 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    puVar1 = &uStack_24;
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar3 = 5;
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (*(float *)(param_1 + 8) <= *(float *)(param_2 + 8)) {
    return;
  }
  puVar2 = &uStack_24;
  puVar1 = (unsigned int *)(param_2 + -4);
  lVar3 = 5;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = (unsigned int *)(param_1 + -4);
  puVar2 = (unsigned int *)(param_2 + -4);
  lVar3 = 5;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar1 = &uStack_24;
  puVar2 = (unsigned int *)(param_1 + -4);
  lVar3 = 5;
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

