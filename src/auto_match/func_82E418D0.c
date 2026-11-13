unsigned __int64 fn_82E418D0(int param_1,unsigned __int64 param_2,int param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  if (param_3 == 0) {
    return 0xffffffff80070057;
  }
  if (*(unsigned short *)(param_3 + 0x20) < 0x80) {
    piVar1 = *(int **)((*(unsigned short *)(param_3 + 0x20) + 0x1b) * 4 + param_1);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82e41914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(int (***)())(*piVar1 + 0x1c))();
      return uVar2;
    }
  }
  return 0xffffffffc00d36b3;
}

