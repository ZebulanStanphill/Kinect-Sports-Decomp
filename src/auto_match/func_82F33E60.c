extern int fn_82E4FE40();
extern int fn_82F339C0();
extern int fn_82F33B70();
extern int fn_82F691F0();


unsigned __int64 fn_82F33E60(unsigned short *param_1,int param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (param_1 != (unsigned short *)0x0) {
    if (*(int *)(param_1 + 4) != 0) {
      return 0xffffffff8002000d;
    }
    iVar1 = *(int *)(param_1 + 6);
    if (iVar1 != 0) {
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 2);
      uVar2 = fn_82F33B70(*param_1,uVar3,param_1 + 8);
      if ((param_2 != 0) &&
         (fn_82F339C0(param_1,iVar1,uVar2,param_1[1],uVar3), (param_1[1] & 2) != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(param_1 + 6),0,uVar2);
      }
      if (((param_1[1] & 7) == 0) || ((param_1[1] & 0x1000) != 0)) {
        fn_82E4FE40(*(unsigned int *)(param_1 + 6));
        *(unsigned int *)(param_1 + 6) = 0;
      }
    }
  }
  return 0;
}

