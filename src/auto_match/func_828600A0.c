extern int fn_82859E28();
extern int memset();


void fn_828600A0(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82859E28();
                    /* WARNING: Subroutine does not return */
  memset(*puVar1,0,*(unsigned int *)(param_1 + 0x3c));
}

