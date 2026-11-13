extern unsigned int fStack_14;
extern unsigned int iStack_18;
extern unsigned int uStack_10;


void fn_82511558(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  unsigned int param_6)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int **ppuVar3;
  unsigned int *puVar4;
  unsigned int *puStack_20;
  unsigned int *puStack_1c;
  int iStack_18;
  float fStack_14;
  unsigned int uStack_10;
  
  fStack_14 = (float)param_1;
  puVar1 = (unsigned int *)(*(unsigned int **)(param_5 + 4))[1];
  puStack_20 = *(unsigned int **)(param_5 + 4);
  while (puVar4 = puVar1, *(char *)((int)puVar4 + 0x15) == '\0') {
    if ((unsigned int)puVar4[3] < (unsigned int)*(unsigned short *)(param_2 + 0xc)) {
      puVar1 = (unsigned int *)puVar4[2];
    }
    else {
      puVar1 = (unsigned int *)*puVar4;
      puStack_20 = puVar4;
    }
  }
  puVar1 = *(unsigned int **)(param_5 + 4);
  if ((puStack_20 == puVar1) || ((unsigned int)*(unsigned short *)(param_2 + 0xc) < (unsigned int)puStack_20[3])) {
    ppuVar3 = &puStack_1c;
    puStack_1c = puVar1;
  }
  else {
    ppuVar3 = &puStack_20;
  }
  if (*ppuVar3 != puVar1) {
    piVar2 = (int *)(*ppuVar3)[4];
    iStack_18 = param_2;
    uStack_10 = param_6;
    (**(int (***)())(*piVar2 + 4))(piVar2,&iStack_18);
  }
  return;
}

