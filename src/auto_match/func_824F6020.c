extern int fn_82522ED8();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C1EB8;


void fn_824F6020(unsigned int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = &lbl_821C1EB8;
  piVar2 = (int *)param_1[3];
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 0xc))(piVar1,1);
      *piVar2 = 0;
    }
    piVar1 = (int *)piVar2[1];
    fn_82522ED8(piVar2);
    piVar2 = piVar1;
  }
  param_1[3] = 0;
  *param_1 = &lbl_821C1424;
  return;
}

