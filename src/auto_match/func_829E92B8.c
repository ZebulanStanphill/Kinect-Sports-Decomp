extern int fn_82F691F0();


unsigned __int64 fn_829E92B8(int param_1,unsigned int param_2,unsigned __int64 *param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 *plVar2;
  unsigned __int64 uVar3;
  
  if ((param_3 != (unsigned __int64 *)0x0) && ((int)param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_3,0,param_4);
  }
  if ((param_1 == 0) ||
     (((param_2 < 0x59 || (param_3 == (unsigned __int64 *)0x0)) || ((int)param_4 != 0x10)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar3 = (unsigned __int64)(param_2 - 0x10 >> 3);
    if (uVar3 != 0) {
      plVar2 = (__int64 *)(param_1 + 8);
      do {
        *param_3 = *param_3 ^ plVar2[1];
        plVar2 = plVar2 + 1;
        param_3[1] = *plVar2 + param_3[1];
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

