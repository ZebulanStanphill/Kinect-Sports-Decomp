extern unsigned int *auStack_50;
extern int fn_82230300();
extern int fn_824A32F8();
extern int fn_8260D428();
extern int fn_8265CA20();


unsigned int * fn_824A3140(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned char auStack_50 [80];
  
  puVar6 = (unsigned int *)(param_3 + 0xc);
  uVar5 = 1;
  puVar2 = *(unsigned int **)(param_2 + 4);
  puVar7 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  while (*(char *)((int)puVar7 + 0x31) == '\0') {
    puVar2 = puVar7 + 3;
    if (0xf < (unsigned int)puVar7[8]) {
      puVar2 = (unsigned int *)*puVar2;
    }
    uVar5 = fn_8260D428(puVar6,0,*(unsigned int *)(param_3 + 0x1c),puVar2,puVar7[7]);
    uVar5 = (uVar5 & 0xffffffff) >> 0x1f;
    puVar2 = puVar7;
    if (uVar5 == 0) {
      puVar7 = (unsigned int *)puVar7[2];
    }
    else {
      puVar7 = (unsigned int *)*puVar7;
    }
  }
  puVar7 = puVar2;
  if (uVar5 != 0) {
    if (puVar2 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      uVar5 = 1;
      goto LAB_824a31e0;
    }
    if (*(char *)((int)puVar2 + 0x31) == '\0') {
      puVar7 = (unsigned int *)*puVar2;
      if (*(char *)((int)puVar7 + 0x31) == '\0') {
        puVar4 = (unsigned int *)puVar7[2];
        while (puVar1 = puVar4, *(char *)((int)puVar1 + 0x31) == '\0') {
          puVar7 = puVar1;
          puVar4 = (unsigned int *)puVar1[2];
        }
      }
      else {
        puVar4 = (unsigned int *)puVar2[1];
        puVar7 = puVar2;
        while ((puVar1 = puVar4, *(char *)((int)puVar1 + 0x31) == '\0' &&
               (puVar7 == (unsigned int *)*puVar1))) {
          puVar7 = puVar1;
          puVar4 = (unsigned int *)puVar1[1];
        }
        if (*(char *)((int)puVar7 + 0x31) == '\0') {
          puVar7 = puVar1;
        }
      }
    }
    else {
      puVar7 = (unsigned int *)puVar2[2];
    }
  }
  puVar4 = puVar6;
  if (0xf < *(unsigned int *)(param_3 + 0x20)) {
    puVar4 = (unsigned int *)*puVar6;
  }
  iVar3 = fn_8260D428(puVar7 + 3,0,puVar7[7],puVar4,*(unsigned int *)(param_3 + 0x1c));
  if (-1 < iVar3) {
    fn_82230300(puVar6,1,0);
    fn_8265CA20(param_3);
    *param_1 = puVar7;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_824a31e0:
  puVar2 = (unsigned int *)fn_824A32F8(auStack_50,param_2,uVar5,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

