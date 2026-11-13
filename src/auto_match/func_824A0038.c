extern unsigned int *auStack_28;
extern int fn_82230040();
extern int fn_824A0AD8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


void fn_824A0038(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  unsigned char auStack_28 [40];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *(unsigned int *)(param_1 + 100);
    puVar1[1] = *(unsigned int *)(param_1 + 100);
    puVar1[2] = *(unsigned int *)(param_1 + 100);
    *(unsigned char *)(puVar1 + 5) = 0;
    *(unsigned char *)((int)puVar1 + 0x15) = 0;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      puVar1[3] = param_2;
      puVar1[4] = param_3;
    }
    fn_824A0AD8(auStack_28,param_1 + 0x60);
    return;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

