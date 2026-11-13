extern int fn_825188C8();
extern int fn_82519968();
extern int fn_8265CA20();
extern int fn_82830D60();


unsigned int * fn_82519858(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char bVar3;
  unsigned int *apuStack_50 [20];
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  bVar3 = 1;
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x21) == '\0');
  }
  apuStack_50[0] = puVar2;
  if (bVar3 != 0) {
    if (puVar2 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar3 = 1;
      goto LAB_825198e8;
    }
    fn_82830D60(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (*(unsigned int *)(param_3 + 0xc) <= (unsigned int)apuStack_50[0][3]) {
    fn_825188C8(apuStack_50,param_3 + 0x10,**(unsigned int **)(param_3 + 0x14));
    fn_8265CA20(*(unsigned int *)(param_3 + 0x14));
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_825198e8:
  puVar2 = (unsigned int *)fn_82519968(apuStack_50,param_2,bVar3,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

