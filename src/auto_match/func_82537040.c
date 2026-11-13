extern unsigned int *auStack_50;
extern int fn_825371C0();
extern int fn_8265CA20();
extern int fn_828647A8();


unsigned int * fn_82537040(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned char auStack_50 [80];
  
  puVar5 = (unsigned int *)(param_3 + 0xc);
  uVar6 = 1;
  puVar3 = *(unsigned int **)(param_2 + 4);
  puVar7 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  while (*(char *)((int)puVar7 + 0x31) == '\0') {
    uVar6 = fn_828647A8(puVar5,puVar7 + 3);
    puVar3 = puVar7;
    if ((uVar6 & 0xff) == 0) {
      puVar7 = (unsigned int *)puVar7[2];
    }
    else {
      puVar7 = (unsigned int *)*puVar7;
    }
  }
  puVar7 = puVar3;
  if ((uVar6 & 0xff) != 0) {
    if (puVar3 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      uVar6 = 1;
      goto LAB_825370c4;
    }
    if (*(char *)((int)puVar3 + 0x31) == '\0') {
      puVar7 = (unsigned int *)*puVar3;
      if (*(char *)((int)puVar7 + 0x31) == '\0') {
        puVar2 = (unsigned int *)puVar7[2];
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x31) == '\0') {
          puVar7 = puVar1;
          puVar2 = (unsigned int *)puVar1[2];
        }
      }
      else {
        puVar2 = (unsigned int *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar1 = puVar2, *(char *)((int)puVar1 + 0x31) == '\0' &&
               (puVar7 == (unsigned int *)*puVar1))) {
          puVar7 = puVar1;
          puVar2 = (unsigned int *)puVar1[1];
        }
        if (*(char *)((int)puVar7 + 0x31) == '\0') {
          puVar7 = puVar1;
        }
      }
    }
    else {
      puVar7 = (unsigned int *)puVar3[2];
    }
  }
  cVar4 = fn_828647A8(puVar7 + 3,puVar5);
  if (cVar4 == '\0') {
    (**(int (***)())*puVar5)(puVar5,0);
    fn_8265CA20(param_3);
    *param_1 = puVar7;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_825370c4:
  puVar3 = (unsigned int *)fn_825371C0(auStack_50,param_2,uVar6,puVar3,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

