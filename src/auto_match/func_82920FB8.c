extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F691F0();


unsigned __int64 fn_82920FB8(int *param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    uVar3 = (unsigned __int64)*(unsigned int *)(*param_1 + 0x68);
    if ((unsigned __int64)*(unsigned int *)(*param_1 + 0x68) < (unsigned __int64)*(unsigned int *)(param_1[1] + 0x68)) {
      uVar3 = (unsigned __int64)*(unsigned int *)(param_1[1] + 0x68);
    }
    lVar4 = (uVar3 & 0xfffffff) << 4;
    lVar1 = fn_8265C940(lVar4,0x24810000);
    if (lVar1 != 0) {
      lVar2 = fn_8265C940(*(int *)(param_1[1] + 0x68) << 4,0x24810000);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar1,0,lVar4);
      }
      fn_8265C990(lVar1,0x24810000);
    }
  }
  return 0xffffffff80004005;
}

