extern int fn_82539560();
extern int fn_82553008();
extern int fn_82569980();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8260E9F8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x14));
  if (iVar1 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 * 0x30 + *(int *)((int)param_1 + 0xd8) + 0x10);
  }
  if (iVar1 != 0) {
    if (param_5 == 2) {
      if (*(int *)(iVar1 + 0x8c0) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82539560((double)*(float *)((int)param_1 + 0x88),(double)*(float *)(param_3 + 4),
                     (double)*(float *)(param_3 + 8),(double)ltcg_pool_0_0f,(double)lbl_821CA460);
      }
    }
    else if ((((param_5 == 1) || (param_5 == 3)) && ((unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0) != 0)) &&
            (*(int *)(param_3 + 0x24) != 0)) {
      fn_82553008((unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0) + 0x20,0xffffffff82196290);
    }
  }
  return;
}

