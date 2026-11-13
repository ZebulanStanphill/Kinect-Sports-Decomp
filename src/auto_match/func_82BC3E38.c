extern int fn_82B7BD28();
extern int fn_82BC33B0();
extern int memset();
extern unsigned int lbl_820E4610;


void fn_82BC3E38(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  
  puVar2 = (unsigned int *)fn_82BC33B0();
  puVar2[0x2b] = 0;
  puVar2[5] = 1;
  *puVar2 = &lbl_820E4610;
  puVar2[4] = 1;
  puVar2[0x2c] = 0xffffffff;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x1b] = 0;
  puVar2[0x1a] = 0;
  uVar1 = fn_82B7BD28(*(unsigned int *)(param_3 + 0x5ac),0x1e);
                    /* WARNING: Subroutine does not return */
  memset(uVar1,0,0x1e);
}

