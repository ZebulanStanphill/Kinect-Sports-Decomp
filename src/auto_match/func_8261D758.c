extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


/* WARNING: Removing unreachable block (ram,0x8261d7a4) */
/* WARNING: Removing unreachable block (ram,0x8261d7d8) */
/* WARNING: Removing unreachable block (ram,0x8261d7dc) */

void fn_8261D758(int param_1)

{
  double dVar1;
  
  dVar1 = (double)ltcg_pool_0_0f;
  if (dVar1 < (double)*(float *)(param_1 + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)*(float *)(param_1 + 0x18),(double)*(float *)(param_1 + 0x1c),dVar1,dVar1,
               (double)lbl_821CA460);
}

