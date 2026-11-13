extern unsigned int *auStack_b0;
extern unsigned int *auStack_f0;
extern int fn_82230040();
extern int fn_8227CB30();
extern int fn_82359C18();
extern int fn_823831D8();
extern int fn_823CD8F8();
extern int fn_823F05B8();
extern int fn_8265C9E0();
extern int memcpy();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821B787C;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;
extern unsigned int uStack_f4;
extern unsigned int uStack_fc;


void fn_823EB840(unsigned int *param_1,int (**param_2)(),unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar2;
  __int64 lVar1;
  int (**pcStack_100)();
  unsigned int uStack_fc;
  unsigned char **ppuStack_f8;
  unsigned int uStack_f4;
  unsigned char auStack_f0 [16];
  unsigned int *puStack_e0;
  unsigned __int64 uStack_d0;
  unsigned int uStack_c8;
  int (**pcStack_c0)();
  unsigned int uStack_b8;
  unsigned char auStack_b0 [176];
  
  uStack_c8 = param_1[1];
  uStack_fc = 0;
  pcStack_100 = fn_823CD8F8;
  uStack_d0 = 0x823cd8f800000000;
  pcStack_c0 = param_2;
  uStack_b8 = param_3;
  memcpy(auStack_b0,param_4,0x80);
  puVar2 = (unsigned int *)fn_8265C9E0(0xb0);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = &lbl_821B787C;
    memcpy(puVar2 + 4,&uStack_d0,0xa0);
    pcStack_100 = param_2;
    uStack_fc = param_3;
    puStack_e0 = puVar2;
    lVar1 = fn_823F05B8((unsigned __int64)param_1[1] + 0x9f8,&pcStack_100);
    fn_8227CB30(lVar1 + 0x18,auStack_f0);
    fn_82359C18(auStack_f0);
    fn_823831D8((unsigned __int64)*param_1 + 0x710);
    return;
  }
  uStack_f4 = 0;
  ppuStack_f8 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_f8);
}

