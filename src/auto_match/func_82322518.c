extern int fn_82230040();
extern int fn_824C0AC0();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


unsigned __int64 fn_82322518(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char **ppuStack_30;
  unsigned int uStack_2c;
  
  puVar2 = (unsigned int *)fn_8265C9E0(0x1c);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = *(unsigned int *)(param_2 + 4);
    puVar2[1] = *(unsigned int *)(param_2 + 4);
    puVar2[2] = *(unsigned int *)(param_2 + 4);
    *(unsigned char *)(puVar2 + 6) = 0;
    *(unsigned char *)((int)puVar2 + 0x19) = 0;
    if (puVar2 + 3 != (unsigned int *)0x0) {
      puVar4 = puVar2 + 4;
      puVar3 = param_3 + 1;
      puVar2[3] = *param_3;
      puVar2[4] = 0;
      puVar2[5] = 0;
      if (puVar4 != puVar3) {
        uVar1 = puVar2[5];
        puVar2[5] = param_3[2];
        param_3[2] = uVar1;
        uVar1 = *puVar4;
        *puVar4 = *puVar3;
        *puVar3 = uVar1;
      }
    }
    fn_824C0AC0(param_1,param_2);
    return param_1;
  }
  uStack_2c = 0;
  ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

