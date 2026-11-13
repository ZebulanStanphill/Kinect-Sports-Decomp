extern int fn_82817088();
extern int fn_8281FEB0();


void fn_828170D8(int param_1,unsigned int *param_2)

{
  int iVar1;
  char cVar2;
  unsigned int uVar3;
  int aiStack_20 [2];
  
  iVar1 = fn_8281FEB0();
  if (iVar1 == 0) {
LAB_82817100:
    uVar3 = 0;
  }
  else {
    do {
      if (*(int *)(param_1 + 0x70) < 1) goto LAB_82817100;
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      cVar2 = fn_82817088(param_1,aiStack_20);
    } while (cVar2 == '\0');
    uVar3 = *(unsigned int *)(aiStack_20[0] + 4);
  }
  *param_2 = uVar3;
  return;
}

