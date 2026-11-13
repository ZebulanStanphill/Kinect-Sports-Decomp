extern unsigned int *auStack_2068;
extern int fn_82F691F0();


void fn_8265B510(void)

{
  int iVar1;
  unsigned int in_stack_00000054;
  unsigned char auStack_2068 [8296];
  
  in_stack_00000054 = in_stack_00000054 & 3;
  iVar1 = 0;
  if (((in_stack_00000054 != 1) && (in_stack_00000054 != 2)) && (in_stack_00000054 != 3)) {
    iVar1 = -0x7ff8ffa9;
  }
  if (-1 < iVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(auStack_2068,0,0x2000);
  }
  return;
}

