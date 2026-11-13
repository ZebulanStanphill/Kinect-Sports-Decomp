#define true 1
extern int fn_827E0250();


unsigned int * fn_827E0580(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  
  iVar4 = fn_827E0250(param_2,param_3);
  puVar1 = *(unsigned int **)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0x44) + iVar4 * 8;
  puVar2 = *(unsigned int **)(*(int *)(param_2 + 0x44) + iVar4 * 8);
  puVar7 = puVar2;
  while( true ) {
    puVar5 = puVar1;
    if (puVar2 != puVar1) {
      puVar5 = (unsigned int *)**(unsigned int **)(iVar3 + 4);
    }
    if (puVar7 == puVar5) goto LAB_827e063c;
    puVar5 = puVar7;
    if (*param_3 <= (unsigned int)puVar7[2]) break;
    puVar7 = (unsigned int *)*puVar7;
  }
  while( true ) {
    puVar6 = puVar1;
    if (puVar2 != puVar1) {
      puVar6 = (unsigned int *)**(unsigned int **)(iVar3 + 4);
    }
    if ((puVar5 == puVar6) || (*param_3 < (unsigned int)puVar5[2])) break;
    puVar5 = (unsigned int *)*puVar5;
  }
  if (puVar7 == puVar5) {
LAB_827e063c:
    puVar5 = *(unsigned int **)(param_2 + 4);
    *param_1 = puVar5;
  }
  else {
    *param_1 = puVar7;
  }
  param_1[1] = puVar5;
  return param_1;
}

