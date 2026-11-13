extern int fn_82230040();
extern int fn_82273208();
extern int fn_82273758();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_54;


unsigned int * fn_822734A0(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char bVar6;
  unsigned int *apuStack_60 [2];
  unsigned char **ppuStack_58;
  unsigned int uStack_54;
  
  puVar4 = (unsigned int *)fn_8265C9E0(0x70);
  if (puVar4 == (unsigned int *)0x0) {
    uStack_54 = 0;
    ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_58);
  }
  puVar5 = puVar4 + 4;
  *puVar4 = *(unsigned int *)(param_2 + 4);
  puVar4[1] = *(unsigned int *)(param_2 + 4);
  puVar4[2] = *(unsigned int *)(param_2 + 4);
  *(unsigned char *)(puVar4 + 0x18) = 0;
  *(unsigned char *)((int)puVar4 + 0x61) = 0;
  if (puVar5 != (unsigned int *)0x0) {
    *puVar5 = *param_3;
    fn_82F68CC0(puVar4 + 8,param_3 + 4,0x40);
  }
  puVar1 = *(unsigned int **)(param_2 + 4);
  bVar6 = 1;
  if (*(char *)((int)puVar1[1] + 0x61) == '\0') {
    puVar2 = (unsigned int *)puVar1[1];
    do {
      puVar1 = puVar2;
      bVar6 = -(*puVar5 < (unsigned int)puVar1[4]) & 1;
      if (bVar6 == 0) {
        puVar2 = (unsigned int *)puVar1[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar1;
      }
    } while (*(char *)((int)puVar2 + 0x61) == '\0');
  }
  apuStack_60[0] = puVar1;
  if (bVar6 != 0) {
    if (puVar1 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar6 = 1;
      goto LAB_82273584;
    }
    fn_82273208(apuStack_60);
  }
  puVar2 = apuStack_60[0];
  if (*puVar5 <= (unsigned int)apuStack_60[0][4]) {
    fn_8265CA20(puVar4);
    *param_1 = puVar2;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82273584:
  puVar4 = (unsigned int *)fn_82273758(apuStack_60,param_2,bVar6,puVar1,puVar4);
  uVar3 = *puVar4;
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = uVar3;
  return param_1;
}

