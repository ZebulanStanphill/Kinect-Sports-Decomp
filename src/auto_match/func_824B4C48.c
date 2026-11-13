extern int fn_824B4798();
extern int fn_82539560();
extern unsigned int lbl_821956D4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C4848;
extern unsigned int lbl_831C484C;
extern unsigned int lbl_831C4850;


void fn_824B4C48(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  
  fn_824B4798(param_1 + 0x4c,param_2,
                (-(unsigned __int64)(*(int *)(param_1 + 0x3c) != 0) & 0xfffffffc) + 10,
                (-(unsigned __int64)(*(int *)(param_1 + 0x3c) != 0) & 0xfffffffc) + 9,lbl_831C4848,1);
  fVar1 = *(float *)(param_1 + 0x50);
  if (*(float *)(param_1 + 0x50) < *(float *)(param_1 + 0x4c)) {
    fVar1 = *(float *)(param_1 + 0x4c);
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)(fVar1 * lbl_821956D4),(double)lbl_831C484C,(double)lbl_831C4850,
               (double)ltcg_pool_0_0f,(double)lbl_821CA460);
}

