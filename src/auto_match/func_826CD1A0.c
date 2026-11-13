extern int fn_826C59F8();
extern int fn_826CBFF0();


void fn_826CD1A0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_826C59F8();
  if (piVar1 != (int *)0x0) {
    iVar2 = (*(int (**)())(*piVar1 + 0x40))(piVar1);
    *(unsigned int *)(iVar2 + 0xa08) = 0;
    fn_826CBFF0(piVar1,iVar2);
  }
  return;
}

