extern int fn_8267BED0();
extern int fn_8267FD48();
extern int fn_82680500();
extern int fn_8273D528();
extern int fn_82F691F0();
extern unsigned int lbl_82002BE8;


unsigned int *
fn_826809F0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  param_1[1] = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &lbl_82002BE8;
  uVar3 = fn_8267FD48(param_2,param_3);
  param_1[5] = uVar3;
  uVar1 = fn_82680500(param_2);
  param_1[7] = (int)uVar1;
  uVar2 = fn_8267BED0(param_1,uVar1,0);
  param_1[6] = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
    param_1[3] = (int)param_3;
    param_1[4] = param_4;
    param_1[2] = (int)param_2;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar2,0,param_1[7]);
  }
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  fn_8273D528(param_1 + 9,0);
  param_1[8] = 1;
  return param_1;
}

