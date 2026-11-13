extern unsigned int *auStack_30;
extern int fn_8265CA20();
extern int fn_82828828();


unsigned int * fn_82273600(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char bVar4;
  unsigned char auStack_30 [48];
  
  puVar3 = *(unsigned int **)(param_2 + 4);
  bVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (unsigned int *)puVar3[1];
    do {
      puVar3 = puVar1;
      bVar4 = -(*(unsigned int *)(param_3 + 0xc) < (unsigned int)puVar3[3]) & 1;
      if (bVar4 == 0) {
        puVar1 = (unsigned int *)puVar3[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar3;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  if (bVar4 != 0) {
    if (puVar3 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar4 = 1;
      goto LAB_82273684;
    }
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar1 = (unsigned int *)*puVar3;
      if (*(char *)((int)puVar1 + 0x11) == '\0') {
        puVar2 = (unsigned int *)puVar1[2];
        puVar3 = puVar1;
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x11) == '\0') {
          puVar3 = puVar1;
          puVar2 = (unsigned int *)puVar1[2];
        }
      }
      else {
        puVar1 = (unsigned int *)puVar3[1];
        while ((puVar2 = puVar1, *(char *)((int)puVar2 + 0x11) == '\0' &&
               (puVar3 == (unsigned int *)*puVar2))) {
          puVar3 = puVar2;
          puVar1 = (unsigned int *)puVar2[1];
        }
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          puVar3 = puVar2;
        }
      }
    }
    else {
      puVar3 = (unsigned int *)puVar3[2];
    }
  }
  if (*(unsigned int *)(param_3 + 0xc) <= (unsigned int)puVar3[3]) {
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82273684:
  puVar3 = (unsigned int *)fn_82828828(auStack_30,param_2,bVar4);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

