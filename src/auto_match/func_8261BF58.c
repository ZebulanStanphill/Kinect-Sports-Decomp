extern int fn_82522DF8();
extern int fn_82A1E658();
extern int fn_82A1EFC0();


void fn_8261BF58(int *param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_82522DF8(0x25c);
  *param_1 = (int)puVar2;
  *puVar2 = param_2;
  *(unsigned int *)(*param_1 + 0x238) = 0;
  *(unsigned int *)(*param_1 + 600) = 0;
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x248) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(iVar1 + 0x23c,0,0x1c);
}

