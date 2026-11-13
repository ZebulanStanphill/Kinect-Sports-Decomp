extern int fn_826C59F8();


void fn_826C5A78(void)

{
  int *piVar1;
  
  piVar1 = (int *)fn_826C59F8();
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x124))(piVar1,0);
  }
  return;
}

