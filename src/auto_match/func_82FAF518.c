extern int fn_82FAB9C0();
extern void *fn_83013B98();
extern unsigned int lbl_832642E0;


int fn_82FAF518(int *param_1,unsigned int param_2)

{
  int uVar1;
  int *piVar2;
  void *iVar3;
  
  if (param_2 == 0) {
    uVar1 = 0xe;
  }
  else {
    piVar2 = (int *)fn_82FAB9C0((char *)lbl_832642E0 + 4,param_2);
    if (piVar2 == (int *)0x0) {
      uVar1 = 0xf;
    }
    else {
      uVar1 = (*(int (**)())(*param_1 + 0x15c))(param_1,piVar2);
      if ((int)uVar1 == 1) {
        iVar3 = fn_83013B98(param_1 + 0x1f,param_2,piVar2);
        if (iVar3 == 0) {
          uVar1 = 2;
        }
        else {
          (*(int (**)())(*piVar2 + 0x2c))(piVar2,param_1);
          (*(int (**)())(*param_1 + 4))(param_1);
        }
      }
      (*(int (**)())(*piVar2 + 8))(piVar2);
    }
  }
  return uVar1;
}

