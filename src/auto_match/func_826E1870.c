extern int fn_826D69D0();
extern unsigned int lbl_8200C8E0;


unsigned int * fn_826E1870(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x20);
  piVar4 = (int *)(iVar1 + 8);
  uVar2 = param_2 + 10U & 0xfffffffc;
  if (*(unsigned int *)(iVar1 + 0xc) < uVar2) {
    puVar3 = (unsigned int *)fn_826D69D0(piVar4);
  }
  else {
    puVar3 = (unsigned int *)*piVar4;
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(iVar1 + 0xc) - uVar2;
    *piVar4 = (int)puVar3 + uVar2;
  }
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = &lbl_8200C8E0;
  }
  return puVar3;
}

