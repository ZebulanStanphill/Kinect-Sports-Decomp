extern int fn_82230040();
extern int fn_825BABD8();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


unsigned __int64 fn_825BAB48(unsigned __int64 param_1,int param_2,unsigned short *param_3)

{
  unsigned int *puVar1;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x10);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = *(unsigned int *)(param_2 + 4);
    puVar1[1] = *(unsigned int *)(param_2 + 4);
    puVar1[2] = *(unsigned int *)(param_2 + 4);
    *(unsigned char *)((int)puVar1 + 0xe) = 0;
    *(unsigned char *)((int)puVar1 + 0xf) = 0;
    if (puVar1 + 3 != (unsigned int *)0x0) {
      *(unsigned short *)(puVar1 + 3) = *param_3;
    }
    fn_825BABD8(param_1,param_2);
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

