typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_830096B0(int *param_1,int *param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if ((*(short *)(param_1 + 6) != 0) || (bVar1 = false, *(short *)((int)param_1 + 0x1a) != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (*(char *)((int)param_2 + 0x15) != '\0') {
      (**(int (***)())(*param_1 + 0xa0))(param_1,*param_2 == 2);
    }
    *(unsigned char *)(param_2 + 5) = 1;
    iVar3 = param_1[0x12];
    if (iVar3 != param_1[0x13]) {
      do {
        uVar2 = (**(int (***)())(**(int **)(iVar3 + 4) + 0x1c))(*(int **)(iVar3 + 4),param_2);
        if ((int)uVar2 != 1) {
          return uVar2;
        }
        iVar3 = iVar3 + 8;
      } while (iVar3 != param_1[0x13]);
      return uVar2;
    }
  }
  return 1;
}

