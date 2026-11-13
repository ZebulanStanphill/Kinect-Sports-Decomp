extern int fn_82A49AC8();
extern int fn_82F691F0();


void fn_82A49B60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  short sVar1;
  unsigned char bVar2;
  
  sVar1 = fn_82A49AC8(param_3);
  if ((sVar1 == 1) || (sVar1 = fn_82A49AC8(param_3), sVar1 == 3)) {
    bVar2 = -(*(short *)((int)param_3 + 0xe) == 8) & 0x80;
  }
  else {
    bVar2 = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1,bVar2,param_2);
}

