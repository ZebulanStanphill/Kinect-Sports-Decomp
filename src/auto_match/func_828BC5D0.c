extern int fn_8260D428();
extern int fn_8265CA20();
extern int fn_828A5760();
extern int fn_828BA968();
extern int fn_828BBD90();


unsigned int * fn_828BC5D0(unsigned int *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int * apuStack_60;
  
  puVar8 = (unsigned int *)(param_3 + 0xc);
  puVar3 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  uVar7 = 1;
  cVar1 = *(char *)((int)puVar3 + 0x31);
  puVar6 = *(unsigned int **)(param_2 + 4);
  while (cVar1 == '\0') {
    if (param_4 == '\0') {
      puVar6 = puVar3 + 3;
      if (0xf < (unsigned int)puVar3[8]) {
        puVar6 = (unsigned int *)*puVar6;
      }
      uVar7 = fn_8260D428(puVar8,0,*(unsigned int *)(param_3 + 0x1c),puVar6,puVar3[7]);
      uVar7 = (uVar7 & 0xffffffff) >> 0x1f;
    }
    else {
      puVar6 = puVar8;
      if (0xf < *(unsigned int *)(param_3 + 0x20)) {
        puVar6 = (unsigned int *)*puVar8;
      }
      uVar7 = fn_8260D428(puVar3 + 3,0,puVar3[7],puVar6,*(unsigned int *)(param_3 + 0x1c));
      uVar7 = (uVar7 & 0xffffffff) >> 0x1f ^ 1;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned int *)puVar3[2];
    }
    else {
      puVar5 = (unsigned int *)*puVar3;
    }
    puVar6 = puVar3;
    puVar3 = puVar5;
    cVar1 = *(char *)((int)puVar5 + 0x31);
  }
  apuStack_60 = puVar6;
  if (uVar7 != 0) {
    if (puVar6 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      puVar3 = (unsigned int *)fn_828BBD90(&apuStack_60,param_2,1,puVar6,param_3);
      uVar2 = *puVar3;
      *(unsigned char *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_828BA968(&apuStack_60);
  }
  puVar3 = apuStack_60;
  puVar5 = puVar8;
  if (0xf < *(unsigned int *)(param_3 + 0x20)) {
    puVar5 = (unsigned int *)*puVar8;
  }
  iVar4 = fn_8260D428(apuStack_60 + 3,0,apuStack_60[7],puVar5,*(unsigned int *)(param_3 + 0x1c)
                      );
  if (iVar4 < 0) {
    puVar3 = (unsigned int *)fn_828BBD90(&apuStack_60,param_2,uVar7,puVar6,param_3);
    uVar2 = *puVar3;
    *(unsigned char *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_828A5760(param_2 + 0xd,puVar8);
    fn_8265CA20(param_3);
    *param_1 = puVar3;
    *(unsigned char *)(param_1 + 1) = 0;
  }
  return param_1;
}

