extern int fn_82230040();
extern int fn_822EB2D0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


unsigned __int64 fn_822F81C0(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x14);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *(unsigned int *)(param_2 + 4);
    puVar1[1] = *(unsigned int *)(param_2 + 4);
    puVar1[2] = *(unsigned int *)(param_2 + 4);
    *(unsigned char *)(puVar1 + 4) = 0;
    *(unsigned char *)((int)puVar1 + 0x11) = 0;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      puVar1[3] = *param_3;
    }
    fn_822EB2D0(param_1,param_2);
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

