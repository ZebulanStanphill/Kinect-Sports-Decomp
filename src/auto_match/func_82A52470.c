extern int fn_82C2B580();
extern int fn_82F691F0();


unsigned __int64 fn_82A52470(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  
  iVar1 = *param_1;
  iVar2 = fn_82C2B580((unsigned __int64)*(unsigned short *)(iVar1 + 0x22) << 3);
  param_1[2] = iVar2;
  if (iVar2 != 0) {
    if (*(short *)(iVar1 + 0x22) == 0) {
      return 0;
    }
    iVar2 = fn_82C2B580(0x1c);
    *(int *)(param_2 + 0x1a8) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (unsigned int *)(iVar2 + -4);
      lVar5 = 7;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar3 = fn_82C2B580(((unsigned __int64)*(unsigned int *)(iVar1 + 0xe4) & 0x7fffffff) * 2 + 7);
      *(unsigned int *)(*(int *)(param_2 + 0x1a8) + 4) = uVar3;
      iVar2 = *(int *)(*(int *)(param_2 + 0x1a8) + 4);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(iVar2,0,((unsigned __int64)*(unsigned int *)(iVar1 + 0xe4) & 0x7fffffff) * 2 + 7);
      }
    }
  }
  return 0xffffffff8007000e;
}

