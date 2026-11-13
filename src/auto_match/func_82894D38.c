extern int fn_8265CA20();
extern int fn_8288BAE8();
extern int fn_828935C0();
extern int fn_82893620();


unsigned int * fn_82894D38(unsigned int *param_1,unsigned int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int * apuStack_50;
  
  puVar4 = *(unsigned int **)(param_2 + 4);
  puVar8 = (unsigned int *)(param_3 + 0xc);
  uVar9 = 1;
  uVar5 = param_2;
  if (*(char *)((int)puVar4[1] + 0x4d) == '\0') {
    uVar6 = (unsigned __int64)*puVar8;
    uVar3 = param_4 & 0xff;
    puVar1 = (unsigned int *)puVar4[1];
    do {
      puVar4 = puVar1;
      uVar7 = (unsigned __int64)(unsigned int)puVar4[3];
      if (uVar3 == 0) {
        param_4 = uVar6 - uVar7;
        uVar5 = -(unsigned int)(uVar6 < uVar7);
        uVar9 = uVar5 & 1;
      }
      else {
        uVar9 = -((uVar7 < uVar6) - 1);
      }
      if ((uVar9 & 0xff) == 0) {
        puVar1 = (unsigned int *)puVar4[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar4;
      }
    } while (*(char *)((int)puVar1 + 0x4d) == '\0');
  }
  apuStack_50 = puVar4;
  if ((uVar9 & 0xff) != 0) {
    if (puVar4 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      puVar4 = (unsigned int *)fn_82893620(&apuStack_50,param_2,1,puVar4,param_3);
      uVar2 = *puVar4;
      *(unsigned char *)(param_1 + 1) = 1;
      *param_1 = uVar2;
      return param_1;
    }
    fn_8288BAE8(&apuStack_50,uVar5,param_3,param_4);
  }
  puVar1 = apuStack_50;
  if ((unsigned int)apuStack_50[3] < *puVar8) {
    puVar4 = (unsigned int *)fn_82893620(&apuStack_50,param_2,uVar9,puVar4,param_3);
    uVar2 = *puVar4;
    *(unsigned char *)(param_1 + 1) = 1;
    *param_1 = uVar2;
  }
  else {
    fn_828935C0(param_2 + 0xd,puVar8);
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
  }
  return param_1;
}

