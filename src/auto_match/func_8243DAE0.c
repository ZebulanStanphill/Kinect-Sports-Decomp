void fn_8243DAE0(int *param_1,int param_2,unsigned int *param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  
  puVar9 = *(unsigned int **)(param_2 + 4);
  puVar8 = puVar9;
  if (*(char *)((int)puVar9[1] + 0x15) == '\0') {
    puVar4 = (unsigned int *)puVar9[1];
    do {
      pbVar5 = (unsigned char *)puVar4[3];
      pbVar7 = (unsigned char *)*param_3;
      pbVar6 = pbVar5;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar7;
        if (bVar1 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while ((unsigned int)bVar1 == (unsigned int)bVar2);
      if ((int)((unsigned int)bVar1 - (unsigned int)bVar2) < 0) {
        puVar3 = (unsigned int *)puVar4[2];
      }
      else {
        pbVar7 = (unsigned char *)*param_3;
        if (*(char *)((int)puVar8 + 0x15) != '\0') {
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar5;
            if (bVar1 == 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar7 = pbVar7 + 1;
          } while ((unsigned int)bVar1 == (unsigned int)bVar2);
          if ((int)((unsigned int)bVar1 - (unsigned int)bVar2) < 0) {
            puVar8 = puVar4;
          }
        }
        puVar3 = (unsigned int *)*puVar4;
        puVar9 = puVar4;
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar8 + 0x15) == '\0') {
    puVar4 = (unsigned int *)*puVar8;
  }
  else {
    puVar4 = *(unsigned int **)(*(int *)(param_2 + 4) + 4);
  }
  if (*(char *)((int)puVar4 + 0x15) == '\0') {
    do {
      pbVar5 = (unsigned char *)puVar4[3];
      pbVar7 = (unsigned char *)*param_3;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar5;
        if (bVar1 == 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar5 = pbVar5 + 1;
      } while ((unsigned int)bVar1 == (unsigned int)bVar2);
      if ((int)((unsigned int)bVar1 - (unsigned int)bVar2) < 0) {
        puVar3 = (unsigned int *)*puVar4;
        puVar8 = puVar4;
      }
      else {
        puVar3 = (unsigned int *)puVar4[2];
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  *param_1 = (int)puVar9;
  param_1[1] = (int)puVar8;
  return;
}

