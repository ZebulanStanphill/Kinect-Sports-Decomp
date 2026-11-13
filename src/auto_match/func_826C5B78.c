extern int fn_8269A1F0();
extern int fn_826C5248();
extern int fn_826C59F8();


void fn_826C5B78(int param_1)

{
  unsigned int iVar2;
  unsigned int uVar1;
  
  iVar2 = fn_826C59F8();
  if (iVar2 != 0) {
    uVar1 = fn_826C5248();
    fn_8269A1F0(*(unsigned int *)(param_1 + 4),uVar1);
  }
  return;
}

