extern int fn_8267B890();
extern unsigned int lbl_831E7E64;


int * fn_8267E0E0(int *param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  
  if ((param_3 & 0xffffffff) < 0x21) {
    piVar1 = param_1 + 1;
  }
  else {
    piVar1 = (int *)fn_8267B890(lbl_831E7E64,(param_3 & 0x3fffffff) << 2,0);
  }
  *param_1 = (int)piVar1;
  if ((param_3 & 0xffffffff) != 0) {
    iVar3 = 0;
    do {
      uVar2 = (**(int (***)())(**(int **)(iVar3 + param_2) + 8))();
      param_3 = param_3 - 1;
      *(unsigned int *)(iVar3 + *param_1) = uVar2;
      iVar3 = iVar3 + 4;
    } while (param_3 != 0);
  }
  return param_1;
}

