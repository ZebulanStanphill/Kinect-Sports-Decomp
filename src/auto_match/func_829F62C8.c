extern int fn_8263CBB0();
extern unsigned int lbl_82079FE0;


void fn_829F62C8(unsigned __int64 param_1,int param_2)

{
  __int64 lVar1;
  int *piVar2;
  
  lVar1 = 0x54;
  piVar2 = (int *)&lbl_82079FE0;
  do {
    (**(int (***)())(*piVar2 + param_2 + 0x40))(param_2,piVar2[1]);
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 2;
  } while (lVar1 != 0);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(param_2,0,0,0x80000000);
}

