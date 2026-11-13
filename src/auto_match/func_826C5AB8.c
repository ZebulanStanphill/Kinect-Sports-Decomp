extern int fn_826C59F8();


void fn_826C5AB8(void)

{
  int *piVar1;
  
  piVar1 = (int *)fn_826C59F8();
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 0x124))(piVar1,1);
  }
  return;
}

