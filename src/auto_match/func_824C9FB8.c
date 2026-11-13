#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8260D428();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


__int64 fn_824C9FB8(int param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned int ****ppppuVar3;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  unsigned int *puStack_60;
  unsigned int *apuStack_5c [3];
  unsigned int ***apppuStack_50 [4];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  fn_82230110(apppuStack_50);
  puStack_60 = *(unsigned int **)(param_1 + 0x48);
  puVar4 = (unsigned int *)(*(unsigned int **)(param_1 + 0x48))[1];
  while (*(char *)((int)puVar4 + 0xb9) == '\0') {
    ppppuVar3 = (unsigned int ****)apppuStack_50[0];
    if (uStack_3c < 0x10) {
      ppppuVar3 = apppuStack_50;
    }
    iVar2 = fn_8260D428(puVar4 + 4,0,puVar4[8],ppppuVar3,uStack_40);
    if (iVar2 < 0) {
      puVar4 = (unsigned int *)puVar4[2];
    }
    else {
      puStack_60 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  if (puStack_60 != *(unsigned int **)(param_1 + 0x48)) {
    puVar4 = puStack_60 + 4;
    if (0xf < (unsigned int)puStack_60[9]) {
      puVar4 = (unsigned int *)*puVar4;
    }
    iVar2 = fn_8260D428(apppuStack_50,0,uStack_40,puVar4,puStack_60[8]);
    if (-1 < iVar2) {
      ppuVar5 = &puStack_60;
      goto LAB_824ca084;
    }
  }
  apuStack_5c[0] = *(unsigned int **)(param_1 + 0x48);
  ppuVar5 = apuStack_5c;
LAB_824ca084:
  puVar4 = *ppuVar5;
  fn_82230300(apppuStack_50,1,0);
  lVar1 = ZEXT48(puVar4) + 0x30;
  if (ZEXT48(puVar4) == (unsigned __int64)*(unsigned int *)(param_1 + 0x48)) {
    lVar1 = 0;
  }
  return lVar1;
}

