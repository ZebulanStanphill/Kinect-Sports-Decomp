extern int fn_82381BC0();
extern int fn_82594FD0();
extern unsigned int *lbl_83297008;


void fn_82594B58(unsigned int param_1)

{
  char cVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *apuStack_20 [2];
  
  puVar4 = (unsigned int *)lbl_83297008[1];
  cVar1 = *(char *)((int)puVar4 + 0x15);
  puVar6 = lbl_83297008;
  puVar5 = lbl_83297008;
  puVar3 = puVar4;
  while (cVar1 == '\0') {
    if ((unsigned int)puVar3[3] < param_1) {
      puVar2 = (unsigned int *)puVar3[2];
    }
    else {
      if ((*(char *)((int)puVar5 + 0x15) != '\0') && (param_1 < (unsigned int)puVar3[3])) {
        puVar5 = puVar3;
      }
      puVar2 = (unsigned int *)*puVar3;
      puVar6 = puVar3;
    }
    puVar3 = puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x15);
  }
  if (*(char *)((int)puVar5 + 0x15) == '\0') {
    puVar4 = (unsigned int *)*puVar5;
  }
  while (apuStack_20[0] = puVar6, *(char *)((int)puVar4 + 0x15) == '\0') {
    if (param_1 < (unsigned int)puVar4[3]) {
      puVar5 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
    else {
      puVar4 = (unsigned int *)puVar4[2];
    }
  }
  while (apuStack_20[0] != puVar5) {
    fn_82381BC0(apuStack_20);
  }
  fn_82594FD0(apuStack_20,puVar6,puVar5);
  return;
}

