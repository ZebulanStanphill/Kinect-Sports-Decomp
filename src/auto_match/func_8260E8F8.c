extern int fn_82539560();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;


void fn_8260E8F8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  if (param_5 == 2) {
                    /* WARNING: Subroutine does not return */
    fn_82539560((double)*(float *)(param_1 + 0x88),(double)*(float *)(param_3 + 4),
                 (double)*(float *)(param_3 + 8),(double)*(float *)(param_3 + 0x10),
                 (double)*(float *)(param_3 + 0x14));
  }
  if (((param_5 == 1) || (param_5 == 3)) && (*(int *)(param_3 + 0x18) != 0)) {
    lbl_831D450C = 0xff;
    lbl_831D4508 = 0;
    lbl_831D44F8 = ltcg_pool_0_0f;
  }
  return;
}

