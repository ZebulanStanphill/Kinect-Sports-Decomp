extern int fn_82A5A8E0();
extern int fn_82A5A9E0();


unsigned __int64 fn_82A5ABE8(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  
  if (param_2 == 0) {
    lVar2 = fn_82A5A8E0(param_1 + 0x84,param_3);
  }
  else {
    for (piVar1 = *(int **)(param_1 + 0x150); (piVar1 != (int *)0x0 && (*piVar1 != param_2));
        piVar1 = (int *)piVar1[1]) {
    }
    lVar2 = fn_82A5A9E0(param_1 + 0x84,piVar1);
  }
  return -(unsigned __int64)(lVar2 == 0) & 0xffffffff8007000e;
}

