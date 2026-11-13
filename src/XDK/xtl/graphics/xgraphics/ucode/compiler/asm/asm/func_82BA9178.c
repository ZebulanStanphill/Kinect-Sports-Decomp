typedef unsigned char bool;
extern unsigned char lbl_820E7F98[];


int fn_82BA9178(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 1;
  iVar2 = (*(int (**)())(*param_1 + 4))(param_1);
  if (iVar2 >= 1) {
    piVar4 = param_1 + 0x3b;
    do {
      if (param_2 == *(int *)(*piVar4 + 0x38)) {
        { unsigned char c=(lbl_820E7F98+6)[*(int *)(*piVar4+0x50)*12]; bVar1=c != 0 && c <= 4; }
        if (!bVar1) {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      iVar2 = (*(int (**)())(*param_1 + 4))(param_1);
    } while (iVar3 <= iVar2);
  }
  return 0;
}

