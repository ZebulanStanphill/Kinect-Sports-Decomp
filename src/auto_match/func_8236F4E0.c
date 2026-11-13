extern int fn_822AAF60();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B3784;


void fn_8236F4E0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned char **ppuStack_40;
  int iStack_3c;
  unsigned char ***pppuStack_30;
  
  piVar1 = *(int **)(param_1 + 8);
  iVar3 = 0;
  if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
    iVar2 = 0;
    do {
      pppuStack_30 = &ppuStack_40;
      ppuStack_40 = &lbl_821B3784;
      iStack_3c = param_1;
      fn_822AAF60(*(unsigned int *)(*piVar1 + iVar2),&ppuStack_40);
      piVar1 = *(int **)(param_1 + 8);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < piVar1[1] - *piVar1 >> 2);
  }
  return;
}

