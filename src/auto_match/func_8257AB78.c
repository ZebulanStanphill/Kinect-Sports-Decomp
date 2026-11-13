#define true 1
extern int fn_8257AC80();
extern int fn_8260D428();


int * fn_8257AB78(int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int **ppuVar7;
  unsigned int *puStack_40;
  unsigned int *apuStack_3c [1];
  
  iVar2 = fn_8257AC80(param_2,param_3);
  puVar1 = *(unsigned int **)(iVar2 * 8 + *(int *)(param_2 + 0x10));
  while( true ) {
    puVar4 = *(unsigned int **)(param_2 + 4);
    piVar5 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x10));
    puVar6 = puVar4;
    if ((unsigned int *)*piVar5 != puVar4) {
      puVar6 = *(unsigned int **)piVar5[1];
    }
    if (puVar1 == puVar6) {
      *param_1 = (int)puVar4;
      return param_1;
    }
    puVar4 = puVar1 + 2;
    puVar6 = param_3;
    if (0xf < (unsigned int)param_3[5]) {
      puVar6 = (unsigned int *)*param_3;
    }
    puStack_40 = puVar1;
    iVar3 = fn_8260D428(puVar4,0,puVar1[6],puVar6,param_3[4]);
    if (-1 < iVar3) break;
    puVar1 = (unsigned int *)*puVar1;
  }
  if (0xf < (unsigned int)puVar1[7]) {
    puVar4 = (unsigned int *)*puVar4;
  }
  iVar2 = fn_8260D428(param_3,0,param_3[4],puVar4,puVar1[6]);
  if (iVar2 < 0) {
    ppuVar7 = apuStack_3c;
    apuStack_3c[0] = *(unsigned int **)(param_2 + 4);
  }
  else {
    ppuVar7 = &puStack_40;
  }
  *param_1 = (int)*ppuVar7;
  return param_1;
}

