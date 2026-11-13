extern int fn_82FAB9C0();
extern unsigned int lbl_832642E0;


unsigned __int64 fn_82FF4438(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x7c);
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    do {
      if (((param_2 == 0) || (piVar2[0x1c] == param_2)) &&
         ((param_4 == 0 || (param_4 == piVar2[0x14])))) {
        if ((piVar1 == (int *)0x0) &&
           (piVar1 = (int *)fn_82FAB9C0(lbl_832642E0 + 4,param_3),
           piVar1 == (int *)0x0)) {
          return 2;
        }
        (*(int (**)())(*piVar2 + 0x18))(piVar2,piVar1);
      }
      piVar2 = (int *)piVar2[5];
    } while (piVar2 != (int *)0x0);
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 8))(piVar1);
    }
  }
  return 1;
}

