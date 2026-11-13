extern int fn_82230300();
extern int fn_822C7D48();
extern int fn_822C7F30();
extern int fn_8260D428();
extern int fn_8265CA20();


unsigned int * fn_822C7BF0(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *apuStack_50 [20];
  
  puVar5 = (unsigned int *)(param_3 + 0xc);
  uVar4 = 1;
  puVar1 = *(unsigned int **)(param_2 + 4);
  puVar6 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  while (*(char *)((int)puVar6 + 0x45) == '\0') {
    puVar1 = puVar6 + 3;
    if (0xf < (unsigned int)puVar6[8]) {
      puVar1 = (unsigned int *)*puVar1;
    }
    uVar4 = fn_8260D428(puVar5,0,*(unsigned int *)(param_3 + 0x1c),puVar1,puVar6[7]);
    uVar4 = (uVar4 & 0xffffffff) >> 0x1f;
    puVar1 = puVar6;
    if (uVar4 == 0) {
      puVar6 = (unsigned int *)puVar6[2];
    }
    else {
      puVar6 = (unsigned int *)*puVar6;
    }
  }
  apuStack_50[0] = puVar1;
  if (uVar4 != 0) {
    if (puVar1 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      uVar4 = 1;
      goto LAB_822c7c98;
    }
    fn_822C7F30(apuStack_50);
  }
  puVar6 = apuStack_50[0];
  puVar3 = puVar5;
  if (0xf < *(unsigned int *)(param_3 + 0x20)) {
    puVar3 = (unsigned int *)*puVar5;
  }
  iVar2 = fn_8260D428(apuStack_50[0] + 3,0,apuStack_50[0][7],puVar3,*(unsigned int *)(param_3 + 0x1c)
                      );
  if (-1 < iVar2) {
    fn_82230300(param_3 + 0x28,1,0);
    fn_82230300(puVar5,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar6;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_822c7c98:
  puVar1 = (unsigned int *)fn_822C7D48(apuStack_50,param_2,uVar4,puVar1,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar1;
  return param_1;
}

