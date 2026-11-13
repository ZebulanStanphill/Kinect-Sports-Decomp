extern int fn_822315A0();
extern int fn_8225F028();
extern int fn_824C0C30();
extern int fn_8265CA20();


unsigned int * fn_823BC870(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char bVar3;
  unsigned int *apuStack_50 [20];
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  bVar3 = 1;
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
    puVar1 = (unsigned int *)puVar2[1];
    do {
      puVar2 = puVar1;
      bVar3 = -(*(unsigned int *)(param_3 + 0xc) < (unsigned int)puVar2[3]) & 1;
      if (bVar3 == 0) {
        puVar1 = (unsigned int *)puVar2[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x19) == '\0');
  }
  apuStack_50[0] = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar3 = 1;
      goto LAB_823bc900;
    }
    fn_8225F028(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(unsigned int *)(param_3 + 0xc) <= (unsigned int)apuStack_50[0][3]) {
    if (*(int *)(param_3 + 0x14) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_823bc900:
  puVar2 = (unsigned int *)fn_824C0C30(apuStack_50,param_2,bVar3,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

