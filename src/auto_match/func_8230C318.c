extern int fn_82230040();
extern int fn_8230C750();
extern int fn_82511668();
extern int fn_8265C9E0();
extern int fn_82F68CC0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821AF398;
extern unsigned int lbl_821AF3B8;
extern unsigned int lbl_821C2424;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;


unsigned int * fn_8230C318(unsigned int *param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned char **ppuStack_50;
  unsigned int uStack_4c;
  unsigned __int64 uStack_40;
  unsigned int *puStack_38;
  unsigned int *puStack_30;
  
  uVar1 = *(unsigned int *)(param_2 + 0x114);
  param_1[3] = param_2;
  param_1[4] = param_3;
  param_1[2] = uVar1;
  *param_1 = &lbl_821AF398;
  param_1[1] = 9;
  param_1[6] = &lbl_821C2424;
  uVar1 = ltcg_pool_0_0f;
  param_1[0xc] = 0;
  param_1[0xe] = uVar1;
  uStack_4c = 0;
  ppuStack_50 = (unsigned char **)fn_8230C750;
  uStack_40 = 0x8230c75000000000;
  puStack_38 = param_1;
  puVar2 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = &lbl_821AF3B8;
    fn_82F68CC0(puVar2 + 2,&uStack_40,0x18);
    puStack_30 = puVar2;
    fn_82511668(param_1 + 6,&uStack_40);
    return param_1;
  }
  uStack_4c = 0;
  ppuStack_50 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_50);
}

