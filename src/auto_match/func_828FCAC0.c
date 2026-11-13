extern int fn_828F9A60();
extern int fn_82F691F0();
extern unsigned int uStack_8c;


unsigned __int64 fn_828FCAC0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piStack_90;
  unsigned int uStack_8c;
  
  if ((param_1 & 0x100000) == 0) {
    piStack_90 = (int *)0x0;
    uStack_8c = 0;
    uVar1 = fn_828F9A60(0x10000,&piStack_90);
    if (-1 < (int)uVar1) {
      uVar1 = (**(int (***)())(*piStack_90 + 0x10))();
      uVar2 = (**(int (***)())(*piStack_90 + 0xc))(piStack_90);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,uVar1);
    }
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

