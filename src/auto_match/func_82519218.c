extern unsigned int *auStack_30;
extern int fn_82230300();
extern int fn_82359C18();
extern int fn_82519678();
extern int fn_8265CA20();


unsigned int * fn_82519218(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char bVar4;
  unsigned int *puVar5;
  unsigned char auStack_30 [48];
  
  puVar3 = *(unsigned int **)(param_2 + 4);
  bVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x69) == '\0') {
    puVar5 = (unsigned int *)puVar3[1];
    do {
      puVar3 = puVar5;
      bVar4 = -(*(unsigned int *)(param_3 + 0x10) < (unsigned int)puVar3[4]) & 1;
      if (bVar4 == 0) {
        puVar5 = (unsigned int *)puVar3[2];
      }
      else {
        puVar5 = (unsigned int *)*puVar3;
      }
    } while (*(char *)((int)puVar5 + 0x69) == '\0');
  }
  puVar5 = puVar3;
  if (bVar4 != 0) {
    if (puVar3 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar4 = 1;
      goto LAB_8251929c;
    }
    if (*(char *)((int)puVar3 + 0x69) == '\0') {
      puVar5 = (unsigned int *)*puVar3;
      if (*(char *)((int)puVar5 + 0x69) == '\0') {
        puVar2 = (unsigned int *)puVar5[2];
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x69) == '\0') {
          puVar5 = puVar1;
          puVar2 = (unsigned int *)puVar1[2];
        }
      }
      else {
        puVar2 = (unsigned int *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar1 = puVar2, *(char *)((int)puVar1 + 0x69) == '\0' &&
               (puVar5 == (unsigned int *)*puVar1))) {
          puVar5 = puVar1;
          puVar2 = (unsigned int *)puVar1[1];
        }
        if (*(char *)((int)puVar5 + 0x69) == '\0') {
          puVar5 = puVar1;
        }
      }
    }
    else {
      puVar5 = (unsigned int *)puVar3[2];
    }
  }
  if (*(unsigned int *)(param_3 + 0x10) <= (unsigned int)puVar5[4]) {
    fn_82359C18(param_3 + 0x50);
    fn_82230300(param_3 + 0x18,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar5;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_8251929c:
  puVar3 = (unsigned int *)fn_82519678(auStack_30,param_2,bVar4,puVar3,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

