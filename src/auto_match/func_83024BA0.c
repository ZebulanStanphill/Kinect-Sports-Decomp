void fn_83024BA0(int param_1)

{
  int *piVar1;
  unsigned int bVar2;
  int lVar3;
  unsigned char *pbVar4;
  
  if (*(int *)(param_1 + 0x74) == 1) {
    pbVar4 = (unsigned char *)(param_1 + 0x2c);
    lVar3 = 4;
    do {
      if (*(int *)(param_1 + 0x74) == 1) {
        piVar1 = *(int **)(pbVar4 + -8);
        if (piVar1 != (int *)0x0) {
          bVar2 = *(unsigned char *)(param_1 + 0x6c) | *pbVar4;
          if ((bVar2 & 0x80) == 0) {
            (*(void (**)(int *, int))(*piVar1 + 0x10))(piVar1,param_1 + 0x100);
          }
          else if ((bVar2 & 0x40) == 0) {
            (*(void (**)(int *))(*piVar1 + 8))(piVar1);
          }
          *pbVar4 = *pbVar4 >> 1 & 0x40 | *pbVar4 & 0xbf;
        }
      }
      lVar3 = lVar3 + -1;
      pbVar4 = pbVar4 + 0x14;
    } while (lVar3 != 0);
  }
  return;
}

