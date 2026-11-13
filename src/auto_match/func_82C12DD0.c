extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F691F0();


unsigned __int64
fn_82C12DD0(unsigned __int64 param_1,__int64 *param_2,unsigned __int64 param_3,unsigned short *param_4,
             unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*param_4;
  if (param_3 < uVar3 + *param_2) {
    uVar1 = 6;
  }
  else {
    if (0x200 < uVar3) {
      uVar3 = 0x200;
    }
    uVar2 = fn_8265C940(uVar3 + 2,0x248c8000);
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,uVar3 + 2);
    }
    if ((uVar2 & 0xffffffff) != 0) {
      fn_8265C990(uVar2,0x248c8000);
      uVar2 = 0;
    }
    uVar1 = 5;
    *param_2 = (unsigned __int64)*param_4 + *param_2;
    *param_4 = 0;
    *param_5 = (int)uVar2;
  }
  return uVar1;
}

