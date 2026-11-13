extern int fn_826CD508();
extern int fn_826F7A80();
extern int fn_826FB5B0();
extern int fn_826FBAE8();
extern unsigned int uRam831f12e0;


void fn_82700E40(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  char acStack_50 [80];
  
  if ((((param_2 & 0xff) != 0) && ((*(unsigned char *)(param_1 + 0xac8) & 1) != 0)) &&
     ((*(unsigned char *)(param_1 + 0xac8) & 2) == 0)) {
    fn_826CD508(param_1 + 0xacc,0);
    *(unsigned char *)(param_1 + 0xac8) = 0;
  }
  if ((*(unsigned char *)(param_1 + 0xac8) & 1) == 0) {
    acStack_50[0] = '\0';
    if ((*(int *)(param_1 + 0xadc) == 0) ||
       (piVar2 = (int *)fn_826F7A80(param_1), piVar2 == (int *)0x0)) {
      uVar1 = *(unsigned int *)(param_1 + 0x60);
      uVar4 = (unsigned __int64)uVar1;
      if (0 < (int)uVar1) {
        iVar3 = uVar1 << 3;
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x5c) + iVar3 + -4);
          acStack_50[1] = 0;
          (**(int (***)())(*piVar2 + 0xc4))(piVar2,param_1 + 0xacc,acStack_50,param_2,acStack_50 + 1);
          uVar4 = uVar4 - 1;
          iVar3 = iVar3 + -8;
        } while (0 < (__int64)uVar4);
      }
    }
    else {
      acStack_50[1] = 0;
      (**(int (***)())(*piVar2 + 0xc4))(piVar2,param_1 + 0xacc,acStack_50,param_2,acStack_50 + 1);
    }
    if (acStack_50[0] == '\0') {
      fn_826FBAE8(param_1 + 0xacc,0,*(unsigned int *)(param_1 + 0xad0),uRam831f12e0);
    }
    else {
      fn_826FB5B0();
    }
    *(unsigned char *)(param_1 + 0xac8) = 1;
    if ((param_2 & 0xff) != 0) {
      *(unsigned char *)(param_1 + 0xac8) = 3;
    }
    return;
  }
  return;
}

