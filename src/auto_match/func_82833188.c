typedef unsigned char bool;
extern int fn_8265CA20();
extern int fn_82832430();
extern int fn_82832FC0();


unsigned int * fn_82833188(unsigned int *param_1,int param_2,int param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char bVar6;
  bool bVar7;
  unsigned int *apuStack_50 [20];
  
  puVar2 = *(unsigned int **)(param_2 + 4);
  bVar6 = 1;
  if (*(char *)((int)puVar2[1] + 0x1d) == '\0') {
    uVar5 = *(unsigned int *)(param_3 + 0x10);
    puVar1 = (unsigned int *)puVar2[1];
    do {
      puVar2 = puVar1;
      uVar4 = puVar2[4];
      if (param_4 == '\0') {
        if (uVar5 == uVar4) {
          uVar4 = *(unsigned int *)(param_3 + 0x14);
          uVar3 = puVar2[5];
          if (uVar4 == uVar3) {
            uVar4 = *(unsigned int *)(param_3 + 0xc);
            uVar3 = puVar2[3];
          }
          bVar7 = uVar3 <= uVar4;
        }
        else {
          bVar7 = uVar4 <= uVar5;
        }
        bVar6 = -!bVar7;
      }
      else if (uVar4 == uVar5) {
        uVar4 = puVar2[5];
        uVar3 = *(unsigned int *)(param_3 + 0x14);
        if (uVar4 == uVar3) {
          uVar4 = puVar2[3];
          uVar3 = *(unsigned int *)(param_3 + 0xc);
        }
        bVar6 = uVar3 <= uVar4;
      }
      else {
        bVar6 = uVar5 <= uVar4;
      }
      bVar6 = bVar6 & 1;
      if (bVar6 == 0) {
        puVar1 = (unsigned int *)puVar2[2];
      }
      else {
        puVar1 = (unsigned int *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x1d) == '\0');
  }
  apuStack_50[0] = puVar2;
  if (bVar6 != 0) {
    if (puVar2 == (unsigned int *)**(unsigned int **)(param_2 + 4)) {
      bVar6 = 1;
      goto LAB_82833294;
    }
    fn_82832430(apuStack_50);
  }
  puVar1 = apuStack_50[0];
  if (apuStack_50[0][4] == *(unsigned int *)(param_3 + 0x10)) {
    uVar5 = apuStack_50[0][5];
    uVar4 = *(unsigned int *)(param_3 + 0x14);
    if (uVar5 == uVar4) {
      uVar5 = apuStack_50[0][3];
      uVar4 = *(unsigned int *)(param_3 + 0xc);
    }
    bVar7 = uVar4 <= uVar5;
  }
  else {
    bVar7 = *(unsigned int *)(param_3 + 0x10) <= (unsigned int)apuStack_50[0][4];
  }
  if (bVar7) {
    fn_8265CA20(param_3);
    *param_1 = puVar1;
    *(unsigned char *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_82833294:
  puVar2 = (unsigned int *)fn_82832FC0(apuStack_50,param_2,bVar6,puVar2,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar2;
  return param_1;
}

