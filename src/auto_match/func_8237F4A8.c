#define _fStack00000010 ((*(unsigned __int64*)&fStack00000010))
extern unsigned int fStack00000010;
extern unsigned int fStack00000014;
extern int fn_82539560();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_8237F4A8(double param_1,double param_2,unsigned __int64 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fStack00000010;
  float fStack00000014;
  
  fStack00000010 = (float)((unsigned __int64)param_3 >> 0x20);
  dVar5 = (double)fStack00000010;
  dVar2 = (double)ltcg_pool_0_0f;
  dVar3 = (double)lbl_821CA460;
  dVar1 = (double)(float)(param_1 - dVar3);
  dVar4 = (double)(float)(param_2 - dVar3);
  _fStack00000010 = param_3;
  if (dVar5 < dVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar5,dVar1,dVar2);
  }
  if (-dVar1 < dVar5) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar5,-dVar1,dVar3);
  }
  fStack00000014 = (float)param_3;
  dVar1 = (double)fStack00000014;
  if (dVar1 < dVar4) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar1,dVar4,dVar2);
  }
  if (-dVar4 < dVar1) {
                    /* WARNING: Subroutine does not return */
    fn_82539560(dVar1,-dVar4,dVar3);
  }
  return dVar2;
}

