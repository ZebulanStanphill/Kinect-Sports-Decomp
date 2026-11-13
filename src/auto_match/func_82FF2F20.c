extern int fn_82FA5190();
extern int fn_82FECE48();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264574;
extern unsigned int lbl_83264578;
extern unsigned int lbl_8326457C;


unsigned __int64 fn_82FF2F20(void)

{
  int *piVar1;
  unsigned int uVar2;
  
  piVar1 = lbl_83264574;
  while (piVar1 != (int *)0x0) {
    if (piVar1[4] == 0) {
      lbl_83264578 = 0;
      lbl_83264574 = (int *)0x0;
    }
    else {
      lbl_83264574 = (int *)piVar1[4];
    }
    lbl_8326457C = lbl_8326457C + -1;
    (**(int (***)())piVar1[1])(piVar1 + 1,0,1);
    fn_82FECE48(piVar1);
    (**(int (***)())(*piVar1 + 8))(piVar1,0);
    uVar2 = lbl_831BC768;
    (**(int (***)())*piVar1)(piVar1,0);
    fn_82FA5190(uVar2,piVar1);
    piVar1 = lbl_83264574;
  }
  lbl_83264574 = piVar1;
  return 1;
}

