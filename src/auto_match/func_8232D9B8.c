extern unsigned int lbl_83265A28;


void fn_8232D9B8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  piVar1 = *(int **)(param_1 + 0xc);
  iVar2 = piVar1[2];
  piVar1[2] = (unsigned int)(-1 < (int)(-lbl_83265A28 & ~lbl_83265A28));
                    /* WARNING: Could not recover jumptable at 0x8232da04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*piVar1 + 0x14))(piVar1,iVar2);
  return;
}

