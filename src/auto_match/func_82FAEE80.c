void fn_82FAEE80(int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned char cVar2;
  unsigned int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 != *(int *)(param_1 + 0x80)) {
    do {
      cVar2 = (*(int (**)())(**(int **)(iVar3 + 4) + 0x90))(*(int **)(iVar3 + 4));
      if (cVar2 == '\0') {
        piVar1 = *(int **)(iVar3 + 4);
        if (*(short *)(piVar1 + 6) != 0) {
          (*(int (**)())(*piVar1 + 0x38))(piVar1,param_2);
        }
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(param_1 + 0x80));
  }
  return;
}

