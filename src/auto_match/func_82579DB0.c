#define true 1
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8257AC80();
extern int fn_8260D428();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned int * fn_82579DB0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int ****ppppuVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int **ppuVar8;
  unsigned int *puStack_60;
  unsigned int *apuStack_5c [3];
  unsigned int ***apppuStack_50 [4];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  fn_82230110(apppuStack_50);
  iVar1 = fn_8257AC80(param_1 + 0x20,apppuStack_50);
  puVar3 = *(unsigned int **)(iVar1 * 8 + *(int *)(param_1 + 0x30));
  while( true ) {
    puVar5 = *(unsigned int **)(param_1 + 0x24);
    piVar6 = (int *)(iVar1 * 8 + *(int *)(param_1 + 0x30));
    puVar7 = puVar5;
    if ((unsigned int *)*piVar6 != puVar5) {
      puVar7 = *(unsigned int **)piVar6[1];
    }
    puStack_60 = puVar3;
    if (puVar3 == puVar7) goto LAB_82579ea8;
    puVar5 = puVar3 + 2;
    ppppuVar4 = (unsigned int ****)apppuStack_50[0];
    if (uStack_3c < 0x10) {
      ppppuVar4 = apppuStack_50;
    }
    iVar2 = fn_8260D428(puVar5,0,puVar3[6],ppppuVar4,uStack_40);
    if (-1 < iVar2) break;
    puVar3 = (unsigned int *)*puVar3;
  }
  if (0xf < (unsigned int)puVar3[7]) {
    puVar5 = (unsigned int *)*puVar5;
  }
  iVar1 = fn_8260D428(apppuStack_50,0,uStack_40,puVar5,puVar3[6]);
  if (iVar1 < 0) {
    apuStack_5c[0] = *(unsigned int **)(param_1 + 0x24);
    ppuVar8 = apuStack_5c;
  }
  else {
    ppuVar8 = &puStack_60;
  }
  puVar5 = *ppuVar8;
LAB_82579ea8:
  fn_82230300(apppuStack_50,1,0);
  if (puVar5 == *(unsigned int **)(param_1 + 0x24)) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3 = puVar5 + 9;
    if (0xf < (unsigned int)puVar5[0xe]) {
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  return puVar3;
}

