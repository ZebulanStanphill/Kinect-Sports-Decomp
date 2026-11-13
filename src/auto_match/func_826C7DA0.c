extern int fn_8269A1F0();
extern int fn_826C59F8();


void fn_826C7DA0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)fn_826C59F8();
  if (piVar1 != (int *)0x0) {
    iVar2 = (*(int (**)())(*piVar1 + 0x48))();
    fn_8269A1F0(*(unsigned int *)(param_1 + 4),
                      *(unsigned int *)
                       (*(int *)(*(int *)(*(int *)(iVar2 + 0x1c) + 0xc) + 0x20) + 0x28));
  }
  return;
}

