extern int fn_82F6A4B0();


int fn_826E3FB0(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iVar4;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  char cStack_2d;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = (**(int (***)())(*param_1 + 0x10))(param_1);
  cStack_30 = '\0';
  cStack_2f = '\0';
  cStack_2e = '\0';
  cStack_2d = '\0';
  iVar4 = 1;
  iVar3 = (**(int (***)())(*param_1 + 0x28))(param_1,&cStack_30,4);
  if (iVar3 < 1) {
    return 1;
  }
  if (cStack_30 == 'C') {
LAB_826e4170:
    if ((cStack_2f == 'W') && (cStack_2e == 'S')) {
      iVar4 = 2;
      goto LAB_826e40dc;
    }
  }
  else {
    if (cStack_30 == 'D') {
      if ((cStack_2f == 'D') && (cStack_2e == 'S')) {
        iVar4 = 0xe;
      }
      goto LAB_826e40dc;
    }
    if (cStack_30 == 'F') goto LAB_826e4170;
    if (cStack_30 != 'G') {
      if (cStack_30 == -0x77) {
        if (((cStack_2f == 'P') && (cStack_2e == 'N')) && (cStack_2d == 'G')) {
          iVar4 = 0xb;
        }
      }
      else if ((cStack_30 == -1) && (cStack_2f == -0x28)) {
        iVar4 = 10;
      }
      goto LAB_826e40dc;
    }
    if (((cStack_2f == 'I') && (cStack_2e == 'F')) && (cStack_2d == '8')) {
      iVar4 = 0xc;
    }
  }
  if ((cStack_2f == 'F') && (cStack_2e == 'X')) {
    iVar4 = 3;
  }
LAB_826e40dc:
  (**(int (***)())(*param_1 + 0x38))(param_1,uVar1,0);
  if ((((iVar4 == 1) && (uVar2 = (**(int (***)())(*param_1 + 4))(param_1), (uVar2 & 0xffffffff) != 0))
      && (uVar2 = fn_82F6A4B0(uVar2,0x2e), (uVar2 & 0xffffffff) != 0)) &&
     (iVar3 = thunk_FUN_82f65ac0(uVar2,0xffffffff8200d2b8), iVar3 == 0)) {
    iVar4 = 0xd;
  }
  return iVar4;
}

