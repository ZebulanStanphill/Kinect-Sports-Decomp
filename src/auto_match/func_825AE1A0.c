extern unsigned int *auStack_50;
extern int fn_825AE4F0();
extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828B5650();


unsigned int * fn_825AE1A0(unsigned int *param_1,int param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char cVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned char auStack_50 [80];
  
  lVar5 = param_3 + 0xc;
  uVar6 = 1;
  puVar3 = *(unsigned int **)(param_2 + 4);
  puVar7 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  while (*(char *)((int)puVar7 + 0x19) == '\0') {
    uVar6 = fn_828B5650(lVar5,puVar7 + 3);
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
      goto LAB_825ae224;
    }
    if (*(char *)((int)puVar3 + 0x19) == '\0') {
      puVar7 = (unsigned int *)*puVar3;
      if (*(char *)((int)puVar7 + 0x19) == '\0') {
        puVar2 = (unsigned int *)puVar7[2];
        while (puVar1 = puVar2, *(char *)((int)puVar1 + 0x19) == '\0') {
          puVar7 = puVar1;
          puVar2 = (unsigned int *)puVar1[2];
        }
      }
      else {
        puVar2 = (unsigned int *)puVar3[1];
        puVar7 = puVar3;
        while ((puVar1 = puVar2, *(char *)((int)puVar1 + 0x19) == '\0' &&
               (puVar7 == (unsigned int *)*puVar1))) {
          puVar7 = puVar1;
          puVar2 = (unsigned int *)puVar1[1];
        }
        if (*(char *)((int)puVar7 + 0x19) == '\0') {
          puVar7 = puVar1;
        }
      }
    }
    else {
      puVar7 = (unsigned int *)puVar3[2];
    }
  }
  cVar4 = fn_828B5650(puVar7 + 3,lVar5);
  if (cVar4 == '\0') {
    fn_828B55B0(lVar5);
    fn_8265CA20(param_3);
    *param_1 = puVar7;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_825ae224:
  puVar3 = (unsigned int *)fn_825AE4F0(auStack_50,param_2,uVar6,puVar3,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

