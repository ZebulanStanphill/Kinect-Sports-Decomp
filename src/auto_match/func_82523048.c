extern unsigned int *auStack_38;
extern int fn_8251E370();
extern int fn_82522DF8();
extern int fn_82A1EFC0();
extern unsigned int lbl_83266100;


void fn_82523048(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int *piVar4;
  unsigned char auStack_38 [40];
  
  puVar2 = (unsigned int *)fn_82522DF8(0x20);
  puVar2[2] = *(unsigned int *)*param_1;
  fn_8251E370(puVar2 + 3,0x20,0);
  piVar4 = &lbl_83266100;
  iVar3 = lbl_83266100;
  while (iVar3 != 0) {
    piVar4 = (int *)*piVar4;
    iVar3 = *piVar4;
  }
  puVar1 = (unsigned int *)piVar4[1];
  piVar4[1] = (int)puVar2;
  *puVar2 = piVar4;
  puVar2[1] = puVar1;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = puVar2;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(auStack_38,0,4);
}

