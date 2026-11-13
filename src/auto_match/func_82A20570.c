extern int fn_8265C940();
extern int memset();
extern unsigned int lbl_8315D2EC;


unsigned __int64 fn_82A20570(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  if (*param_3 < param_4) {
    lVar1 = fn_8265C940(((unsigned __int64)param_4 & 0x3fffffff) << 2,lbl_8315D2EC);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(((unsigned __int64)*param_2 & 0x3fffffff) * 4 + lVar1,0,
                   ((unsigned __int64)param_4 - (unsigned __int64)*param_3 & 0x3fffffff) << 2);
    }
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

