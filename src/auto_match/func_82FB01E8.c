typedef unsigned char bool;
typedef void (*notify)(void *,unsigned char);


int fn_82FB01E8(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int uVar3;
  unsigned int iVar4;
  
  uVar3 = 1;
  bVar2 = (*(short *)(param_1 + 6) != 0 || *(short *)((int)param_1 + 0x1a) != 0);
  if (bVar2) {
    if (*(char *)((int)param_2 + 0x15) != '\0') {
      { unsigned char n=0; if (*param_2==2) n=1;
      (*(notify *)(*param_1 + 0xa0))(param_1,n); }
    }
    iVar4 = param_1[0x1f];
    if (iVar4 != (unsigned int)param_1[0x20]) {
      do {
        piVar1 = *(int **)(iVar4 + 4);
        if (((*(char *)(param_2 + 5) == '\0') || (piVar1[5] == 0)) &&
           (uVar3 = (*(int (**)())(*piVar1 + 0x1c))(piVar1,param_2), (int)uVar3 != 1)) {
          return uVar3;
        }
        iVar4 = iVar4 + 8;
      } while (iVar4 != (unsigned int)param_1[0x20]);
    }
  }
  return uVar3;
}

