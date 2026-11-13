extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230040();
extern int fn_822CA318();
extern int fn_82359C18();
extern int fn_8265C9E0();
extern int fn_8286D250();
extern int fn_8289C940();
extern int fn_82F565A0();
extern int memcpy();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B03E8;
extern unsigned int lbl_821B043C;
extern unsigned int lbl_821B0548;
extern unsigned int uStack_60;
extern unsigned int uStack_a4;


unsigned int * fn_823272B0(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned char **ppuStack_a8;
  unsigned int uStack_a4;
  unsigned char auStack_a0 [16];
  unsigned int *puStack_90;
  unsigned char auStack_80 [32];
  unsigned __int64 uStack_60;
  unsigned int *puStack_58;

  fn_822CA318();
  param_1[0x30] = 0;
  *param_1 = &lbl_821B03E8;
  param_1[0x1a] = &lbl_821B043C;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  fn_8286D250(param_1 + 0x34);
  uStack_60 = 0x82327a6800000000;
  puStack_58 = param_1;
  puVar1 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_821B0548;
    memcpy(puVar1 + 2,&uStack_60,0x38);
    puStack_90 = puVar1;
    fn_82F565A0(auStack_80,auStack_a0);
    fn_8289C940((unsigned __int64)(unsigned int)param_1[0xd] + 0x33c,auStack_80);
    fn_82F565A0(auStack_80,auStack_a0);
    fn_8289C940((unsigned __int64)(unsigned int)param_1[0xd] + 0x448,auStack_80);
    *(unsigned int **)(param_1[0xd] + 0x3e4) = param_1;
    *(unsigned int **)(param_1[0xd] + 0x440) = param_1;
    fn_82359C18(auStack_a0);
    return param_1;
  }
  uStack_a4 = 0;
  ppuStack_a8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_a8);
}
