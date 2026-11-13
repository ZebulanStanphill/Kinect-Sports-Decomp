extern int fn_8265C940();
extern int fn_82F93A00();
extern unsigned int uStack00000014;


void fn_82F93910(unsigned int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uStack00000014;
  
  uStack00000014 = param_1;
  iVar1 = fn_82F93A00(0xffffffff832641a4);
  if (iVar1 == 0) {
    fn_8265C940(uStack00000014,0x20ff4000);
  }
  else {
    piVar2 = (int *)fn_82F93A00(0xffffffff832641a4);
    (**(int (***)())(*piVar2 + 8))(piVar2,uStack00000014);
  }
  return;
}

