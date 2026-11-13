#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8251CF80();
extern int fn_8258C000();
extern int fn_8260D428();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8258D2B8(unsigned __int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned int ****ppppuVar3;
  unsigned int *puVar4;
  unsigned int **ppuVar5;
  unsigned int *puStack_60;
  unsigned int *apuStack_5c [3];
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int ***apppuStack_40 [4];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  fn_82230110(apppuStack_40,param_1);
  iVar1 = fn_8258C000();
  puStack_60 = *(unsigned int **)(iVar1 + 0x1c4);
  puVar4 = (unsigned int *)(*(unsigned int **)(iVar1 + 0x1c4))[1];
  while (*(char *)((int)puVar4 + 0x2d) == '\0') {
    ppppuVar3 = (unsigned int ****)apppuStack_40[0];
    if (uStack_2c < 0x10) {
      ppppuVar3 = apppuStack_40;
    }
    iVar2 = fn_8260D428(puVar4 + 3,0,puVar4[7],ppppuVar3,uStack_30);
    if (iVar2 < 0) {
      puVar4 = (unsigned int *)puVar4[2];
    }
    else {
      puStack_60 = puVar4;
      puVar4 = (unsigned int *)*puVar4;
    }
  }
  if (puStack_60 != *(unsigned int **)(iVar1 + 0x1c4)) {
    puVar4 = puStack_60 + 3;
    if (0xf < (unsigned int)puStack_60[8]) {
      puVar4 = (unsigned int *)*puVar4;
    }
    iVar2 = fn_8260D428(apppuStack_40,0,uStack_30,puVar4,puStack_60[7]);
    if (-1 < iVar2) {
      ppuVar5 = &puStack_60;
      goto LAB_8258d388;
    }
  }
  apuStack_5c[0] = *(unsigned int **)(iVar1 + 0x1c4);
  ppuVar5 = apuStack_5c;
LAB_8258d388:
  puVar4 = *ppuVar5;
  fn_82230300(apppuStack_40,1,0);
  iVar1 = fn_8258C000();
  if (ZEXT48(puVar4) != (unsigned __int64)*(unsigned int *)(iVar1 + 0x1c4)) {
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    fn_8251CF80(ZEXT48(puVar4) + 0x28,0,&uStack_50);
  }
  return;
}

