extern int fn_8260D428();
extern unsigned int lbl_8329EA40;
extern unsigned int lbl_8329EA50;
extern unsigned int lbl_8329EA54;


unsigned int * fn_8251B708(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int **ppuVar4;
  unsigned int *puVar5;
  unsigned int *puStack_40;
  unsigned int *apuStack_3c [15];
  
  puVar5 = *(unsigned int **)(param_2 + 4);
  puVar3 = (unsigned int *)(*(unsigned int **)(param_2 + 4))[1];
  while (*(char *)((int)puVar3 + 0x35) == '\0') {
    uVar2 = 0xffffffff8329ea40;
    if (0xf < lbl_8329EA54) {
      uVar2 = (unsigned __int64)lbl_8329EA40;
    }
    iVar1 = fn_8260D428(puVar3 + 3,0,puVar3[7],uVar2,lbl_8329EA50);
    if (iVar1 < 0) {
      puVar3 = (unsigned int *)puVar3[2];
    }
    else {
      puVar5 = puVar3;
      puVar3 = (unsigned int *)*puVar3;
    }
  }
  puStack_40 = puVar5;
  if (puVar5 != *(unsigned int **)(param_2 + 4)) {
    puVar3 = puVar5 + 3;
    if (0xf < (unsigned int)puVar5[8]) {
      puVar3 = (unsigned int *)*puVar3;
    }
    iVar1 = fn_8260D428(0xffffffff8329ea40,0,lbl_8329EA50,puVar3,puVar5[7]);
    if (-1 < iVar1) {
      ppuVar4 = &puStack_40;
      goto LAB_8251b7d8;
    }
  }
  ppuVar4 = apuStack_3c;
  apuStack_3c[0] = *(unsigned int **)(param_2 + 4);
LAB_8251b7d8:
  *param_1 = *ppuVar4;
  return param_1;
}

