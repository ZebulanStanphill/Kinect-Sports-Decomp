extern int fn_82E245D8();
extern int fn_82F691F0();
extern unsigned int lbl_8214BF98;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_82E23750(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  double dVar1;
  __int64 lVar2;
  
  lVar2 = fn_82E245D8();
  dVar1 = lbl_8214BF98;
  if (-1 < lVar2) {
    *(double *)(param_1 + 0xe0) = (double)param_4;
    *(double *)(param_1 + 0xd0) = (double)param_3;
    *(unsigned int *)(param_1 + 0xcc) = (unsigned int)param_2 & 0xffff;
    *(unsigned int *)(param_1 + 0x104) = 0;
    *(unsigned int *)(param_1 + 0xf0) = 500;
    *(unsigned int *)(param_1 + 0xe8) = 10000;
    *(unsigned int *)(param_1 + 0xec) = 0x5a;
    *(unsigned int *)(param_1 + 200) = (unsigned int)(unsigned short)((unsigned __int64)param_2 >> 0x10);
    *(unsigned int *)(param_1 + 0xfc) = 0;
    *(double *)(param_1 + 0xd8) = (double)param_4 * dVar1;
    *(unsigned int *)(param_1 + 0xf8) = 0;
    *(unsigned int *)(param_1 + 0x108) = 0;
    *(unsigned int *)(param_1 + 0x100) = 0;
    *(unsigned int *)(param_1 + 0xbc) = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x74,0,0x20);
  }
  return lVar2;
}

