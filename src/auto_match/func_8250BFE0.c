extern unsigned int *auStack_40;
extern int fn_8250A688();
extern unsigned int uStack_44;


void fn_8250BFE0(int param_1,int param_2,int param_3)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int uStack_44;
  unsigned int auStack_40 [16];
  
  cVar1 = fn_8250A688(param_2,param_1);
  if (cVar1 != '\0') {
    puVar2 = &uStack_44;
    puVar3 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned int *)(param_1 + -4);
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = &uStack_44;
    puVar2 = (unsigned int *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_8250A688(param_3,param_2);
  if (cVar1 != '\0') {
    puVar2 = &uStack_44;
    puVar3 = (unsigned int *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned int *)(param_2 + -4);
    puVar2 = (unsigned int *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = &uStack_44;
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_8250A688(param_2,param_1);
  if (cVar1 != '\0') {
    puVar2 = &uStack_44;
    puVar3 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (unsigned int *)(param_1 + -4);
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = &uStack_44;
    puVar2 = (unsigned int *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

