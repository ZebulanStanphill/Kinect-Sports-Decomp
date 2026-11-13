extern int fn_82230040();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_1c;


void fn_82869928(int param_1)

{
  unsigned int *puVar1;
  unsigned char **ppuStack_20;
  unsigned int uStack_1c;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *(unsigned int *)(param_1 + 4);
    puVar1[1] = *(unsigned int *)(param_1 + 4);
    puVar1[2] = *(unsigned int *)(param_1 + 4);
    *(unsigned char *)(puVar1 + 0xd) = 0;
    *(unsigned char *)((int)puVar1 + 0x35) = 0;
    return;
  }
  uStack_1c = 0;
  ppuStack_20 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_20);
}

