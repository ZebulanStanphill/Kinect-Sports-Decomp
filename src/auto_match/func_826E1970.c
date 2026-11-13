extern int fn_826D69D0();
extern unsigned int lbl_8200C874;


unsigned int * fn_826E1970(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar3 = (int *)(iVar1 + 8);
  if (*(unsigned int *)(iVar1 + 0xc) < 8) {
    puVar2 = (unsigned int *)fn_826D69D0(piVar3,8);
  }
  else {
    puVar2 = (unsigned int *)*piVar3;
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 0xc) - 8;
    *piVar3 = (int)(puVar2 + 2);
  }
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_8200C874;
  }
  return puVar2;
}

