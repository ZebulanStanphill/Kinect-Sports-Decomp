extern int fn_82381BC0();
extern int fn_8289DAD0();


unsigned int fn_828B0DB8(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned char cVar3;
  int aiStack_20 [2];
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x220);
  aiStack_20[0] = *piVar1;
  if ((int *)aiStack_20[0] != piVar1) {
    do {
      uVar2 = *(unsigned int *)(aiStack_20[0] + 0x10);
      cVar3 = fn_8289DAD0(uVar2);
      if (cVar3 == '\0') {
        return uVar2;
      }
      fn_82381BC0(aiStack_20);
    } while (aiStack_20[0] != *(unsigned int *)(*(int *)(param_1 + 0x14) + 0x220));
  }
  return 0;
}

