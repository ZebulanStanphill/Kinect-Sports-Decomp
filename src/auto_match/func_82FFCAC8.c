extern int fn_82FFBD98();
extern int fn_82FFF990();
extern int fn_8302B618();


void fn_82FFCAC8(__int64 param_1,int *param_2,char param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2[7] != 0) {
    if (param_3 == '\0') {
      iVar2 = param_2[7] + -1;
    }
    else {
      iVar2 = 0;
    }
    param_2[7] = iVar2;
    if (iVar2 == 0) {
      piVar3 = (int *)param_2[4];
      if (piVar3 != (int *)param_2[5]) {
        do {
          iVar2 = *piVar3;
          piVar3 = piVar3 + 1;
          if ((*(unsigned int *)(iVar2 + 0x14) & 0xffffff00) == 0x401100) {
            fn_82FFF990(*(unsigned int *)(iVar2 + 0x10));
            uVar1 = fn_8302B618(param_1 + 0x39c,*(unsigned int *)(iVar2 + 0x1c));
            if ((uVar1 & 0xffffffff) != 0) {
              fn_82FFBD98(uVar1,0);
            }
          }
        } while (piVar3 != (int *)param_2[5]);
      }
      (**(int (***)())(*param_2 + 8))(param_2);
    }
  }
  return;
}

