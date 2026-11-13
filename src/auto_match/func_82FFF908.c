extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


int fn_82FFF908(int param_1)

{
  int *piVar1;
  int uVar2;
  
  uVar2 = 2;
  piVar1 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 4,param_1);
  if (piVar1 != (int *)0x0) {
    uVar2 = (*(int (**)())(*piVar1 + 0x88))(piVar1);
    if ((int)uVar2 != 1) {
      (*(int (**)())(*piVar1 + 8))(piVar1);
    }
  }
  return uVar2;
}

