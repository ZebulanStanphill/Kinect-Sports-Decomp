extern int fn_8265CA20();
extern int fn_828887B0();
extern int fn_82888C30();


unsigned int * fn_82889350(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int * apuStack_50;
  
  puVar4 = *(unsigned int **)(param_2 + 4);
  uVar8 = 1;
  uVar5 = param_2;
  if (*(char *)((int)puVar4[1] + 0x61) == '\0') {
    uVar6 = (unsigned __int64)*(unsigned short *)(param_3 + 0x10);
    uVar3 = param_4 & 0xff;
    puVar1 = (unsigned int *)puVar4[1];
    do {
      puVar4 = puVar1;
      uVar7 = (unsigned __int64)*(unsigned short *)(puVar4 + 4);
      if (uVar3 == 0) {
        param_4 = uVar6 - uVar7;
        uVar5 = -(unsigned int)(uVar6 < uVar7);
        uVar8 = uVar5 & 1;
      }
      else {
        uVar8 = -((uVar7 < uVar6) - 1);
      }
      if ((uVar8 & 0xff) == 0) {
        puVar1 = (unsigned int *)puVar4[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x61) == '\0');
  }
  apuStack_50 = puVar4;
  if ((uVar8 & 0xff) != 0) {
    if (puVar4 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      puVar4 = (unsigned int *)fn_82888C30(&apuStack_50,param_2,1,puVar4,param_3);
      uVar2 = *puVar4;
      *(unsigned char *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_828887B0(&apuStack_50,uVar5,param_3,param_4);
  }
  puVar1 = apuStack_50;
  if (*(unsigned short *)(apuStack_50 + 4) < *(unsigned short *)(param_3 + 0x10)) {
    puVar4 = (unsigned int *)fn_82888C30(&apuStack_50,param_2,uVar8,puVar4,param_3);
    uVar2 = *puVar4;
    *(unsigned char *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    if (*(int *)(param_3 + 0x34) != 0) {
      fn_8265CA20();
    }
    *(unsigned int *)(param_3 + 0x34) = 0;
    *(unsigned int *)(param_3 + 0x38) = 0;
    *(unsigned int *)(param_3 + 0x3c) = 0;
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
  }
  return param_1;
}

