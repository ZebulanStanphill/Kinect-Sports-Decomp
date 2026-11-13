extern unsigned int *auStack_44;
extern int fn_822D9E28();
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;


void fn_822DCA58(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned __int64 uStack00000028;
  unsigned int auStack_44 [17];
  
  uStack00000028 = param_4;
  cVar1 = fn_822D9E28(&stack0x00000028,param_2,param_1);
  if (cVar1 != '\0') {
    puVar3 = auStack_44;
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (unsigned int *)(param_1 + -4);
    puVar3 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = auStack_44;
    puVar3 = (unsigned int *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_822D9E28(&stack0x00000028,param_3,param_2);
  if (cVar1 != '\0') {
    puVar3 = auStack_44;
    puVar2 = (unsigned int *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (unsigned int *)(param_2 + -4);
    puVar3 = (unsigned int *)(param_3 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = auStack_44;
    puVar3 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  cVar1 = fn_822D9E28(&stack0x00000028,param_2,param_1);
  if (cVar1 != '\0') {
    puVar3 = auStack_44;
    puVar2 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = (unsigned int *)(param_1 + -4);
    puVar3 = (unsigned int *)(param_2 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar2 = auStack_44;
    puVar3 = (unsigned int *)(param_1 + -4);
    lVar4 = 5;
    do {
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

